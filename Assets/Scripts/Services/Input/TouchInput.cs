using UnityEngine;
public class TouchInput : MonoBehaviour
{
    [SerializeField] protected Vector2 _direction;
    [SerializeField] private Vector2 _startPos;

    protected virtual void Update()
    {
        if (Input.touchCount > 0)
        {
            Touch touch = Input.GetTouch(0);
            switch (touch.phase)
            {
                case TouchPhase.Began:
                    _startPos = touch.position;
                    break;
                case TouchPhase.Moved:
                    _direction = touch.position - _startPos;
                    break;
                case TouchPhase.Ended:
                    break;
            }
        }
    }
    
}
