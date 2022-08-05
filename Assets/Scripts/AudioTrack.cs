using System;
using UnityEngine;

[Serializable]
public struct AudioTrack 
{

    [SerializeField] private bool _loop;
    public bool Loop => _loop;

    [SerializeField] private AudioClip _clip;
    public AudioClip Clip => _clip;

    [SerializeField] private float _volume;
    public float Volume => _volume;

    [SerializeField] private bool _isPlay;
    public bool IsPlay => _isPlay;


    public void Play() => _isPlay = true;

}
