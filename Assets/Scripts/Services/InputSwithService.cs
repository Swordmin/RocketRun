using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputSwithService : MonoBehaviour
{

    [SerializeField] private TouchInputRocketGame _touch;
    [SerializeField] private GameObject _touchTutorial;
    [SerializeField] private ArrowInput _arrow;

    private void Awake()
    {
        BinarySaveSystem saveSystem = new BinarySaveSystem();
        SaveData data = saveSystem.Load();
        if (data.InputType == InputType.Arrows)
        {
            _touchTutorial.SetActive(false);
            _touch.enabled = false;
        }
        else
        {
            _arrow.enabled = false;
        }
    }

}
