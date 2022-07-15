using System;
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

    private void Awake()
    {
        Spawn();
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
            GameObject createdObject = Instantiate(_objects[Random.Range(0, _objects.Length)], new Vector2(x,y),Quaternion.identity);
            if (_useRandomSize)
            {
                float size = Random.Range(0.10f, 0.70f);
                createdObject.transform.localScale = new Vector2(size, size);
            }
            createdObject.transform.parent = _parent;
            createdObject.GetComponent<SpriteRenderer>().flipX = Convert.ToBoolean(Random.Range(0,2));
        }
    }
}
