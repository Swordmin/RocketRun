using UnityEngine;

public class FuelСanister : Item
{
    [SerializeField] private float _fuel;
    public float Fuel => _fuel;

    private void Awake()
    {
        BinarySaveSystem saveSystem = new BinarySaveSystem();
        SaveData saveData = saveSystem.Load();
        if (saveData.IsPartBuy("Fuel + 10%"))
            _fuel += (_fuel * 10) / 100;
        if (saveData.IsPartBuy("Fuel + 20%"))
            _fuel += (_fuel * 20) / 100;
        if (saveData.IsPartBuy("Fuel + 30%"))
            _fuel += (_fuel * 30) / 100;
        if (saveData.IsPartBuy("Fuel + 50%"))
            _fuel += (_fuel * 50) / 100;
    }
}
