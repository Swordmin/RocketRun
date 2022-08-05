using UnityEngine;

public class TouchInputRocketGame : TouchInput
{    
    [SerializeField] private Rocket _rocket;

    protected override void FixedUpdate()
    {
        base.FixedUpdate();
        RocketMove();
    }

    private void RocketMove()
    {
        if (Input.touchCount == 0)
            _direction = Vector2.zero;
        if (_direction.x > 0.1f && _direction.x != 0)
            _rocket.RotateLeft();
        if (_direction.x < 0.1f && _direction.x != 0)
            _rocket.RotateRight();
    }
}
