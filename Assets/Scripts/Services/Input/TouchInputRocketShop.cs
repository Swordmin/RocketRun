using UnityEngine;

public class TouchInputRocketShop : TouchInput
{
    [SerializeField] private Rocket _rocket;

    protected override void Update()
    {
        base.Update();
        RocketRotate();
    }

    private void RocketRotate()
    {
        if (Input.touchCount == 0)
            _direction = Vector2.zero;
        if (_direction.x > 0.5f && _direction.x != 0)
            _rocket.transform.Rotate(0,-1,0);
        if (_direction.x < 0.5f && _direction.x != 0)
            _rocket.transform.Rotate(0,1,0);
    }
}
