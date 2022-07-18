using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using DG.Tweening;
using TMPro;
using UnityEngine.UI;

public class MainMenu : MonoBehaviour
{
    [SerializeField] private int _gameSceneId;
    [SerializeField] private DoFadePanelUI _fadePanel;
    [SerializeField] private GameObject _settingsPanel;
    [SerializeField] private GameObject _adminPanel;
    [SerializeField] private TMP_InputField _codeField;
    [SerializeField] private TextMeshProUGUI _adminPanelText;
    [SerializeField] private Image _image;

    private void Awake()
    {
        BinarySaveSystem saveSystem = new BinarySaveSystem();
        if(!PlayerPrefs.HasKey("FirstPlay"))
            if (PlayerPrefs.GetString("FirstPlay") == "Yes")
            {
                SaveData data = new SaveData();
                saveSystem.Save(data);
            }
    }

    public void StartGame()
    {
        _fadePanel.Fade(()=>SceneManager.LoadScene(_gameSceneId));
    }

    public void OpenSettings()
    {
        _settingsPanel.GetComponent<RectTransform>().DOMoveX(Screen.width * 0.5f, 1).SetEase(Ease.Flash);
    }

    public void CloseSettings()
    {
        _settingsPanel.GetComponent<RectTransform>().DOMoveX(3000, 1).SetEase(Ease.Flash);
    }

    private void OpenAdminPanel()
    {
        _adminPanel.GetComponent<RectTransform>().DOMoveX(Screen.width * 0.5f, 1).SetEase(Ease.Flash);
    }

    public void CloseAdminPanel()
    {
        _adminPanel.GetComponent<RectTransform>().DOMoveX(3000, 1).SetEase(Ease.Flash);
    }

    public void ActivateCode()
    {
        if (_codeField.text.ToLower() == "no, it's patrick.")
        {
            _image.gameObject.SetActive(true);
            return;
        }
        if (_codeField.text == "MOTHERLODE")
        {
            OpenAdminPanel();
            return;
        }

        if (_codeField.text.ToLower() == "weneedmoregold")
        {
            Wallet.Instance.AddMoney(300);
        }

        _adminPanelText.text = "Is that a Krusty Krab?";
    }

    public void ClearDatabase()
    { 
        PlayerPrefs.SetString("FirstPlay", "Yes");
        BinarySaveSystem saveSystem = new BinarySaveSystem();
        SaveData saveData = saveSystem.Load();
        saveData.IdHadEngine = "RocketsParts/lvl1/HadEngine";
        saveData.IdBasicEngine = "RocketsParts/lvl1/BasicEngine";
        saveData.IdDoubleEngine = "";
        saveData.IdWings = "";
        saveData.Money = 0;
        saveData.MaxHight = 0;
        saveData.PurchasedParts = new List<string>() { "null" };
        saveSystem.Save(saveData);
        Wallet.Instance.Load();
    }
}
