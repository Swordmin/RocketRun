using UnityEngine;

public class RateGame : MonoBehaviour
{

    public GameObject _failScreen;

    public void Awake()
    {
        _failScreen.SetActive(false);
    }

    public void Rate() 
    {
        Application.OpenURL("market://details?id=com.SleepingFoxStudio.RocketLaunch");
    }

    public void Feedback() 
    {
        Application.OpenURL("mailto:fstg.games@gmail.com");
    }

}
