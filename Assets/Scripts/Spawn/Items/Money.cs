using UnityEngine;

[RequireComponent(typeof(SpriteRenderer))]
public class Money : Item
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
        if(_moneyCount > 10 && _moneyCount <= 50)
            _sprite.sprite = Resources.Load<Sprite>("Sprites/Money/Coin/Coins 20");
        if(_moneyCount > 50 && _moneyCount <= 90)
            _sprite.sprite = Resources.Load<Sprite>("Sprites/Money/Coin/Coins 50");
        if(_moneyCount > 100 && _moneyCount <= 150)
            _sprite.sprite = Resources.Load<Sprite>("Sprites/Money/Diamond/Diamonds");
        if(_moneyCount > 150 && _moneyCount <= 200)
            _sprite.sprite = Resources.Load<Sprite>("Sprites/Money/Diamond/Diamonds 2");
    }
    private void InitializedCount()
    {
        int hight = (int)transform.position.y;
        if (hight < 10)
            _moneyCount = Random.Range(1, 10);
        if (hight > 10 && hight <= 90)
            _moneyCount = Random.Range(10, 20);
        if (hight > 90 && hight <= 140)
            _moneyCount = Random.Range(20, 60);
        if (hight > 140 && hight <= 190)
            _moneyCount = Random.Range(60, 100);
        if (hight > 190)
            _moneyCount = Random.Range(100, 125);
    }
    private void Awake()
    {
        _sprite = GetComponent<SpriteRenderer>();
        Initialized();
    }
}
