using System;
using System.Collections;
using System.Collections.Generic;
using DG.Tweening;
using UnityEngine;

public class PartRocket : MonoBehaviour, IPause
{
    public Action OnFuelEnd;
    
    
    [Header("Part сharacteristics ")]
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
    
    [Space(10)]
    [SerializeField] private List<ParticleSystem> _fireEffects = new List<ParticleSystem>();
    
    private Rigidbody _rocketRigidbody;
    private bool _active;
    private bool _fuelEmpty => _fuel <= 0;
    
    private void Awake()
    {
        _power += 0.7f;
        _startFuel = _fuel;
        if(!_rocketRigidbody)
            _rocketRigidbody = GetComponentInParent<Rigidbody>();
    }
    private void Update()
    {
        if (_active)
        {
            DOTween.To(() => _currentPower, x => _currentPower = x, _power, _accelerationSpeed).SetEase(Ease.InExpo);
            _rocketRigidbody.velocity = ((_rocketRigidbody.transform.up * (_currentPower + 0.3f) + (Vector3.down * 1)));
        }
        else
        {
            _currentPower = 0;
        }
    }

    #region PartStateChange
    
    public void Launch()
    {
        if (_fuel != 0)
        {
            _active = true;
            StartCoroutine(FuelTick());
        }

        if(_fireEffects.Count > 0)
            ActivateFire();
        if(PauseController.Instance.IsPause)
            Pause();
    }
    public void Stop()
    {
        _active = false;
        _currentPower = 0;
        StopCoroutine(nameof(FuelTick));
        StopFireEffect();
    }
    #endregion
    #region Pause
    public void Resume()
    {
        _active = true;
        ActivateFire();
        StartCoroutine(FuelTick());
    }
    public void Pause()
    {
        _active = false;
        _rocketRigidbody.velocity = Vector3.zero;
        _fireEffects.ForEach((fire) => fire.Pause());
    }
    #endregion

    #region Characteristics change

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

    #endregion

    #region EffectControl
    public void StopFireEffect()
    {
        _fireEffects.ForEach((fireEffect)=> fireEffect.Stop());
    }
    public void DisableFireEffect()
    {
        _fireEffects.ForEach((fireEffect)=> fireEffect.Pause());
    }
    public void ActivateFire()
    {
        _fireEffects.ForEach((fire) => fire.Play());
    }
    #endregion
    
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
                StopFireEffect();
        }
    }

    
}
