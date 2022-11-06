using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class LookAround : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update() {
        if (Input.GetMouseButton(0)) {
            HandleHorizontalRotation();
            HandleVerticalRotation();
        }
    }

    
    private void HandleVerticalRotation() {
        var mouseVerticalRotation = Input.GetAxis("Mouse Y");
        var newRotation = transform.localRotation.eulerAngles;
        newRotation.x += mouseVerticalRotation*1.2f;
        transform.localRotation = Quaternion.Euler(newRotation);
    }

    private void HandleHorizontalRotation() {
        var mouseHorizontalRotation = Input.GetAxis("Mouse X");
        var newRotation = transform.localRotation.eulerAngles;
        newRotation.y -= mouseHorizontalRotation*1.2f;
        transform.localRotation = Quaternion.Euler(newRotation);
    }
    
    
}
