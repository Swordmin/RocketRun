using UnityEngine;
using UnityEngine.UI;

public class FuelindexUI : MonoBehaviour
{
    [SerializeField] private Rocket _rocket;
    [SerializeField] private Image _index;
    private void Update()
    {
        if(_rocket.CurrentEngine)
            _index.fillAmount = (_rocket.CurrentEngine.Fuel / _rocket.CurrentEngine.StartFuel);
    }
}
