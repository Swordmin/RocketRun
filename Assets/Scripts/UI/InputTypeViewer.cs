using UnityEngine;
using TMPro;

public class InputTypeViewer : MonoBehaviour
{

    [SerializeField] private InputType _type;

    private TextMeshProUGUI _text;

    private void Start()
    {
        _text = GetComponent<TextMeshProUGUI>();
        GameSettingsService.Instance.OnInputTypeChange += (type) =>
        {
            if(type != _type)
                _text.color = Color.black;
            else
                _text.color = Color.white;
        }; 
    }

    public void UpdateInputType() 
    {
        Debug.Log("f" + _type);
        GameSettingsService.Instance.UpdateInputType(_type);
    }

}
