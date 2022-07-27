using TMPro;
using UnityEngine;

public class ShopBonusUI : MonoBehaviour
{
    [SerializeField] private string _id;
    [SerializeField] private float _price;
    [SerializeField] private string _descriptionTranslateId;
    [SerializeField] private string _description;
    [SerializeField] private TextMeshProUGUI _textMeshPrice;
    [SerializeField] private TextMeshProUGUI _textMeshSale;
    [SerializeField] private bool _isBuy;
    [SerializeField] private TextMeshProUGUI _textMeshDescriptionText;
    [SerializeField] private GameObject _buttonBuy;

    private void Awake()
    {
        CheckSaleState();
        _textMeshDescriptionText.text = TranslateService.Instance.Change(_descriptionTranslateId) + _description;
        _textMeshPrice.text = $"{_price}";
    }

    public void Buy()
    {
        if (!_isBuy)
        {
            if (Wallet.Instance.Count >= _price)
            {
                Wallet.Instance.Pay(_price);
                BinarySaveSystem saveSystem = new BinarySaveSystem();
                SaveData saveData = saveSystem.Load();
                saveData.AddPurchasedPart(_id);
                saveSystem.Save(saveData);
                _buttonBuy.SetActive(false);
                _textMeshSale.gameObject.SetActive(true);
                _textMeshPrice.gameObject.SetActive(false);
                _isBuy = true;
            }
        }
    }
    private void SaleView()
    {
        _textMeshPrice.gameObject.SetActive(false);
        _textMeshSale.gameObject.SetActive(true);
        _buttonBuy.SetActive(false);
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
