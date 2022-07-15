using UnityEngine;

[RequireComponent(typeof(SpriteRenderer))]
public class Money : MonoBehaviour
{
    [SerializeField] private SpriteRenderer _sprite;
    public float MoneyCount => _moneyCount;
    [SerializeField] private float _moneyCount;

    private void Initialized()
    {
        InitializedCount();
        InitializedSprite();
    }

    private void InitializedSprite()
    {
        if (_moneyCount == 1)
            _sprite.sprite = Resources.Load<Sprite>("Sprites/Money/Coin/Coins 1");
        if(_moneyCount > 1 && _moneyCount <= 10)
            _sprite.sprite = Resources.Load<Sprite>("Sprites/Money/Coin/Coins 10");
        if(_moneyCount > 10 && _moneyCount <= 20)
            _sprite.sprite = Resources.Load<Sprite>("Sprites/Money/Coin/Coins 20");
        if(_moneyCount > 20 && _moneyCount <= 50)
            _sprite.sprite = Resources.Load<Sprite>("Sprites/Money/Coin/Coins 50");
        if(_moneyCount > 50 && _moneyCount <= 100)
            _sprite.sprite = Resources.Load<Sprite>("Sprites/Money/Diamond/Diamonds");
    }
    private void InitializedCount()
    {
        int hight = (int)transform.position.y;
        if (hight < 10)
            _moneyCount = Random.Range(1, 5);
        if (hight > 10 && hight <= 30)
            _moneyCount = Random.Range(4, 11);
        if (hight > 30 && hight <= 60)
            _moneyCount = Random.Range(11, 30);
        if (hight > 60)
            _moneyCount = Random.Range(30, 80);
    }
    private void Awake()
    {
        _sprite = GetComponent<SpriteRenderer>();
        Initialized();
    }
}
