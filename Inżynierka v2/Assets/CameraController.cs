using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

public class CameraController : MonoBehaviour
{
    public void Look(InputAction.CallbackContext value)
    {
        print(value);
        Vector2 input = value.ReadValue<Vector2>();
        transform.eulerAngles += new Vector3(-input.y*0.1f, input.x*0.1f, 0);
    }
    public void LookVr(InputAction.CallbackContext value)
    {
        print(value);
        Quaternion input = value.ReadValue<Quaternion>();
        transform.rotation = input;
    }
    public void LookVr2(InputAction.CallbackContext value)
    {
        print(value);
        Quaternion input = value.ReadValue<Quaternion>();
        transform.rotation = input;
    }
}
