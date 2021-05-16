using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player_movement : MonoBehaviour
{

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
    
    Animator Networked_Player_animatior;



    private void Start()
    {
        playercharactercontroller = GetComponent<CharacterController>();
        Networked_Player_animatior = GetComponentInChildren<Animator>();


    }

    
    private void Update()
    {
        if(wepon__movement)// this condition enables player wepon movement
        {
            Networked_Player_animatior.SetLayerWeight(0,1);
            Networked_Player_animatior.SetLayerWeight(1,0);
            MoveDirection = Player_Input.moveVec;
            
                MoveDirection = Camera.main.transform.TransformDirection(MoveDirection);
                MoveDirection = MoveDirection * speed;// here aplying the movement input when player is in middle of jump
                verticalvelocity -= gravity * Time.deltaTime;
                angle += Camera.main.transform.eulerAngles.y; // new below comment
                targetrotation = Quaternion.Euler(0, angle, 0);
                angle = Mathf.Atan2(Player_Input.moveVec.x,Player_Input.moveVec.z);                         
                angle = Mathf.Deg2Rad * angle;  // this is helping to strict the player rotation
                angle += Camera.main.transform.eulerAngles.y;
                targetrotation = Quaternion.Euler(0, angle, 0);
                transform.rotation = Quaternion.Lerp(transform.rotation,targetrotation,speed  * Time.deltaTime);
                moveVector = new Vector3(MoveDirection.x,verticalvelocity,MoveDirection.z);
                playercharactercontroller.Move(moveVector* Time.deltaTime); // this is the move the player
                Networked_Player_animatior.SetFloat("wepon_inputX",Player_Input.moveVec.x);
                Networked_Player_animatior.SetFloat("wepon_inputY",Player_Input.moveVec.z);
            
        }
        else // this condition enables player advanture movemnt
        {
            
            Networked_Player_animatior.SetLayerWeight(0,0);
            Networked_Player_animatior.SetLayerWeight(1,1);
            // TO---DO 
            Vector3 direction = new Vector3(Player_Input.moveVec.x,0f,Player_Input.moveVec.z).normalized;
            if(direction.magnitude >= 0.1f)
            {
                float tragetAngle = Mathf.Atan2(direction.x,direction.z) * Mathf.Rad2Deg  + Camera.main.transform.eulerAngles.y;
                transform.rotation = Quaternion.Euler(0f,tragetAngle,0f);
                Vector3 moveDir = Quaternion.Euler(0f,tragetAngle,0f) * Vector3.forward;
                playercharactercontroller.Move(moveDir.normalized * speed * Time.deltaTime);
                    
            }
            
            Networked_Player_animatior.SetFloat("wepon_inputX",Player_Input.moveVec.x);    
            Networked_Player_animatior.SetFloat("wepon_inputY",Player_Input.moveVec.z);

            

            
            //MoveDirection.y -= gravity * Time.deltaTime;
        }
        
    }
    

}
