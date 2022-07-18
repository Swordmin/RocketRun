using TMPro;
using UnityEngine;

public class ShopItemUI : MonoBehaviour
{
    [SerializeField] private string _id;
    [SerializeField] private float _price;
    [SerializeField] private TextMeshProUGUI _textMeshPrice;
    [SerializeField] private TextMeshProUGUI _textMeshSale;
    [SerializeField] private TextMeshProUGUI _textMeshButton;
    [SerializeField] private RocketSetup _rocketSetup;
    [SerializeField] private RocketPartType _type;
    [SerializeField] private bool _isBuy;
    [SerializeField] private TextMeshProUGUI _powerText;
    [SerializeField] private TextMeshProUGUI _accelerationSpeedText;
    [SerializeField] private TextMeshProUGUI _rotateSpeedText;
    [SerializeField] private TextMeshProUGUI _fuelText;

    private void Awake()
    {
        TextsSetup();
        CheckSaleState();
    }

    public void Buy()
    {
        if (!_isBuy)
        {
            if (Wallet.Instance.Count >= _price)
            {
                Wallet.Instance.Pay(_price);
                _rocketSetup.UpdatePart(_type, _id);
                BinarySaveSystem saveSystem = new BinarySaveSystem();
                SaveData saveData = saveSystem.Load();
                saveData.AddPurchasedPart(_id);
                saveSystem.Save(saveData);
                _isBuy = true;
                SaleView();
            }
        }
        else
        {
            _rocketSetup.UpdatePart(_type, _id);
        }
    }

    private void SaleView()
    {
        _textMeshPrice.gameObject.SetActive(false);
        _textMeshSale.gameObject.SetActive(true);
        _textMeshButton.text = "PUT";
    }

    private void TextsSetup()
    {
        PartRocket part = Resources.Load<PartRocket>(_id);
        _textMeshPrice.text = $"{_price}$";
        _powerText.text = $"power {part.Power}";
        _accelerationSpeedText.text = $"acceleration Speed {part.AccelerationSpeed}";
        _rotateSpeedText.text = $"rotate Speed {part.RotateSpeed}";
        _fuelText.text = $"fuel {part.Fuel}";
    }

    private void CheckSaleState()
    {
        BinarySaveSystem saveSystem = new BinarySaveSystem();
        SaveData saveData = saveSystem.Load();
        
        if (_isBuy && !saveData.IsPartBuy(_id))
        {
            saveData.AddPurchasedPart(_id);
            saveSystem.Save(saveData);
        }

        _isBuy = saveData.IsPartBuy(_id);
        if (_isBuy)
        {
            SaleView();
        }
    }

}
    

