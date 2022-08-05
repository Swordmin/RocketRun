using System;
using System.Collections;
using UnityEngine;
using Random = UnityEngine.Random;

public class Spawner : MonoBehaviour
{
    [SerializeField] private GameObject[] _objects;
    [SerializeField] private int _count;
    [SerializeField] private Vector3 _size;
    [Space(10)]
    [SerializeField] private bool _useRandomSize;
    [SerializeField, Range(0.1f, 2f)] private float _minRandomSize;
    [SerializeField, Range(0.1f, 2f)] private float _maxRandomSize;
    [Space(10)]
    [SerializeField] private bool _useRandomRotate;
    [SerializeField] private Color _sizeColor;
    [SerializeField] private Transform _parent;
    [SerializeField] private bool _isTimer;
    [SerializeField] private bool _useZAxis;   
    [SerializeField] private float _cooldown;

    private void Awake()
    {
        if (!_isTimer)
            Spawn();
        else
        {
            Spawn();
            StartCoroutine(SpawnTick());
        }

    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.color = _sizeColor;
        Gizmos.DrawCube(transform.position, _size * 2);
    }

    private void Spawn()
    {
        for (int i = 0; i < _count; i++)
        {
            float x = Random.Range(transform.position.x - _size.x, transform.position.x + _size.x);
            float y = Random.Range(transform.position.y - _size.y, transform.position.y + _size.y);
            float z = _useZAxis ? Random.Range(transform.position.z - _size.z, transform.position.z + _size.z) : 0;
            GameObject randomObject = _objects[Random.Range(0, _objects.Length)];
            GameObject createdObject = Instantiate(randomObject, new Vector3(x,y,z),randomObject.transform.rotation);
            if (_useRandomSize)
            {
                float size = Random.Range(_minRandomSize, _maxRandomSize);
                createdObject.transform.localScale = new Vector3(size, size, size);
            }
            if (_useRandomRotate)
                createdObject.transform.rotation = new Quaternion(Random.Range(-360, 360), Random.Range(-360, 360), Random.Range(-360, 360), Random.Range(-360, 360));
            createdObject.transform.parent = _parent;
            if (createdObject.TryGetComponent(out SpriteRenderer sprite))
            {
                sprite.flipX = Convert.ToBoolean(Random.Range(0, 2));
            }
        }
    }

    private IEnumerator SpawnTick()
    {
        while (true)
        {
            yield return new WaitForSeconds(_cooldown);
            Spawn();
        }
    }
    
}
