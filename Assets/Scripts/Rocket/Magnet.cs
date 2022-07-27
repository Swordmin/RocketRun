using DG.Tweening;
using UnityEngine;


[RequireComponent(typeof(BoxCollider))]
public class Magnet : MonoBehaviour
{
    [SerializeField] private Transform _rocket;
    [SerializeField] private Vector3 _size;
    private BoxCollider _collider;
    private void Awake()
    {
        _collider = GetComponent<BoxCollider>();
        BinarySaveSystem saveSystem = new BinarySaveSystem();
        SaveData saveData = saveSystem.Load();
        if (saveData.IsPartBuy("Magnet area + 10%"))
            _size += (_size * 10) / 100;
        if (saveData.IsPartBuy("Magnet area + 20%"))
            _size += (_size * 20) / 100;
        if (saveData.IsPartBuy("Magnet area + 30%"))
            _size += (_size * 30) / 100;
        if (saveData.IsPartBuy("Magnet area + 50%"))
            _size += (_size * 50) / 100;
        _collider.size = _size;
    }
    
    private void Update()
    {
        transform.position = _rocket.transform.position;
    }


    private void OnTriggerEnter(Collider other)
    {
        if (other.TryGetComponent(out Item item ))
        {
            item.transform.DOMove(transform.position, 0.1f);
        }
    }
}
