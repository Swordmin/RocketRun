using UnityEngine;
using UnityEngine.UI;
using DG.Tweening;

public class SpeedIndexUI : MonoBehaviour
{
    [SerializeField] private Rocket _rocket;
    [SerializeField] private Image _index;
    private void Update()
    {
        if (_rocket.CurrentEngine)
        {
            _index.DOFillAmount(_rocket.CurrentEngine.CurrentPower / _rocket.CurrentEngine.Power, 1);
        }
    }
}
