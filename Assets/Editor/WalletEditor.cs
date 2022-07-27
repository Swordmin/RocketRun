using UnityEngine;
using UnityEditor;

[CustomEditor(typeof(Wallet))]
public class WalletEditor : Editor
{
    private float _moneyAdd = 0;
    private Wallet _wallet;

    private void OnEnable()
    {
        _wallet = (target as Wallet);
    }

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        GUILayout.Space(10);
        _moneyAdd = float.Parse(GUILayout.TextField(_moneyAdd.ToString(), 8));
        if (GUILayout.Button("AddMoney"))
        {
            _wallet.AddMoney(_moneyAdd);
        }
    }
}
