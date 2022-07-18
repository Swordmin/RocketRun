using System;
using UnityEngine;
using UnityEngine.Events;

public class GameStateService : Singleton<GameStateService>
{
    public GameState State => _state;
    public Action<GameState> OnChangeState;

    [SerializeField] private GameState _state;

    [SerializeField] private UnityEvent _onPlayState;
    [SerializeField] private UnityEvent _onFailState;
    [SerializeField] private UnityEvent _onMenuState;
    [SerializeField] private UnityEvent _onShopState;
    [SerializeField] private UnityEvent _onPauseState;

    protected override void Awake()
    {
        Initialization(false);
        base.Awake();
    }

    public void UpdateState(GameState state)
    {
        _state = state;
        OnChangeState?.Invoke(State);
        LoadState();
    }

    public void UpdateState(int stateId)
    {
        GameState state = (GameState)stateId;
        if(state != _state)
            _state = state;
        LoadState();
    }

    private void LoadState()
    {
        switch (_state)
        {
            case GameState.Fail:
                _onFailState.Invoke();
                break;
            case GameState.Play:
                _onPlayState.Invoke();
                break;
            case GameState.Menu:
                _onMenuState.Invoke();
                break;
            case GameState.Shop:
                _onShopState.Invoke();
                break;        
            case GameState.Pause:
                _onPauseState.Invoke();
                break;
        }
    }

}

