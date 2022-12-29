using System;
using System.Collections;
using TMPro;
using UnityEngine;

public class LaunchText : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _textMeshProUGUI;
    [SerializeField] private float _counter = 4;
    [SerializeField] private Rocket _rocket;
    public Action OnLaunch;

    private void Awake()
    {
        _textMeshProUGUI = GetComponent<TextMeshProUGUI>();
    }

    public void Launch() 
    {
        _textMeshProUGUI.text = $"{_counter}";
        StartCoroutine(TimerTick());
    }

    private IEnumerator TimerTick()
    {
        while (_counter > 0)
        {
            yield return new WaitForSeconds(1);
            _counter--;
            _textMeshProUGUI.text = $"{_counter}";
        }
        _rocket.Launch();
        OnLaunch?.Invoke();
        Destroy(gameObject);
    }
}

