using System.Collections;
using System.Collections.Generic;
using System.Threading;
using Unity.RenderStreaming;
using Unity.RenderStreaming.Signaling;
using UnityEngine;

public class RenderStreamingManager : MonoBehaviour {
    private RenderStreaming renderStreaming;
    // Start is called before the first frame update
    void Start() {
        // renderStreaming = gameObject.GetComponent<RenderStreaming>();
        // renderStreaming.Run(
        //     hardwareEncoder: false,
        //     signaling: new WebSocketSignaling(
        //         UIManager.signalingUrl, 5, SynchronizationContext.Current));
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
