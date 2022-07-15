using System.Collections.Generic;
using UnityEngine;

public class PauseController : Singleton<PauseController>, IPause
{
    private List<IPause> _pauses = new List<IPause>();
    public bool IsPause => _isPause;
    [SerializeField] private bool _isPause;

    private void Update()
    {
        if (Input.GetKey(KeyCode.Escape) && GameStateService.Instance.State == GameState.Play)
            if (!_isPause)
                Pause();
            else
                Resume();
    }

    public void AddPause(IPause pause)
    {
        _pauses.Add(pause);
    }

    public void Resume()
    {
        _isPause = false;
        GameStateService.Instance.UpdateState(GameState.Play);
        _pauses.ForEach((pause) => pause.Resume());
    }

    public void Pause()
    {
        if (GameStateService.Instance.State == GameState.Play)
        {
            _isPause = true;
            GameStateService.Instance.UpdateState(GameState.Pause);
            _pauses.ForEach((pause) => pause.Pause());
        }
    }
}
