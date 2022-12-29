using UnityEngine;
using UnityEngine.Advertisements;

public class InterstitialAds : MonoBehaviour, IUnityAdsLoadListener, IUnityAdsShowListener
{
    [SerializeField] private string _androidAdUnitId = "Interstitial_Android";

    private void Start()
    {
        LoadAd();
        if (GetComponent<GameStateService>()) 
        {
            GetComponent<GameStateService>().OnChangeState += (state) =>
            {

                if (state == GameState.Fail)
                {
                    if (!PlayerPrefs.HasKey("FailCount"))
                    {
                        PlayerPrefs.SetInt("FailCount", 1);
                    }
                    else 
                    {
                        int failCount = PlayerPrefs.GetInt("FailCount");
                        failCount++;
                        PlayerPrefs.SetInt("FailCount", failCount);
                        if (failCount % 3 == 1)
                        {
                            PlayerPrefs.SetInt("FailCount", 0);
                            ShowAd();
                        }
                    }

                }
            };
        }
    }

    public void LoadAd()
    {
        Advertisement.Load(_androidAdUnitId, this);
    }

    public void ShowAd()
    {
        Advertisement.Show(_androidAdUnitId, this);
    }
    
    public void OnUnityAdsAdLoaded(string placementId)
    {

    }

    public void OnUnityAdsFailedToLoad(string placementId, UnityAdsLoadError error, string message)
    {

    }

    public void OnUnityAdsShowFailure(string placementId, UnityAdsShowError error, string message)
    {

    }

    public void OnUnityAdsShowStart(string placementId)
    {

    }

    public void OnUnityAdsShowClick(string placementId)
    {

    }

    public void OnUnityAdsShowComplete(string placementId, UnityAdsShowCompletionState showCompletionState)
    {
        LoadAd();
    }
}
