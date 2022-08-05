using System;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class SpeedIndexUI : MonoBehaviour
{

    [SerializeField] private Rocket _rocket;

    private const float MIN_SPEED_ANGLE = 20;
    private const float MAX_SPEED_ANGLE = -360;

    [SerializeField] private float _speedMax;
    [SerializeField] private float _speed;
    
    [SerializeField] private Transform _needle;

    private void Awake()
    {
        _speed = 0;
        _speedMax = 200f;
    }

    private void Update()
    {

        if (_speed > _speedMax)
            _speed = _speedMax;
        
        if (_rocket.CurrentEngine)
        {
            _speed = (_rocket.CurrentEngine.CurrentPower * 10);
        }
        _needle.DORotate(new Vector3(0, 0, GetSpeedRotation()), 1);
    }

    private float GetSpeedRotation()
    {
        float totalAngleSize = MIN_SPEED_ANGLE - MAX_SPEED_ANGLE;

        float speedNormalize = _speed / _speedMax;

        return MIN_SPEED_ANGLE - speedNormalize * totalAngleSize;
    }
    
}
