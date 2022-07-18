using UnityEngine;
using Random = UnityEngine.Random;

[RequireComponent(typeof(Rigidbody))]
public class Block : MonoBehaviour, IPause
{
    [SerializeField] private Rigidbody _rigidbody;
    [SerializeField] private Vector2 _direction;
    [SerializeField] private float _speed;
    [SerializeField] private float _destoroyTime;
    private bool _isPause;
    private void Awake()
    {
        PauseController.Instance.AddPause(this);
        _speed *= Random.Range(0.5f, 2.5f);
        _rigidbody = GetComponent<Rigidbody>();
        Destroy(gameObject, _destoroyTime);
    }

    private void Update()
    {
        if (Input.touchCount > 0)
        {
            _rigidbody.AddForce(Vector3.up * 5, ForceMode.Impulse);
        }

        if (!_isPause)
            _rigidbody.velocity = _direction * _speed;
        else
            _rigidbody.velocity = Vector3.zero;
    }

    public void Resume()
    {
        _rigidbody.velocity = _direction * _speed;
    }

    public void Pause()
    {
        _rigidbody.velocity = Vector3.zero;
    }
}
