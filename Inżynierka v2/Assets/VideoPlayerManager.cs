using UnityEngine;
using UnityEngine.Video;

public class VideoPlayerManager : MonoBehaviour {
    public VideoPlayer videoPlayer;
    
    void Start()
    {
        if (UIManager.videoPath != null) {
            videoPlayer.url = UIManager.videoPath;
        }
    }
}
