using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class PartRocket : MonoBehaviour, IPause
{
    public Action OnFuelEnd;

    [SerializeField] private string _id;
    public float Power => _power;    
    [SerializeField] private float _power;
    [SerializeField] private float _currentPower;
    public float AccelerationSpeed => _accelerationSpeed;
    [SerializeField] private float _accelerationSpeed;
    public float RotateSpeed => _rotateSpeed;
    [SerializeField] private float _rotateSpeed;
    public float Mass => _mass;
    [SerializeField] private float _mass;
    public float Fuel => _fuel;
    [SerializeField] private float _fuel;
    public float StartFuel => _startFuel;
    [SerializeField] private float _startFuel;
    
    [SerializeField] private Rigidbody _rocketRigidbody;
    [SerializeField] private bool _active;

    [SerializeField] private List<ParticleSystem> _fireEffects = new List<ParticleSystem>();
    private bool _fuelEmpty => _fuel <= 0;
    private void Awake()
    {
        _startFuel = _fuel;
        if(!_rocketRigidbody)
            _rocketRigidbody = GetComponentInParent<Rigidbody>();
    }
    private void Update()
    {
        if (_active)
        {
            DOTween.To(() => _currentPower, x => _currentPower = x, _power, _accelerationSpeed).SetEase(Ease.InExpo);
            _rocketRigidbody.velocity = ((_rocketRigidbody.transform.up * (_currentPower + 1f) + (Vector3.down * 1f)));
        }
        else
        {
            if (_fuel <= 0)
                _currentPower = 0;
        }
    }
    public void Launch()
    {
        if (_fuel != 0)
        {
            _active = true;
            StartCoroutine(FuelTick());
        }

        if(_fireEffects.Count > 0)
            _fireEffects.ForEach((fireEffect)=> fireEffect.Play());
        if(PauseController.Instance.IsPause)
            Pause();
    }
    public void Resume()
    {
        _active = true;
        _fireEffects.ForEach((fire) => fire.Play());
        StartCoroutine(FuelTick());
    }

    public void Pause()
    {
        _active = false;
        _rocketRigidbody.velocity = Vector3.zero;
        _fireEffects.ForEach((fire) => fire.Pause());
    }
    public void AddFuel(float fuel)
    {
        if (fuel < 0)
            throw new ArgumentException("Value must be positive");
        if ((_fuel + fuel) > _startFuel)
        {
            _fuel = _startFuel;
            return;
        } 
        _fuel += fuel;
    }

    public void AddPower(float power)
    {
        if (power < 0)
            throw new ArgumentException("Value must be positive");
        _power += power;
    }

    public void AddRotateSpeed(float speed)
    {
        if (speed < 0)
            throw new ArgumentException("Value must be positive");
        _rotateSpeed += speed;
    }

    public void StopFire()
    {
        _fireEffects.ForEach((fireEffect)=> fireEffect.Stop());
    }
    private IEnumerator FuelTick()
    {
        while (!_fuelEmpty && _active)
        {
            yield return new WaitForSeconds(1);
            _fuel--;
        }

        if (_active)
        {
            OnFuelEnd?.Invoke();
            _active = false;
            if (_fireEffects.Count > 0)
                StopFire();
        }
    }


}
