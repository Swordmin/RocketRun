using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEditor;


[CustomEditor(typeof(ShopItemUI))]
[CanEditMultipleObjects]
public class ShopItemUIEditor : Editor
{

    private int _rocketLvl = 0;
    private RocketPartType _type;
    private ShopItemUI _shopItem;

    private void OnEnable()
    {
        _shopItem = (target as ShopItemUI);
    }

    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();

        GUILayout.Space(10);

        _rocketLvl = Convert.ToInt32(GUILayout.TextField(_rocketLvl.ToString(),2));
        _type = (RocketPartType)EditorGUILayout.EnumPopup("Type:", _type);

        if (GUILayout.Button("Initialized")) 
        {
            Image itemImage = null;
            Image[] childs = _shopItem.GetComponentsInChildren<Image>();
            foreach (Image child in childs) { if (child.name == "ItemSprite") { itemImage = child; } }
            string rocketType = "HadEngine";

            switch (_type)
            {
                case RocketPartType.Had:
                    rocketType = "HadEngine";
                    break;
                case RocketPartType.Basic:
                    rocketType = "BasicEngine";
                    break;
                case RocketPartType.Double:
                    rocketType = "DoubleEngine";
                    break;
                case RocketPartType.Wings:
                    rocketType = "Wings";
                    break;
            }

            itemImage.sprite = Resources.Load<Sprite>($"RocketsParts/Lvl{_rocketLvl}/Sprites/Rocketlvl{_rocketLvl}{rocketType}");
            _shopItem.SetId($"RocketsParts/Lvl{_rocketLvl}/{rocketType}");
        }

    }

}
