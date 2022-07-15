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
        
        GameObject hadEngine = FindPart(_idHadEngine);
        PartRocket createdHad = Instantiate(hadEngine,transform.position + hadEngine.transform.position, hadEngine.transform.rotation, transform).GetComponent<PartRocket>();
        _rocket.AddPart(createdHad);
        
        GameObject basicEngine = FindPart(_idBasicEngine);
        PartRocket createdBasicEngine = Instantiate(basicEngine, transform.position + basicEngine.transform.position, basicEngine.transform.rotation, transform).GetComponent<PartRocket>();
        _rocket.AddPart(createdBasicEngine);

        if (!string.IsNullOrEmpty(_idWings))
        {
            GameObject wingsEngine = FindPart(_idWings);
            PartRocket createdWings = Instantiate(wingsEngine, transform.position + wingsEngine.transform.position, wingsEngine.transform.rotation).GetComponent<PartRocket>();
            createdWings.transform.parent = createdBasicEngine.transform;
            _rocket.SetWings(createdWings);
        }

        if (!string.IsNullOrEmpty(_idDoubleEngine))
        {
            GameObject doubleEngine = FindPart(_idDoubleEngine);
            PartRocket createdDoubleEngine = Instantiate(doubleEngine,transform.position + doubleEngine.transform.position, doubleEngine.transform.rotation).GetComponent<PartRocket>();
            createdDoubleEngine.transform.parent = createdHad.transform;
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

    private void Save()
    {
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
        SaveData saveData = _saveSystem.Load();
        _idHadEngine = saveData.IdHadEngine;
        _idBasicEngine = saveData.IdBasicEngine;
        _idDoubleEngine = saveData.IdDoubleEngine;
        _idWings = saveData.IdWings;
    }
    private GameObject FindPart(string id)
    {
        return Resources.Load<GameObject>(id);
    }
}
