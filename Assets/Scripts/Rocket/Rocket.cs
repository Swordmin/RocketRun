using System.Collections.Generic;
using Cinemachine;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class Rocket : MonoBehaviour, IPause
{
    public float AllPartsPower;
    public float AllPartsFuel;
    public float AllPartsRotateSpeed;
    
    [SerializeField] private List<PartRocket> _engines;
    public PartRocket CurrentEngine => _currentEngine;
    [SerializeField] private PartRocket _currentEngine;
    [SerializeField] private PartRocket _doubleEngine;
    [SerializeField] private PartRocket _wings;
    [SerializeField] private Rigidbody _rigidbody;
    [SerializeField] private TextEngine _textEngine;
    [SerializeField] private bool _isShop;
    [SerializeField] private float _kickUpForce;
    private bool _isWorks;
    
    private void Awake()
    {
        _rigidbody = GetComponent<Rigidbody>();
        _engines.ForEach((engine) =>
        {
            AllPartsPower += engine.Power;
            AllPartsFuel += engine.Fuel;
            AllPartsRotateSpeed += engine.RotateSpeed;
        });
        CheckParts();
        if (Wallet.Instance)
            Wallet.Instance.AddMoney(0);
        if(GameStateService.Instance)
            GameStateService.Instance.UpdateState(GameState.Play);
        if(_isShop)
            return;
        if(GameStateService.Instance)
            Invoke(nameof(NextPart),3);
    }
    private void Start()
    {
        PauseController.Instance.AddPause(this);
        _engines[0].OnFuelEnd += () =>
        {
            if(_doubleEngine)
                _doubleEngine.StopFireEffect();
            GameStateService.Instance.UpdateState(GameState.Fail);
        };
    }

    private void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
            NextPart();
    }


    #region PartsSetup
    public void AddPart(PartRocket part) => _engines.Add(part);
    public void SetDoubleEngine(PartRocket part) => _doubleEngine = part;
    public void SetWings(PartRocket part) => _wings = part;

    #endregion
    #region PartsControl

    private void NextPart()
    {
        _isWorks = true;
        if (_currentEngine && _engines.Count != 1)
            OldPartDeactivate();
        int id;
        if (_engines.Count == 1)
            id = 0;
        id = _engines.Count - 1;
        _currentEngine = _engines[id];
        NewPartSetup(_currentEngine);
    }

    private void OldPartDeactivate()
    {
        _currentEngine.transform.parent = null;
        _currentEngine.gameObject.AddComponent<Rigidbody>();
        _currentEngine.GetComponent<Rigidbody>().useGravity = true;
        _currentEngine.GetComponent<Rigidbody>().isKinematic = false;
        _currentEngine.OnFuelEnd -= NextPart;
        _engines.Remove(_currentEngine);
    }

    #endregion
    #region RocketRotate

    public void RotateLeft()
    {
        if (_currentEngine)
            transform.Rotate(new Vector3(0, 0, -_currentEngine.RotateSpeed));
    }

    public void RotateRight()
    {
        if (_currentEngine)
            transform.Rotate(new Vector3(0, 0, _currentEngine.RotateSpeed));
    }

    #endregion
    #region Pause

    public void Resume()
    {
        _currentEngine.Resume();
        _rigidbody.useGravity = true;
    }

    public void Pause()
    {
        if(_currentEngine)
            _currentEngine.Pause();
        _rigidbody.useGravity = false;
    }

    #endregion

    private void CheckParts()
    {
        if (_doubleEngine)
            AllPartsPower += _doubleEngine.Power;
        if (_wings)
            AllPartsRotateSpeed += _wings.RotateSpeed;
    }
    
    public void RocketStateSwith()
    {
        if (_isWorks)
        {
            _currentEngine.Stop();
            _isWorks = false;
        }
        else
        {
            _currentEngine.Launch();
            _isWorks = true;
        }
    }
    
    private void DisplayText(string text)
    {
        TextEngine textEngine = Instantiate(_textEngine, transform.position, Quaternion.identity);
        textEngine.Draw(text, Color.green, new Vector2(transform.position.x + 1, transform.position.y + 1), 2, 1.5f , 1.5f);
    }

    private void NewPartSetup(PartRocket part)
    {
        part.Launch();
        if (part != _engines[0])
        {
            part.OnFuelEnd += NextPart;
            if(_wings)
                part.AddRotateSpeed(_wings.RotateSpeed);
            _rigidbody.AddForce(Vector3.up * _kickUpForce, ForceMode.Impulse);
        }
        else
        {
            if (_doubleEngine)
            {
                _doubleEngine.Launch();
                _currentEngine.AddPower(_doubleEngine.Power);
            }
        }
    }
    
    private void OnTriggerEnter(Collider other)
    {
        if(GameStateService.Instance.State != GameState.Play)
            return;
        if (other.TryGetComponent(out FuelСanister fuel))
        {
            _currentEngine.AddFuel(fuel.Fuel);
            Destroy(other.gameObject);
        }
        if (other.TryGetComponent(out Money money))
        {
            Wallet.Instance.AddMoney(money.MoneyCount);
            Destroy(other.gameObject);
            DisplayText($"{money.MoneyCount}");
        }
    }
}
