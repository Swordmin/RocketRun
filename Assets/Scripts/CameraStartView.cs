using UnityEngine;
using DG.Tweening;
using Cinemachine;

[RequireComponent(typeof(CinemachineVirtualCamera))]
public class CameraStartView : MonoBehaviour
{

    [SerializeField] private LaunchText _launchText;
    [SerializeField] private CinemachineVirtualCamera _camera;
    [SerializeField] private CinemachineTransposer _transposer;

    [SerializeField] private Vector3 _targetRotate;
    [SerializeField] private Vector3 _targetRotateCamera;
    [SerializeField, Min(0)] private float _speedRotate;
    [SerializeField, Min(0)] private float _speedMove;

    private void Awake()
    {
        _camera = GetComponent<CinemachineVirtualCamera>();
        _transposer = _camera.GetCinemachineComponent<CinemachineTransposer>();

        _launchText.OnLaunch += Move;
    }

    private void Move() 
    {
        transform.DORotate(new Vector3(-13, 0, 0), _speedRotate);
        DOTween.To(() => _transposer.m_FollowOffset, x => _transposer.m_FollowOffset = x, _targetRotateCamera, _speedMove).SetEase(Ease.InExpo);
    }

}
