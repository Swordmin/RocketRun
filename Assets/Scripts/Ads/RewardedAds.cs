using UnityEngine;
using UnityEngine.Advertisements;
using UnityEngine.UI;

public class RewardedAds : MonoBehaviour, IUnityAdsLoadListener, IUnityAdsShowListener
{

    [SerializeField] private Button _button;
    [SerializeField] private string _androidAdUnitId = "Rewarded_Android";
    [SerializeField] private int _reward;
    
    private void Start()
    {
        _button.interactable = false;
        Invoke(nameof(LoadAd),2);
    }

    public void LoadAd()
    {
        Advertisement.Load(_androidAdUnitId, this);
    }

    public void ShowAd()
    {
        _button.interactable = false;
        Advertisement.Show(_androidAdUnitId, this);
        LoadAd();
    }
    
    public void OnUnityAdsAdLoaded(string placementId)
    {
        _button.interactable = true;
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
        if (showCompletionState == UnityAdsShowCompletionState.COMPLETED)
        {
            Wallet.Instance.AddMoney(_reward);
            Advertisement.Load(_androidAdUnitId,this);
        }
    }
}
