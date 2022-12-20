using Unity.RenderStreaming;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;

class ReceiverManager : MonoBehaviour
    {
        [SerializeField] private MeshRenderer planeMesh;
        
        [SerializeField] private AudioSource remoteAudioSource;
        [SerializeField] private AudioStreamReceiver receiveAudioViewer;
        [SerializeField] private VideoStreamReceiver receiveVideoViewer;
        [SerializeField] private SingleConnection connection;

        private string connectionId;

        void Awake()
        {
            receiveVideoViewer.OnUpdateReceiveTexture += OnUpdateReceiveTexture;
            receiveAudioViewer.SetSource(remoteAudioSource);
            receiveAudioViewer.OnUpdateReceiveAudioSource += source =>
            {
                 source.loop = true;
                 source.Play();
            };
        }

        void OnUpdateReceiveTexture(Texture texture)
        {
            planeMesh.material.mainTexture = texture;
        }

        public void StartOnSpace(InputAction.CallbackContext value)
        {
            if (value.started) {
                if (!string.IsNullOrEmpty(connectionId))
                {
                    connection.DeleteConnection(connectionId);
                }
                connectionId = System.Guid.NewGuid().ToString("N");
                connection.CreateConnection(connectionId);
            }
        }
        public void Back(InputAction.CallbackContext value)
        {
            connection.DeleteConnection(connectionId);
            SceneManager.LoadScene("ReceiverMenu");
        }
    }
