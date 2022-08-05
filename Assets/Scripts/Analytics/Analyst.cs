using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;
using Unity.Services.Core;
using Unity.Services.Analytics;
using System;

public class Analyst : Singleton<Analyst>
{
    [SerializeField] private Rocket _rocket;
    [SerializeField] private HightIndexUI _hightIndex;
    [SerializeField] private Wallet _wallet;
    private float _moneyAdded, _startMoney;
    private float _moneyConsumption;
    private float _session;

    protected override void Awake()
    {
        StartService();
        Initialization(true);
        base.Awake();
    }

    private void Start()
    {
        _wallet = Wallet.Instance;
        _wallet.OnPay += (price) => _moneyConsumption += price;
        _wallet.OnAdd += (add) => _moneyAdded += add;
        BinarySaveSystem saveSystem = new BinarySaveSystem();
        SaveData saveData = saveSystem.Load();
        _session = saveData.Session;
    }

    public void EndOfSession()
    {
        _session++;
        float moneyCollect = _moneyAdded;
        float sessionBalance = _moneyAdded -= _moneyConsumption;

        try
        {
            AnalyticsService.Instance.CustomData("EndOfSession", new Dictionary<string, object>
            {
                { "CollectMoney", moneyCollect},
                { "Consumption", _moneyConsumption},
                { "Session", _session},
                { "SessionBalance", sessionBalance},
                { "TotalBalance", _wallet.Count},
            });
            AnalyticsService.Instance.Flush();
        }
        catch(Exception ex) 
        {
            Debug.LogError(ex.ToString());
        }

        _moneyConsumption = 0;
        _moneyAdded = 0;
    }

    private async void StartService() 
    {
        try
        {
            await UnityServices.InitializeAsync();
            await AnalyticsService.Instance.CheckForRequiredConsents();
        }
        catch(ConsentCheckException ex) 
        {

            Debug.LogError(ex.ToString());

        }
        List<string> consentIdentifiers = await AnalyticsService.Instance.CheckForRequiredConsents();
        EndOfSession();
    }
}
