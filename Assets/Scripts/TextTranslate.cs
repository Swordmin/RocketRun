using System;
using TMPro;
using UnityEngine;

public class TextTranslate : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _textMesh;

    public string Id => _id;
    [SerializeField] private string _id;

    private void Start()
    {
        _textMesh = GetComponent<TextMeshProUGUI>();
        TranslateService.Instance.Change(this);
        TranslateService.Instance.OnChangeLanguage += TextUpdate;
    }

    public void SetText(string text)
    {
        _textMesh.text = text;
    }
    public void SetText(string text, TMP_FontAsset font)
    {
        _textMesh.text = text;
        _textMesh.font = font;
    }

    private void TextUpdate()
    {
        TranslateService.Instance.Change(this);
    }
}
