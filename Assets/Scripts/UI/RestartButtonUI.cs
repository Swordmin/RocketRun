using UnityEngine;
using UnityEngine.SceneManagement;
using DG.Tweening;
public class RestartButtonUI : MonoBehaviour
{
    [Header("AnimationSettings")] 
    [SerializeField] private Vector3 _sizeGoal;

    private Vector3 _sizeStart;

    [SerializeField] private float _speed;
    private Sequence _sequence;

    private void Awake()
    {
        _sequence = DOTween.Sequence();
        _sizeStart = transform.localScale;
        _sequence.Append(transform.DOScale(_sizeGoal, _speed)).SetLoops(-1,LoopType.Yoyo);
    }
    public void Restart()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}
