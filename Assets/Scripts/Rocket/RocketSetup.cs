using System;
using UnityEngine;

[RequireComponent(typeof(Rocket))]
public class RocketSetup : MonoBehaviour
{
    [SerializeField] private Rocket _rocket;
    
    [SerializeField] private string _idHadEngine;
    [SerializeField] private string _idBasicEngine;
    [SerializeField] private string _idDoubleEngine;
    [SerializeField] private string _idWings;
    private BinarySaveSystem _saveSystem;
    private PartRocket _createdHadEngine, _createdBasicEngine;
    private void Awake()
    {
        _saveSystem = new BinarySaveSystem();
        if(PlayerPrefs.HasKey("FirstPlay"))
            if(PlayerPrefs.GetString("FirstPlay") == "No")
                Load();
        _rocket = GetComponent<Rocket>();
        Initialized();
    }
    
    private void Initialized()
    {
        PartRocket[] _parts = GetComponentsInChildren<PartRocket>();
        if (_parts.Length != 0)
            foreach (PartRocket part in _parts)
            {
                Destroy(part.gameObject);
            }

        PartRocket createdPartRocket = new PartRocket();
        _rocket.AddPart(CreatePart(_idHadEngine, out createdPartRocket, () => _createdHadEngine = createdPartRocket));
        _rocket.AddPart(CreatePart(_idBasicEngine, out createdPartRocket, () => _createdBasicEngine = createdPartRocket));

        if (!string.IsNullOrEmpty(_idWings))
        {

            PartRocket createdWings = CreatePart(_idWings);
            createdWings.transform.parent = _createdBasicEngine.transform;
            _rocket.SetWings(createdWings);
        }

        if (!string.IsNullOrEmpty(_idDoubleEngine))
        {
            PartRocket createdDoubleEngine = CreatePart(_idDoubleEngine);
            createdDoubleEngine.transform.parent = _createdHadEngine.transform;
            _rocket.SetDoubleEngine(createdDoubleEngine);
        }
        Save();
    }

    public void UpdatePart(RocketPartType type, string id)
    {
        switch (type)
        {
            case RocketPartType.Had:
                SetIdHadEngine(id);
                break;
            case RocketPartType.Basic:
                SetIdBasicEngine(id);
                break;
            case RocketPartType.Double:
                SetIdDobleEngine(id);
                break;
            case RocketPartType.Wings:
                SetIdWings(id);
                break;
        }
    }


    #region SetIdPart

    public void SetIdHadEngine(string id)
    {
        _idHadEngine = id;
        Initialized();
    }   
    public void SetIdBasicEngine(string id)
    {
        _idBasicEngine = id;
        Initialized();
    }
    public void SetIdDobleEngine(string id)
    {
        _idDoubleEngine = id;
        Initialized();
    }
    public void SetIdWings(string id)
    {
        _idWings = id;
        Initialized();
    }

    #endregion

    private void Save()
    {
        Debug.Log("Save");
        SaveData saveData;
        if (PlayerPrefs.GetString("FirstPlay") == "Yes")
        {
            PlayerPrefs.SetString("FirstPlay", "No");
            saveData = new SaveData();
        }
        else
        {
            saveData = _saveSystem.Load();
        }
        saveData.IdHadEngine = _idHadEngine;
        saveData.IdBasicEngine = _idBasicEngine;
        saveData.IdDoubleEngine = _idDoubleEngine;
        saveData.IdWings = _idWings;
        saveData.NotFirstPlay = true;
        _saveSystem.Save(saveData);
    }

    private void Load()
    {
        Debug.Log("Load");
        SaveData saveData = _saveSystem.Load();
        _idHadEngine = saveData.IdHadEngine;
        Debug.Log(saveData.IdBasicEngine);
        _idBasicEngine = saveData.IdBasicEngine;
        _idDoubleEngine = saveData.IdDoubleEngine;
        _idWings = saveData.IdWings;
    }
    private GameObject FindPart(string id)
    {
        return Resources.Load<GameObject>(id);
    }
    private PartRocket CreatePart(string id)
    {
        Debug.Log(id);
        GameObject partFind = FindPart(id);
        PartRocket createdPart = Instantiate(partFind,transform.position + partFind.transform.position, partFind.transform.rotation, transform).GetComponent<PartRocket>();
        return createdPart;
    }
    private PartRocket CreatePart(string id, out PartRocket partRocket, Action action)
    {
        Debug.Log(id);
        GameObject partFind = FindPart(id);
        PartRocket createdPart = Instantiate(partFind,transform.position + partFind.transform.position, partFind.transform.rotation, transform).GetComponent<PartRocket>();
        partRocket = createdPart;
        action?.Invoke();
        return createdPart;
    }
}
