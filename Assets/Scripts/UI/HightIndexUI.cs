using DG.Tweening;
using TMPro;
using UnityEngine;

public class HightIndexUI : MonoBehaviour
{
    public int Hight => _hight;
    [SerializeField] private int _hight;
    [SerializeField] private Transform _rocket;
    [SerializeField] private TextMeshProUGUI _text;
    private bool _active;
    private BinarySaveSystem _saveSystem;
    private float _maxHight;
    private void Start()
    {
        _active = true;
        _saveSystem = new BinarySaveSystem();
        GameStateService.Instance.OnChangeState += state =>
        {
            if(state == GameState.Fail)
                SetMaxHight();
        };
        _maxHight = _saveSystem.Load().MaxHight;
    }

    private void Save()
    {
        SaveData saveData = _saveSystem.Load();
        saveData.MaxHight = _maxHight;
        _saveSystem.Save(saveData);

    }

    private void Update()
    {
        if (_active)
        {
            if (_hight > _maxHight)
            {
                _text.color = Color.green;
            }

            _hight = (int)_rocket.transform.position.y;
            _text.text = _hight.ToString();
        }
    }

    private void SetMaxHight()
    {
        _active = false;
        if (_maxHight < _hight)
        {
            _maxHight = _hight;
            _text.text =  $"New record {(int)_maxHight}";
            _text.color = Color.green;
            transform.DOScale(new Vector3(1.3f, 1.3f, 1.3f), 1).SetLoops(-1, LoopType.Yoyo);
            Save();
        }
        else
        {
            _text.text = $"{_hight} \n Best record:{_maxHight}";
        }
    }

}
