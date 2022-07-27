using UnityEngine;
using UnityEngine.UI;

public class LanguageSelecterUI : MonoBehaviour
{
    [SerializeField] private GameObject _flagsPack;

    public void OpenFlagList()
    {
        _flagsPack.SetActive(true);
    }

    public void Select(string language)
    {
        TranslateService.Instance.ChangeLanguage(language);
        _flagsPack.SetActive(false);
    }
}
