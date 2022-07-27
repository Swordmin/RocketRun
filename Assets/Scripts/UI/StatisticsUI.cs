using System.Collections;
using TMPro;
using UnityEngine;

public class StatisticsUI : MonoBehaviour
{
    private float _moneyInStart;
    [SerializeField] private float _money;
    [SerializeField] private float _hight;
    [SerializeField] private float _time;
    [SerializeField] private HightIndexUI _hightIndex;
    [SerializeField] private Rocket _rocket;

    [Header("Text Setup")]
    [SerializeField] private TextMeshProUGUI _textMeshMoney;
    [SerializeField] private TextMeshProUGUI _textMeshTotalMoney;
    [SerializeField] private TextMeshProUGUI _textMeshHight;
    [SerializeField] private TextMeshProUGUI _textMeshTime;
    [SerializeField] private TextMeshProUGUI _textMeshCondition;
    private Coroutine _timerCoroutine;
    private TranslateService _translateService;
    
    private void Start()
    {
        _moneyInStart = Wallet.Instance.Count;
        GameStateService.Instance.OnChangeState += state =>
        {
            if (state == GameState.Fail)
            {
                StopCoroutine(_timerCoroutine);
                Initialized();
            }
        };
        _hightIndex.OnHightChange += hight =>
        {
            _hight = hight;
        };
        Wallet.Instance.OnMoneyChange += UpdateMoney;
        _timerCoroutine =  StartCoroutine(Timer());
        _translateService = TranslateService.Instance;
    }

    private void Initialized()
    {
        StartCoroutine(InitializedTick());
    }

    private void UpdateMoney(float count)
    {
        _money = count - _moneyInStart;
    }
    
    private IEnumerator InitializedTick()
    {
        Wallet.Instance.OnMoneyChange -= UpdateMoney;

        float moneyCounter = 0;
        float totalMoneyCouter = 0;
        float totalMoney = 0;
        float hightCounter = 0;
        float timeCounter = 0;
        float conditionCounter = 0;
        
        int moneyAltitude = (int)(_hight / 2);
        int moneyTime = (int)(_time / 3);
        int moneyCondition = (int)(_rocket.Health / 3);
        totalMoney = moneyAltitude + moneyTime + _money + moneyCondition;
        Wallet.Instance.AddMoney(totalMoney);
        while (hightCounter < _hight)
        {
            yield return new WaitForSeconds(0.01f);
            hightCounter++;
            _textMeshHight.text = $"{_translateService.Change("Altitude")}: {hightCounter}: ${(int)(hightCounter/2)}";
        }
        yield return new WaitForSeconds(0.5f);
        while (moneyCounter < _money)
        {
            yield return new WaitForSeconds(0.01f);
            moneyCounter++;
            _textMeshMoney.text = $"{_translateService.Change("MoneyCollect")}: ${moneyCounter}";
        }
        yield return new WaitForSeconds(0.5f);
        while (timeCounter < _time)
        {
            yield return new WaitForSeconds(0.01f);
            timeCounter++;
            _textMeshTime.text = $"{_translateService.Change("Time")}: {timeCounter}s : ${(int)(timeCounter/3)}";
        }
        while (conditionCounter < _rocket.Health)
        {
            yield return new WaitForSeconds(0.01f);
            conditionCounter++;
            _textMeshCondition.text = $"{_translateService.Change("Condition")}: {conditionCounter}: ${moneyCondition}";
        }
        while (totalMoneyCouter < totalMoney)
        {
            yield return new WaitForSeconds(0.01f);
            totalMoneyCouter++;
            _textMeshTotalMoney.text = $"{_translateService.Change("Total")}: ${totalMoneyCouter}";
        }
    }

    private IEnumerator Timer()
    {
        while (GameStateService.Instance.State == GameState.Play)
        {
            yield return new WaitForSeconds(1);
            _time++;
        }
    }
    
}
