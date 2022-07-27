using UnityEngine;

public class Item : MonoBehaviour, IAudioPlayer
{

    [SerializeField] private AudioTrack _audioTrack;

    public void PlayAudio()
    {
        GameObject audioObject = new GameObject();
        audioObject.AddComponent<AudioSource>();
        AudioSource audioSource = audioObject.GetComponent<AudioSource>();
        audioSource.volume = _audioTrack.Volume;
        audioSource.loop = _audioTrack.Loop;
        audioSource.clip = _audioTrack.Clip;
        audioSource.Play();
        Destroy(audioObject, audioSource.clip.length);
    }
}