using System.Collections;
using System.Collections.Generic;
using SimpleFileBrowser;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIManager : MonoBehaviour {
    public static string videoPath;
    public static string signalingUrl;

    public TMP_InputField signalingUrlInput;
    public void StartStreamingSender() {
        SceneManager.LoadScene("Sender");
    }
    public void StartStreamingReceiver() {
        SceneManager.LoadScene("Receiver");
    }
    public void SelectVideos() {
        FileBrowser.ShowLoadDialog((path) => videoPath = path[0],
            () => videoPath = null,
            FileBrowser.PickMode.Files,
            false);
    }
    public void QuitGame() {
        Application.Quit();
    }
    public void BackSender() {
        SceneManager.LoadScene("SenderMenu");
    }
    public void BackReceiver() {
        SceneManager.LoadScene("ReceiverMenu");
    }
    public void OnSignalingUrlChange() {
        signalingUrl = signalingUrlInput.text;
    }
}
