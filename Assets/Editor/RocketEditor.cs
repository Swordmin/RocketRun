using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(Rocket))]
public class RocketEditor : Editor
{
    private float _fuelAdd = 0;
    private Rocket _rocket;

    private void OnEnable()
    {
        _rocket = (target as Rocket);
    }

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        GUILayout.Space(30);
        _fuelAdd = float.Parse(GUILayout.TextField(_fuelAdd.ToString(), 4));
        if (GUILayout.Button("AddFuel"))
        {
            if(_rocket.CurrentEngine)
                _rocket.CurrentEngine.AddFuel(_fuelAdd);
        }
    }
}
