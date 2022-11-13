using System;
using System.Collections;
using System.Collections.Generic;
using Unity.RenderStreaming;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using Object = System.Object;

class ReceiverManager : MonoBehaviour
    {
        [SerializeField] private RenderStreaming renderStreaming;
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
            // receiveAudioViewer.OnUpdateReceiveAudioSource += OnUpdateReceiveAudioSource;
        }

        void Start()
        {
            Debug.Log("Start");
            // receiveAudioViewer.SetSource(remoteAudioSource);
            // if (renderStreaming.runOnAwake)
            //     return;
            inputSender = GetComponent<InputSender>();
            inputSender.OnStartedChannel += OnStartedChannel;
            //OnStart();
        }

        void OnUpdateReceiveTexture(Texture texture)
        {
            planeMesh.material.mainTexture = texture;
            SetInputChange();
        }
        void OnUpdateReceiveAudioSource(AudioSource source)
        {
            if (source.IsUnityNull()) {
                Debug.Log("source jest null a ja jestem w dupie");
            }
            Debug.Log("In receive audio source");
            source.loop = true;
            source.Play();
        }

        void OnStartedChannel(string connectionId)
        {
            SetInputChange();
        }

        void SetInputChange()
        {
            if (!inputSender.IsConnected || planeMesh.material.mainTexture == null)
                return;
            //inputSender.SetInputRange(planeMesh.material);
            inputSender.EnableInputPositionCorrection(true);
        }

        void OnStart()
        {
            // receiveAudioViewer.SetSource(remoteAudioSource);
            if (string.IsNullOrEmpty(connectionId))
            {
                connectionId = System.Guid.NewGuid().ToString("N");
            }

            Debug.Log(connectionId);

            //do {
            connection.CreateConnection(connectionId);
                //} while (!connection.IsConnected(connectionId));

        }
        public void StartOnSpace(InputAction.CallbackContext value)
        {
            // receiveAudioViewer.SetSource(remoteAudioSource);
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
            SceneManager.LoadScene("ReceiverMenu");
        }

        private void OnStop()
        {
            connection.DeleteConnection(connectionId);
            connectionId = String.Empty;
        }
    }
