using System;
using System.Collections;
using System.Collections.Generic;
using Unity.RenderStreaming;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.UI;
using Object = System.Object;


static class InputSenderExtension
{
    public static void SetInputRange(this InputSender sender, RawImage image)
    {
        // correct pointer position
        Vector3[] corners = new Vector3[4];
        image.rectTransform.GetWorldCorners(corners);
        Camera camera = image.canvas.worldCamera;
        var corner0 = RectTransformUtility.WorldToScreenPoint(camera, corners[0]);
        var corner2 = RectTransformUtility.WorldToScreenPoint(camera, corners[2]);
        var region = new Rect(
            corner0.x,
            corner0.y,
            corner2.x - corner0.x,
            corner2.y - corner0.y
        );

        var size = new Vector2Int(image.texture.width, image.texture.height);
        sender.SetInputRange(region, size);
    }
}
class Test : MonoBehaviour
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
            
            
        }

        void Start()
        {
            Debug.Log("Start");
            // if (renderStreaming.runOnAwake)
            //     return;
            inputSender = GetComponent<InputSender>();
            inputSender.OnStartedChannel += OnStartedChannel;
            OnStart();
        }

        void OnUpdateReceiveTexture(Texture texture)
        {
            planeMesh.material.mainTexture = texture;
            SetInputChange();
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
            connection.DeleteConnection(connectionId);
            connectionId = System.Guid.NewGuid().ToString("N");

            Debug.Log(connectionId);
            connection.CreateConnection(connectionId);
        }

        private void OnStop()
        {
            connection.DeleteConnection(connectionId);
            connectionId = String.Empty;
        }
    }
