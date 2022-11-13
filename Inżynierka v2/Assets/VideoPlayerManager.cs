using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Video;
using Object = System.Object;

public class VideoPlayerManager : MonoBehaviour {
    public VideoPlayer videoPlayer;
    // Start is called before the first frame update
    void Start()
    {
        if (UIManager.videoPath != null) {
            videoPlayer.url = UIManager.videoPath;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
