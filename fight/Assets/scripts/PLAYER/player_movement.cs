using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player_movement : MonoBehaviour
{
    // private Vector3 MoveDirection;
    // private Vector3 ProjectedCameraForward;
    // private Quaternion rotationToCamera;
    // private float movespeed = 5.0f;
    // private float rotationspeed = 5.0f;
    // private Quaternion rotationToMoveDirection;


    [Inject(InjectFrom.Anywhere)]
    public INPUT_MANAGER_FOR_PLAYER Player_Input;
   
    private Vector3 MoveDirection = Vector3.zero;

    private CharacterController playercharactercontroller;
    private float rotate_speed = 5.0f;

	private float verticalvelocity;

	private float gravity = 20.8f;
    public float speed;

    private Vector3 moveVector;

    
	float angle;
	Quaternion targetrotation;

    public bool wepon__movement;


    private void Start()
    {
        playercharactercontroller = GetComponent<CharacterController>();

    }

    
    private void Update()
    {
        MoveDirection = Player_Input.moveVec;

        MoveDirection = Camera.main.transform.TransformDirection(MoveDirection);

        //MoveDirection =transform.TransformDirection(MoveDirection);
        
		MoveDirection = MoveDirection * speed;// here aplying the movement input when player is in middle of jump
	    verticalvelocity -= gravity * Time.deltaTime;


        angle = Mathf.Atan2(Player_Input.moveVec.x,Player_Input.moveVec.z); 
        if(wepon__movement)
        {                       
            angle = Mathf.Rad2Deg * angle; // this is helping to rotate the paleyer 
        }
        else
        {
            angle = Mathf.Deg2Rad * angle;  // this is helping to strict the player rotation
        }
        angle += Camera.main.transform.eulerAngles.y;
        //angle += transform.eulerAngles.y;
        targetrotation = Quaternion.Euler(0, angle, 0);

    
		transform.rotation = Quaternion.Lerp(transform.rotation,targetrotation,20 * Time.deltaTime);
        
        //transform.rotation = Quaternion.RotateTowards(transform.rotation,targetrotation,speed  * Time.deltaTime);

        angle = Mathf.Atan2(Player_Input.moveVec.x,Player_Input.moveVec.z);                        
        angle = Mathf.Rad2Deg * angle; // this is helping to rotate the paleyer 
        //angle = Mathf.Deg2Rad * angle;  // this is helping to strict the player rotation
        angle += Camera.main.transform.eulerAngles.y;
        targetrotation = Quaternion.Euler(0, angle, 0);

    
		//transform.rotation = Quaternion.Lerp(transform.rotation,targetrotation,speed * Time.deltaTime);
        transform.rotation = Quaternion.Lerp(transform.rotation,targetrotation,speed  * Time.deltaTime);
        
        moveVector = new Vector3(MoveDirection.x,verticalvelocity,MoveDirection.z);

        playercharactercontroller.Move(moveVector* Time.deltaTime);


        /// this code related to the player movment with player transform;

        // Debug.Log("hi dhana player");
        // MoveDirection = Player_Input.moveVec;
        // ProjectedCameraForward = Vector3.ProjectOnPlane(Camera.main.transform.forward,Vector3.up);
        // rotationToCamera = Quaternion.LookRotation(ProjectedCameraForward,Vector3.up);
        // MoveDirection  = rotationToCamera * MoveDirection;
        // rotationToMoveDirection  = Quaternion.LookRotation(MoveDirection,Vector3.up);
        // // this rotation is for wepon look
        // transform.rotation = Quaternion.RotateTowards(transform.rotation,rotationToCamera,rotationspeed * Time.deltaTime);
        // // this rotation is for free look
        // //transform.rotation = Quaternion.RotateTowards(transform.rotation,rotationToMoveDirection,rotationspeed * Time.deltaTime);
        // transform.position += MoveDirection * movespeed * Time.deltaTime;

        
    }
    

}
