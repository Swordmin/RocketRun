using System;
using UnityEngine;

public class GameSettingsService : Singleton<GameSettingsService>
{
    public Action<InputType> OnInputTypeChange;

    [SerializeField] private InputType _inputType;
    public InputType InputType => _inputType;


    public void Intialized()
    {
        BinarySaveSystem saveSystem = new BinarySaveSystem();
        SaveData data = saveSystem.Load();
        UpdateInputType(data.InputType);
    }

    public void UpdateInputType(InputType type) 
    {
        BinarySaveSystem saveSystem = new BinarySaveSystem();
        SaveData data = saveSystem.Load();
        _inputType = type;
        data.InputType = type;
        saveSystem.Save(data);
        OnInputTypeChange?.Invoke(_inputType);
    }
}
