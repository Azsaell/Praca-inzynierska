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
        private InputSender inputSender;

        void Awake()
        {
            Debug.Log("awake");
            receiveVideoViewer.OnUpdateReceiveTexture += OnUpdateReceiveTexture;
            receiveAudioViewer.SetSource(remoteAudioSource);
            receiveAudioViewer.OnUpdateReceiveAudioSource += source =>
            {
                 Debug.Log("In receive audio source");
                 source.loop = true;
                 source.Play();
            };
        }

        void Start()
        {
            Debug.Log("Start");
            inputSender = GetComponent<InputSender>();
            inputSender.OnStartedChannel += OnStartedChannel;
        }

        void OnUpdateReceiveTexture(Texture texture)
        {
            planeMesh.material.mainTexture = texture;
            SetInputChange();
        }
        
        // void OnUpdateReceiveAudioSource(AudioSource source)
        // {
        //     if (source.IsUnityNull()) {
        //         Debug.Log("Source is null");
        //     }
        //     Debug.Log("In receive audio source");
        //     source.loop = true;
        //     source.Play();
        // }

        void OnStartedChannel(string connectionId)
        {
            SetInputChange();
        }

        void SetInputChange()
        {
            if (!inputSender.IsConnected || planeMesh.material.mainTexture == null)
                return;
            inputSender.EnableInputPositionCorrection(true);
        }

        void OnStart()
        {
            if (string.IsNullOrEmpty(connectionId))
            {
                connectionId = System.Guid.NewGuid().ToString("N");
            }
            Debug.Log(connectionId);
            connection.CreateConnection(connectionId);
        }
        public void StartOnSpace(InputAction.CallbackContext value)
        {
            if (value.started) {
                if (!string.IsNullOrEmpty(connectionId))
                {
                    connection.DeleteConnection(connectionId);
                }
                connectionId = System.Guid.NewGuid().ToString("N");

                Debug.Log(connectionId);
                connection.CreateConnection(connectionId);
            }
        }
        public void Back(InputAction.CallbackContext value)
        {
            connection.DeleteConnection(connectionId);
            SceneManager.LoadScene("ReceiverMenu");
        }
    }
