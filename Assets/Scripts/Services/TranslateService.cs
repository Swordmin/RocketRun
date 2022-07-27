using System;
using System.Collections.Generic;
using System.Xml;
using TMPro;
using UnityEngine;
using UnityEngine.UIElements;

public class TranslateService : Singleton<TranslateService>
{
    public Action OnChangeLanguage;
    private string _language;

    [SerializeField] private TMP_FontAsset _fontRu;
    [SerializeField] private TMP_FontAsset _fontEng;

    [SerializeField] private List<Language> _languages;

    [SerializeField] private TextMeshProUGUI _textDebug;


    protected override void Awake()
    {
        Initialization(true);
        base.Awake();
    }

    private void Start()
    {
        BinarySaveSystem saveSystem = new BinarySaveSystem();
        SaveData saveData = saveSystem.Load();
        if(saveData.Language != "")
            ChangeLanguage(saveData.Language);
    }

    public void ChangeLanguage(string language)
    {
        try
        {
            BinarySaveSystem saveSystem = new BinarySaveSystem();
            SaveData saveData = saveSystem.Load();
            saveData.Language = language;
            saveSystem.Save(saveData); 
            OnChangeLanguage?.Invoke();
            _textDebug.text = "complite" + language;
        }
        catch (Exception e)
        {
            _textDebug.text = e.ToString();
            throw;
        }
    }
    
    public void Change(TextTranslate textId)
    {

        BinarySaveSystem saveSystem = new BinarySaveSystem();
        SaveData saveData = saveSystem.Load();
        TMP_FontAsset font = new TMP_FontAsset();

        if (String.IsNullOrEmpty(saveData.Language))
        {
            _language = "English";
            saveData.Language = _language;
            saveSystem.Save(saveData);
        }
        else
            _language = saveData.Language;

        foreach (Language language in _languages)
        {
            if (language.Id == _language)
                font = language.Font;
        }

        XmlDocument xDoc = new XmlDocument();
        TextAsset xmlFile = Resources.Load<TextAsset>("XML/Language");
        xDoc.LoadXml(xmlFile.text);
        XmlElement xRoot = xDoc.DocumentElement;
        

        foreach (XmlNode childnode in xRoot.ChildNodes) 
        {

            if (childnode.LocalName != _language) continue;

            foreach (XmlNode child in childnode)
            {

                if (child.LocalName != textId.Id) continue;
                
                textId.SetText(child.InnerText, font);

            }


        }

    }

    public string Change(string id)
    {

        BinarySaveSystem saveSystem = new BinarySaveSystem();
        SaveData saveData = saveSystem.Load();
        TMP_FontAsset font = new TMP_FontAsset();

        if (String.IsNullOrEmpty(saveData.Language))
        {
            _language = "English";
            saveData.Language = _language;
            saveSystem.Save(saveData);
        }
        else
            _language = saveData.Language;

        foreach (Language language in _languages)
        {
            if (language.Id == _language)
                font = language.Font;
        }

        XmlDocument xDoc = new XmlDocument();
        TextAsset xmlFile = Resources.Load<TextAsset>("XML/Language");
        xDoc.LoadXml(xmlFile.text);
        XmlElement xRoot = xDoc.DocumentElement;
        

        foreach (XmlNode childnode in xRoot.ChildNodes) 
        {

            if (childnode.LocalName != _language) continue;

            foreach (XmlNode child in childnode)
            {

                if (child.LocalName != id) continue;

                return child.InnerText;

            }


        }

        return "NotFound";
    }
    
    public void ChangeLanguage()
    {
        OnChangeLanguage?.Invoke();
    }
}

[Serializable]
public struct Language
{
    public string Id;
    public TMP_FontAsset Font;
    public int FontSize;
}
