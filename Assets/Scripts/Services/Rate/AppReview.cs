using System.Collections;
using UnityEngine;
using Google.Play.Review;

public class AppReview : MonoBehaviour
{

    private ReviewManager _reviewManager;
    PlayReviewInfo _playReviewInfo;

    void Awake()
    {
        _reviewManager = new ReviewManager();        
    }

    public void Rewiew() 
    {
        PlayerPrefs.SetInt("Rate", 1);
        StartCoroutine(ReviewTick());
    }

    IEnumerator ReviewTick()
    {
        yield return new WaitForSeconds(1);
        var requestFlowOperation = _reviewManager.RequestReviewFlow();
        yield return requestFlowOperation;
        if (requestFlowOperation.Error != ReviewErrorCode.NoError)
        {
            // Log error. For example, using requestFlowOperation.Error.ToString().
            yield break;
        }
        _playReviewInfo = requestFlowOperation.GetResult();
        var launchFlowOperation = _reviewManager.LaunchReviewFlow(_playReviewInfo);
        yield return launchFlowOperation;
        _playReviewInfo = null; // Reset the object
        if (launchFlowOperation.Error != ReviewErrorCode.NoError)
        {
            // Log error. For example, using requestFlowOperation.Error.ToString().
            yield break;
        }
        // The flow has finished. The API does not indicate whether the user
        // reviewed or not, or even whether the review dialog was shown. Thus, no
        // matter the result, we continue our app flow.

    }

}
