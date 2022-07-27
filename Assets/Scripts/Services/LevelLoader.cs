using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelLoader : MonoBehaviour
{
    [SerializeField] private DoFadePanelUI _fadePanel;
    
    public void LoadLevel(int id)
    {
        if(_fadePanel)
            _fadePanel.Fade(1, () => SceneManager.LoadScene(id));
    }
    public void Restart()
    {
        if(_fadePanel)
            _fadePanel.Fade(1, () => SceneManager.LoadScene(SceneManager.GetActiveScene().name));
    }
}
