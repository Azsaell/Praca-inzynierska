using System.Threading;
using Unity.RenderStreaming;
using Unity.RenderStreaming.Signaling;
using Unity.VisualScripting;
using UnityEngine;

public class RenderStreamingManager : MonoBehaviour {
    private RenderStreaming renderStreaming;
    // Start is called before the first frame update
    void Start() {
        if(!UIManager.signalingUrl.IsUnityNull()) {
            renderStreaming = gameObject.GetComponent<RenderStreaming>();
            renderStreaming.Run(
                hardwareEncoder: false,
                signaling: new WebSocketSignaling(
                    UIManager.signalingUrl, 5, SynchronizationContext.Current));
        }
    }
}
