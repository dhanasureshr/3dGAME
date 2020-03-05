using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player_joy_movement_irrspective_to_cam : ExtendedCustomMonoBehavior
{
    ///--------------------------------------------------------------------------
    ///==========================================================================
    ///--------------------------------------------------------------------------
    ///this script should be enabled when the player is in the fighting mode
    ///to give good control of player movement when fighting 
    ///the main working of this scrpt is 
    ///by using this script the player can navagete around the scene
    ///by having a camera at constant rotation means the camera will not consider 
    ///player rotation 
    ///--------------------------------------------------------------------------
    ///==========================================================================
    ///--------------------------------------------------------------------------


    #region  public variables
    public float speed = 6.0f;
    public float gravity = 20.0f;
    public VirtualJoystick joystickcontroller_ref;
    #endregion

    #region private variables
    private float x;
    private float y;

    
    #endregion


    #region methods
    private void Start()
    {
        charactercontroller = GetComponent<CharacterController>();
        tempVEC = Vector3.zero;
        

    }

    private void LateUpdate()
    {
        if(charactercontroller.isGrounded)
        {
            x = joystickcontroller_ref.InputDirection.x;
            y = joystickcontroller_ref.InputDirection.z;
            tempVEC = (transform.forward * x) + (transform.right * y);
            tempVEC = tempVEC.normalized;
            tempVEC = transform.InverseTransformDirection(tempVEC);
            tempVEC *= speed;


         
        }

        tempVEC.y -= gravity * Time.deltaTime;
        charactercontroller.Move(tempVEC * Time.deltaTime);
    }



    #endregion
}
