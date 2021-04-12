using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player_movement : MonoBehaviour
{
    private Vector3 MoveDirection;
    private Vector3 ProjectedCameraForward;

    private Quaternion rotationToCamera;


    private float movespeed = 5.0f;
    private float rotationspeed = 5.0f;



    private Quaternion rotationToMoveDirection;
    [Inject(InjectFrom.Anywhere)]
    public INPUT_MANAGER_FOR_PLAYER Player_Input;


    
    private void Update()
    {
        Debug.Log("hi dhana player");

        MoveDirection = Player_Input.moveVec;

        ProjectedCameraForward = Vector3.ProjectOnPlane(Camera.main.transform.forward,Vector3.up);
        rotationToCamera = Quaternion.LookRotation(ProjectedCameraForward,Vector3.up);


        MoveDirection  = rotationToCamera * MoveDirection;

        rotationToMoveDirection  = Quaternion.LookRotation(MoveDirection,Vector3.up);
        // this rotation is for wepon look
        //transform.rotation = Quaternion.RotateTowards(transform.rotation,rotationToCamera,rotationspeed * Time.deltaTime);

        // this rotation is for free look
        transform.rotation = Quaternion.RotateTowards(transform.rotation,rotationToMoveDirection,rotationspeed * Time.deltaTime);

        transform.position += MoveDirection * movespeed * Time.deltaTime;

        
    }
    

}
