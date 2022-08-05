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
    [SerializeField] private PartRocket _part;
    private Wallet _wallet;

    private void Start()
    {
        _part = Resources.Load<PartRocket>(_id);
        TextsSetup();
        CheckSaleState();
        _wallet = Wallet.Instance ?? new Wallet(1000);
    }


    public void Buy()
    {
        if (!_isBuy)
        {
            if (_wallet.Count >= _price)
            {
                _wallet.Pay(_price);
                _rocketSetup.UpdatePart(_type, _id);
                BinarySaveSystem saveSystem = new BinarySaveSystem();
                SaveData saveData = saveSystem.Load();
                saveData.AddPurchasedPart(_id);
                saveSystem.Save(saveData);
                _textMeshPrice.gameObject.SetActive(false);
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
        _textMeshButton.text = TranslateService.Instance.Change("Put");
    }

    private void TextsSetup()
    {
        _textMeshPrice.text = $"{_price}$";
        _powerText.text = $"{TranslateService.Instance.Change("Power", _powerText)} {_part.Power}";
        _accelerationSpeedText.text = $"{TranslateService.Instance.Change("AccelerationSpeed", _accelerationSpeedText)} {_part.AccelerationSpeed}";
        _rotateSpeedText.text = $"{TranslateService.Instance.Change("RotateSpeed", _rotateSpeedText)} {_part.RotateSpeed}";
        _fuelText.text = $"{TranslateService.Instance.Change("Fuel", _fuelText)} {_part.Fuel}";
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
        else
        {
            _textMeshButton.text = TranslateService.Instance.Change("Buy");
        }
    }

    public void SetId(string id) 
    {
        _id = id;
    }

}
    

