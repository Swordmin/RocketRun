﻿using System;
using UnityEngine;

public class Wallet : Singleton<Wallet>
{
    public float Count => _count;
    [SerializeField] private float _count = 1000;
    private BinarySaveSystem _saveSystem;
    
    public Action<float> OnMoneyChange;

    public Wallet(float count)
    {
        _count = count;
    }
    
    protected override void Awake()
    {
        _saveSystem = new BinarySaveSystem();
        if(PlayerPrefs.HasKey("FirstPlay"))
            if(PlayerPrefs.GetString("FirstPlay") == "No")
                Load();
        Initialization(true);
        base.Awake();
    }

    public void AddMoney(float money)
    {
        if(money < 0)
            return;
        _count += money;
        Save();
        OnMoneyChange?.Invoke(_count);
    }

    public void Pay(float price)
    {
        if(price < 0)
            return;
        _count -= price;
        Save();
        OnMoneyChange?.Invoke(_count);
    }

    private void Save()
    {
        SaveData saveData = _saveSystem.Load();
        saveData.Money = _count;
        _saveSystem.Save(saveData);
    }

    public void Load()
    {
        SaveData saveData = _saveSystem.Load();
        _count = saveData.Money;
    }
}
