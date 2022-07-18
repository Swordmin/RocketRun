using System;
using System.Collections;
using UnityEngine;
using Random = UnityEngine.Random;

public class Spawner : MonoBehaviour
{
    [SerializeField] private GameObject[] _objects;
    [SerializeField] private int _count;
    [SerializeField] private Vector2 _size;
    [SerializeField] private bool _useRandomSize;
    [SerializeField] private Color _sizeColor;
    [SerializeField] private Transform _parent;
    [SerializeField] private bool _isTimer;
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
            GameObject randomObject = _objects[Random.Range(0, _objects.Length)];
            GameObject createdObject = Instantiate(randomObject, new Vector2(x,y),randomObject.transform.rotation);
            if (_useRandomSize)
            {
                float size = Random.Range(0.70f, 1f);
                createdObject.transform.localScale = new Vector3(size, size, size);
            }
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
