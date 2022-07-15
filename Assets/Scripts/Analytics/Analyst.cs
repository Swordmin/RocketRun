using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Analytics;

public class Analyst : MonoBehaviour
{
    [SerializeField] private Rocket _rocket;
    [SerializeField] private HightIndexUI _hightIndex;
    private float _money;

    private void Awake()
    {
        _money = 0;
        Wallet.Instance.OnMoneyChange += count => _money += count; 
        GameStateService.Instance.OnChangeState += state =>
        {
            if (state == GameState.Fail)
            {
                OnGameEnd();
            }
        };
    }

    private void OnGameEnd()
    {
        Analytics.CustomEvent("GameEnd", new Dictionary<string, object>()
        {
            { "Money", _money},
            { "Power", _rocket.Power},
            { "Fuel", _rocket.Fuel},
            { "RotateSpeed", _rocket.RotateSpeed},
            { "Hight", _hightIndex.Hight}
        });
    }
}
