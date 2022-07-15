using System;
using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

[RequireComponent(typeof(Image))]
public class DoFadePanelUI : MonoBehaviour
{
    [SerializeField] private bool _playOnAwake;
    [SerializeField] private Image _panel;
    [SerializeField] private float _targetValue;
    [SerializeField] private float _speed;
    [SerializeField] private float _startAlpha;
    private void Awake()
    {
        _panel = GetComponent<Image>();
        if (_startAlpha != 0)
            _panel.color = new Color(_panel.color.r, _panel.color.g, _panel.color.b, _startAlpha);
        if (_playOnAwake)
            _panel.DOFade(_targetValue, _speed);
    }

    public void Fade(Action action)
    {
        _panel.DOFade(_targetValue, _speed).OnComplete(() => {action.Invoke();});
    }
    public void Fade(float targetValue, Action action)
    {
        _panel.DOFade(targetValue, _speed).OnComplete(() => {action.Invoke();});
    }
    public void Fade(float targetValue)
    {
        _panel.DOFade(targetValue, _speed);
    }
}
