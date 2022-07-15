using TMPro;
using UnityEngine;

public class MoneyViewerUI : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _textMesh;

    private void Start()
    {
        if (Wallet.Instance)
        {
            _textMesh.text = $"{Wallet.Instance.Count}";
            Wallet.Instance.OnMoneyChange += count => _textMesh.text = $"{count}";
        }
    }
}
