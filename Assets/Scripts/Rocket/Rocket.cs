using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody))]
public class Rocket : MonoBehaviour, IPause
{
    public float AllPartsPower;
    public float AllPartsFuel;
    public float AllPartsRotateSpeed;

    public float Health => _health;
    [SerializeField] private float _health;
    public float StartHealth => _startHealth;
    private float _startHealth;
    
    [SerializeField] private List<PartRocket> _engines;
    public PartRocket CurrentEngine => _currentEngine;
    [SerializeField] private Wallet _wallet;
    [SerializeField] private GameStateService _gameStateService;
    [SerializeField] private PartRocket _currentEngine;
    [SerializeField] private PartRocket _doubleEngine;
    [SerializeField] private PartRocket _wings;
    public Rigidbody Rigidbody => _rigidbody;
    [SerializeField] private Rigidbody _rigidbody;
    [SerializeField] private TextEngine _textEngine;
    [SerializeField] private bool _isShop;
    [SerializeField] private ParticleSystem _destroyEffect;
    private bool _isWorks;
    
    private void Awake()
    {
        _startHealth = _health;
        DisplayText("");
        _rigidbody = GetComponent<Rigidbody>();
        _engines.ForEach((engine) =>
        {
            AllPartsPower += engine.Power;
            AllPartsFuel += engine.Fuel;
            AllPartsRotateSpeed += engine.RotateSpeed;
        });
        CheckParts();
        if (GameStateService.Instance)
        {
            _gameStateService = GameStateService.Instance;
            _gameStateService.UpdateState(GameState.Play);
        }

        _wallet = Wallet.Instance ?? new Wallet(0);
        if(_isShop)
            return;
    }
    private void Start()
    {
        PauseController.Instance.AddPause(this);
        _engines[0].OnFuelEnd += () =>
        {
            if(_doubleEngine)
                _doubleEngine.StopFireEffect();
            _gameStateService.UpdateState(GameState.Fail);
        };
    }
    private void Update()
    {
        if(Input.GetKeyDown(KeyCode.K))
        {
            _gameStateService.UpdateState(GameState.Fail);
            DestroyRocket();
        }
    }

    #region PartsSetup
    public void AddPart(PartRocket part) => _engines.Add(part);
    public void SetDoubleEngine(PartRocket part) => _doubleEngine = part;
    public void SetWings(PartRocket part) => _wings = part;

    #endregion
    #region PartsControl

    public void Launch() => NextPart();

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

    private void DestroyRocket()
    {
        _destroyEffect.Play();
        _engines.ForEach((engine) => Destroy(engine.gameObject));
    }
    
    private void OnTriggerEnter(Collider other)
    {
        if(_gameStateService.State != GameState.Play)
            return;

        if(other.TryGetComponent(out Item item)) 
        {
            if(item is FuelСanister)
                _currentEngine.AddFuel((item as FuelСanister).Fuel);
            if (item is Money)
            {
                if(_wallet)
                _wallet.AddMoney((item as Money).MoneyCount);
                DisplayText($"{(item as Money).MoneyCount}");
            }
            item.PlayAudio();
            item.GetComponent<SpriteRenderer>().enabled = false;
            Destroy(item.gameObject);
        }
    }

    private void OnCollisionEnter()
    {
        if (Mathf.Abs(_rigidbody.velocity.magnitude) > 0.5f)
        {
            _health -= Mathf.Abs(_rigidbody.velocity.magnitude) * 20;
            if (_health <= 0)
            {
                _gameStateService.UpdateState(GameState.Fail);
                DestroyRocket();
            }
        }
    }
}
