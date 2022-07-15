using System.Collections;
using TMPro;
using UnityEngine;

public class LaunchText : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _textMeshProUGUI;
    [SerializeField] private float _counter = 4;

    private void Awake()
    {
        _textMeshProUGUI = GetComponent<TextMeshProUGUI>();
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
        Destroy(gameObject);
    }
}

