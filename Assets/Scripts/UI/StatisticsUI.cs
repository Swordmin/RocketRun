using System;
using System.Collections;
using System.Collections.Generic;
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
    [SerializeField] private List<CounterSpeed> _counterSpeeds;
    private Wallet _wallet;
    private Coroutine _timerCoroutine;
    private TranslateService _translateService;
    
    private void Start()
    {
        _wallet = Wallet.Instance ?? new Wallet(100000);
        _moneyInStart = _wallet.Count;
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
        _wallet.OnMoneyChange += UpdateMoney;
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
            yield return new WaitForSeconds(GetSpeedCounter(_money));
            moneyCounter++;
            _textMeshMoney.text = $"{_translateService.Change("MoneyCollect")}: ${moneyCounter}";
        }
        yield return new WaitForSeconds(0.5f);
        while (timeCounter < _time)
        {
            yield return new WaitForSeconds(GetSpeedCounter(_time));
            timeCounter++;
            _textMeshTime.text = $"{_translateService.Change("Time")}: {timeCounter}s : ${(int)(timeCounter/3)}";
        }
        while (conditionCounter < _rocket.Health)
        {
            yield return new WaitForSeconds(GetSpeedCounter(_rocket.Health));
            conditionCounter++;
            _textMeshCondition.text = $"{_translateService.Change("Condition")}: {conditionCounter}: ${moneyCondition}";
        }
        while (totalMoneyCouter < totalMoney)
        {
            yield return new WaitForSeconds(GetSpeedCounter(totalMoney));
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

    private float GetSpeedCounter(float level) 
    {
        for (int i = 0; i < _counterSpeeds.Count - 1; i++)
        {
            if (level <= _counterSpeeds[0].Level)
                return _counterSpeeds[0].Speed;
            if (_counterSpeeds.Count - 1 >= i + 1)
            {
                if (level >= _counterSpeeds[i].Level && level <= _counterSpeeds[i + 1].Level)
                    return _counterSpeeds[i + 1].Speed;
            }
            else
            {
                return _counterSpeeds[_counterSpeeds.Count - 1].Speed;
            }    
        }
        return 0;
    }

    [Serializable]
    private struct CounterSpeed
    {

        [SerializeField] private float _level;
        public float Level => _level;
        [SerializeField] private float _speed;
        public float Speed => _speed;
    
    }
    
}
