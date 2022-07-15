using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class GameSceneSettings : MonoBehaviour
{
    [SerializeField] private List<Material> _skyboxes;
    private void Awake()
    {
        Material randomSkybox = _skyboxes[Random.Range(0, _skyboxes.Count - 1)];
        //RenderSettings.skybox = randomSkybox;
    }
}
