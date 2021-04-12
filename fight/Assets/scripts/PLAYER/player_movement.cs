using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player_movement : MonoBehaviour
{
    private Vector3 MoveDirection;
    private Vector3 ProjectedCameraForward;

    private Quaternion rotationToCamera;

    private Quaternion rotationToMoveDirection;
    [Inject(InjectFrom.Anywhere)]
    public INPUT_MANAGER_FOR_PLAYER Player_Input;


    
    private void update()
    {
        if(gamemanager.instance.isinputallowed)
        {
            
        }


        //MoveDirection = Vector3.forward 
    }
    

}
