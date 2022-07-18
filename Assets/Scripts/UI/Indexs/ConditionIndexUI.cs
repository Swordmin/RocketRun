using UnityEngine.UI;
using UnityEngine;
using DG.Tweening;

public class ConditionIndexUI : MonoBehaviour
{
    [SerializeField] private Rocket _rocket;
    [SerializeField] private Image _index;
    private void Update()
    {
        if (_rocket)
        {
            _index.DOFillAmount(_rocket.Health / _rocket.StartHealth, 1);
        }
    }
}
