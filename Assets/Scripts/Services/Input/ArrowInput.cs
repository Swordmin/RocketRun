using UnityEngine;

public class ArrowInput : MonoBehaviour
{

    [SerializeField] private bool _flyRight;
    [SerializeField] private bool _flyLeft;

    [SerializeField] private Rocket _rocket;

    private void Awake()
    {
        BinarySaveSystem saveSystem = new BinarySaveSystem();
        SaveData data = saveSystem.Load();
        if (data.InputType == InputType.Finger)
            gameObject.SetActive(false);
    }

    private void Update()
    {
        if (_flyRight)
            _rocket.RotateLeft();
        if (_flyLeft)
            _rocket.RotateRight();
    }

    public void RightDown()
    {
        _flyRight = true;
    }

    public void RightUp()
    {
        _flyRight = false;
    }

    public void LeftDown()
    {
        _flyLeft = true;
    }

    public void LeftUp() 
    {
        _flyLeft = false;
    }

}
