using System;
using System.Collections.Generic;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine;

public class BinarySaveSystem : MonoBehaviour
{
    private readonly string _filePath;

    public BinarySaveSystem()
    {
        _filePath = Application.persistentDataPath + "/Save.dat";
    }

    public void Save(SaveData data)
    {
        using (FileStream file = File.Create(_filePath))
        {
            new BinaryFormatter().Serialize(file, data);
        }
    }

    public SaveData Load()
    {
        SaveData saveData;
        
        using (FileStream file = File.Open(_filePath, FileMode.Open))
        {
            object loadedData = new BinaryFormatter().Deserialize(file);
            saveData = (SaveData)loadedData;
        }

        return saveData;
    }
}

[Serializable]
public class SaveData
{
    public bool NotFirstPlay;
    public string IdHadEngine;
    public string IdBasicEngine;
    public string IdDoubleEngine;
    public string IdWings;
    public float Money;
    public float MaxHight;
    public List<string> PurchasedParts = new List<string>(){"null"};

    public void AddPurchasedPart(string id)
    {
        foreach (string idPart in PurchasedParts)
        {
            Debug.Log(idPart);
        }
        if (PurchasedParts.Count > 0)
            foreach (string idPart in PurchasedParts)
            {
                if(id == idPart)
                    return;
            }
        PurchasedParts.Add(id);
    }

    public bool IsPartBuy(string id)
    {
        if (PurchasedParts.Count > 0)
            foreach (string idPart in PurchasedParts)
            {
                if(id == idPart)
                    return true;
            }
        return false;
    }

    public void Show()
    {
        foreach (string idPart in PurchasedParts)
        {
            Debug.Log(idPart);
        }
    }
}
