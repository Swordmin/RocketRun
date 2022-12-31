using UnityEngine;

public class RateGameViewer : MonoBehaviour
{

    [SerializeField] private GameObject _rateWindow;

    private void Awake()
    {
        GetComponent<GameStateService>().OnChangeState += (state) =>
        {
            if (PlayerPrefs.HasKey("Rate"))
                return;
            if (state == GameState.Fail)
            {
                if (PlayerPrefs.HasKey("FailCount"))
                {
                    int failCount = PlayerPrefs.GetInt("FailCount");
                    if (failCount % 4 == 1)
                    {
                        _rateWindow.SetActive(true);
                    }
                }

            }
        };
    }
}
