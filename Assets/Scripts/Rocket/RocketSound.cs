using System.Collections;
using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class RocketSound : MonoBehaviour
{

    [SerializeField] private AudioClip _startFly;
    [SerializeField] private AudioClip _fly;
    [SerializeField] private AudioClip _part;
    private Rocket _rocket;
    private AudioSource _source;

    private void Awake()
    {
        _source = GetComponent<AudioSource>();
        _rocket = GetComponent<Rocket>();
        _rocket.OnLaunch += PlayStartFly;
        _rocket.OnChangePart += PlayPartFly;
        GameStateService.Instance.OnChangeState += (state) =>
        {
            _source.enabled = false;
        };
    }

    private void PlayStartFly() 
    {
        _source.clip = _startFly;
        _source.Play();
        StartCoroutine(PlayFlyTick(_source.clip.length));
    }

    private void PlayPartFly() 
    {
        StopAllCoroutines();
        _source.clip = _part;
        _source.Play();
        StartCoroutine(PlayFlyTick(_source.clip.length));
    }

    private IEnumerator PlayFlyTick(float time)
    {
        yield return new WaitForSeconds(time);
        _source.clip = _fly;
        _source.loop = true;
        _source.Play();
    }

}
