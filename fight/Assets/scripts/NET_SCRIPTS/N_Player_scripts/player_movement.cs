using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace com.dhanasoftwares
{
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

        private float jumpforce = 15.0f;

        private void Start()
        {
            playercharactercontroller = GetComponent<CharacterController>();
            Networked_Player_animatior = GetComponentInChildren<Animator>();
        }

        
        private void Update()
        {
            if(wepon__movement)// this condition enables player wepon movement
            {
                Networked_Player_animatior.SetBool("P_wepon_mode",true);
                MoveDirection = Player_Input.moveVec;
                MoveDirection = Camera.main.transform.TransformDirection(MoveDirection);
                //---jump code TO--DO
                verticalvelocity = jump_motor();
                angle += Camera.main.transform.eulerAngles.y; // new below comment
                targetrotation = Quaternion.Euler(0, angle, 0);
                angle = Mathf.Atan2(Player_Input.moveVec.x,Player_Input.moveVec.z);                         
                angle = Mathf.Deg2Rad * angle;  // this is helping to strict the player rotation
                angle += Camera.main.transform.eulerAngles.y;
                targetrotation = Quaternion.Euler(0, angle, 0);
                transform.rotation = Quaternion.Lerp(transform.rotation,targetrotation,speed  * Time.deltaTime);
                moveVector = new Vector3(MoveDirection.x,verticalvelocity,MoveDirection.z);
                playercharactercontroller.Move(moveVector* Time.deltaTime); // this is the move the player    
            }
            else // this condition enables player advanture movemnt
            {
                Networked_Player_animatior.SetBool("P_wepon_mode",false);
                MoveDirection = Player_Input.moveVec.normalized;
                if(MoveDirection.magnitude >= 0.1f)
                {
                    float tragetAngle = Mathf.Atan2(MoveDirection.x,MoveDirection.z) * Mathf.Rad2Deg  + Camera.main.transform.eulerAngles.y;
                    transform.rotation = Quaternion.Euler(0f,tragetAngle,0f);
                    MoveDirection = Quaternion.Euler(0f,tragetAngle,0f) * Vector3.forward;
                    //---jump code
                    verticalvelocity = jump_motor();
                    moveVector = new Vector3(MoveDirection.x,verticalvelocity,MoveDirection.z);
                    playercharactercontroller.Move(moveVector.normalized * speed * Time.deltaTime);     
                }
                                
            }
            Networked_Player_animatior.SetFloat("wepon_inputX",Player_Input.moveVec.x);    
            Networked_Player_animatior.SetFloat("wepon_inputY",Player_Input.moveVec.z);

                
        }
        private float jump_motor()
        {
             if(playercharactercontroller.isGrounded)
			        {
				        verticalvelocity = -gravity * Time.deltaTime;
				        MoveDirection = MoveDirection * speed; // applying movement when player is on ground
				        if(Player_Input.jump) // multiplat_form_input_manager.jump 
				        {
                            if(wepon__movement)
                            {
					            Networked_Player_animatior.SetTrigger("idle_jump");
					            verticalvelocity = jumpforce;
                            }
                            else
                            {
					            Networked_Player_animatior.SetTrigger("run_jump");
					            verticalvelocity = jumpforce + 5;
                            }

					        Player_Input.jump = false;//multiplat_form_input_manager.jump = false;
				        }
			        }
			        else
			        {
				        MoveDirection = MoveDirection * speed;// here aplying the movement input when player is in middle of jump
				        verticalvelocity -= gravity * Time.deltaTime;
			        }
                    
            return verticalvelocity;
        }

    } // BY DHANA SURESH -------------->dhanasoftwares@email.com

    
}