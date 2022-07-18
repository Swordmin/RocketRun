using DG.Tweening;
using UnityEngine;

public class SpaceViewer : MonoBehaviour
{
    [SerializeField] private HightIndexUI _hightIndex;
    [SerializeField] private SpriteRenderer _sprite;
    private Tween _tween;

    public void Update()
    {
        if (_hightIndex.Hight > 50)
        {
            if(_tween != null)
                _tween.Kill();
            _tween = _sprite.DOFade(1, 5);
        }
        if (_hightIndex.Hight < 50)
        {
            _tween.Kill();
            _tween = _sprite.DOFade(0, 5);
        }
    }
}
