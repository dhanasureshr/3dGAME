﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enimy_animation_helper : MonoBehaviour
{
    [HideInInspector] public Animator enimy_animator_ref; //controlled by enimy manager
    [HideInInspector] public Renderer enimy_rendrer; // controlled by enimy manger

    private enimy_movement enimy_movement_reference;
   

    private enimy_manager enimy_manger_ref_for_component_shareng;

    [HideInInspector]
    public float default_attack_time = 1.0f;
    [HideInInspector]
    public float current_attack_time;
    Vector2 smoothDeltaPosition = Vector2.zero;
    Vector2 velocity = Vector2.zero;


    private static int enimy_run = Animator.StringToHash("move");
    private static int enimy_get_hit = Animator.StringToHash("get_hit");
    private static int enimy_face_hit = Animator.StringToHash("punch_to_face_enimy");
    private static int enimy_death = Animator.StringToHash("death");
    private static int enimy_punch = Animator.StringToHash("punch");
    private static int enimy_punch1 = Animator.StringToHash("punch1");
    private static int enimy_kick = Animator.StringToHash("kick");
    private static int enimy_nock_down = Animator.StringToHash("nock_down");
    private static int enimy_stand_up = Animator.StringToHash("stand_up");
    private static int x_input = Animator.StringToHash("x");
    private static int y_input = Animator.StringToHash("y");

    private static int enimy_sholder_dute = Animator.StringToHash("sholder_throw_enimy");
    private static int enimy_hell_dute = Animator.StringToHash("enimy_hell_slammer");




    public bool play_get_hit;

    private Rigidbody enimy_rigid_body;

    // test to changer the animator controller at run time
   //////////////////////////////////////////////////////////// public RuntimeAnimatorController rp;


    private void Start()
    {
       // enimy_movement_reference = GetComponent<enimy_movement>();
       // enimy_animator_ref = GetComponent<Animator>();  // this is controlled by the enimy manager 
        //enimy_rendrer = GetComponentInChildren<SkinnedMeshRenderer>();
        //enimy_movement_reference.enimy_nav_mesh_agent.updatePosition = false;

        // test to changer the animator controller at run time
        ////////////////////////////////////////////////////// enimy_animator_ref.runtimeAnimatorController = rp;


        enimy_manger_ref_for_component_shareng = gameObject.GetComponent<enimy_manager>();
        enimy_movement_reference = enimy_manger_ref_for_component_shareng.E__manager_ref_enimy_movement;
        enimy_movement_reference.enimy_nav_mesh_agent.updatePosition = false;

        enimy_rigid_body = GetComponent<Rigidbody>();
        
    }

    #region enimy_fighting_functions

    public void PLAY_ENIMY_GET_HIT()
    {
        enimy_animator_ref.SetTrigger(enimy_get_hit);
    }

    public void PLAY_ENIMY_FACE_HIT()
    {
        enimy_animator_ref.SetTrigger(enimy_face_hit);
    }
   
    public void PLAY_ENIMY_PUNCH()
    {
        enimy_animator_ref.SetTrigger(enimy_punch);
    }

    public void PLAY_ENIMY_PUNCH1()
    {
        enimy_animator_ref.SetTrigger(enimy_punch1);
    }
  
    public void PLAY_ENIMY_DEATH()
    {
        enimy_animator_ref.SetTrigger(enimy_death);

    }

    public void PLAY_ENIMY_KICK()
    {
        enimy_animator_ref.SetTrigger(enimy_kick);
    }

    public void PLAY_ENIMY_NOCK_DOWN()
    {
        enimy_animator_ref.SetTrigger(enimy_nock_down);
    }


    public void PLAY_ENIMY_STAND_UP()
    {
        enimy_animator_ref.SetTrigger(enimy_stand_up);
    }


    public void PLAY_ENIMY_SHOLDER_DUTE()
    {
        enimy_animator_ref.SetTrigger(enimy_sholder_dute);
    }

    public void PLAY_ENIMY_HELL_DUTE()
    {
        enimy_animator_ref.SetTrigger(enimy_hell_dute);
    }

    #endregion

    private void FixedUpdate()
    {
        //enimy blend tree movement
        Vector3 worldDeltaPosition = enimy_movement_reference.enimy_nav_mesh_agent.nextPosition - transform.position;

        // Map 'worldDeltaPosition' to local space
        float dx = Vector3.Dot(transform.right, worldDeltaPosition);
        float dy = Vector3.Dot(transform.forward, worldDeltaPosition);
        Vector2 deltaPosition = new Vector2(dx, dy);

        // Low-pass filter the deltaMove
        float smooth = Mathf.Min(1.0f, Time.deltaTime / 0.15f);
        smoothDeltaPosition = Vector2.Lerp(smoothDeltaPosition, deltaPosition, smooth);

        // Update velocity if time advances
        if (Time.deltaTime > 1e-5f)
        {
            velocity = smoothDeltaPosition / Time.deltaTime;
        }
        if (enimy_movement_reference.enimy_nav_mesh_agent.enabled == true)
        {
            bool shouldMove = velocity.magnitude > 0.5f && enimy_movement_reference.enimy_nav_mesh_agent.remainingDistance > enimy_movement_reference.enimy_nav_mesh_agent.radius;

            // Update animation parameters
            enimy_animator_ref.SetBool(enimy_run, shouldMove);
            enimy_animator_ref.SetFloat(x_input, velocity.x);
            enimy_animator_ref.SetFloat(y_input, velocity.y);
            transform.position = enimy_movement_reference.enimy_nav_mesh_agent.nextPosition;
           // enimy_rigid_body.AddForce(enimy_movement_reference.enimy_nav_mesh_agent.nextPosition);
        }
    }

    /*
    void OnAnimatorMove()
    {
       transform.position = enimy_movement_reference.enimy_nav_mesh_agent.nextPosition;
    }
    
    */


    public void disable_enimy_get_hit_animation()
    {
        transform.gameObject.GetComponent<health>().disable_enimy_Rotation_collider = true;
        play_get_hit = false;
    }


    public void enable_enimy_get_hit_animation()
    {
        transform.gameObject.GetComponent<health>().disable_enimy_Rotation_collider = false;
        play_get_hit = true;
    }


    /// <summary>
    /// ///////////////////////////////////////////////////////////////////////////
    /// </summary>
    public void enimy_get_hit_rotation_constraint_disabler()
    {
        transform.gameObject.GetComponent<health>().disable_enimy_Rotation_collider = true;
    }

    // i think the below code can be delet
    public void enable_nav_mesh_agent()
    {

        if (enimy_movement_reference.enimy_nav_mesh_agent.enabled == false)
        {
            transform.gameObject.GetComponent<health>().disable_enimy_Rotation_collider = false;
            enimy_movement_reference.enimy_nav_mesh_agent.enabled = true;
            play_get_hit = true;
        }
    }
    /// <summary>
    /// //////////////////////////////////////////////////////////////////////////////
    /// </summary>
    /// <param name="attack_num"></param>
    /// 




    #region enimy attack method
    public void enimy_attack(int attack_num)
    {
        if(attack_num == 0)
        {
            PLAY_ENIMY_PUNCH();
        }

        if(attack_num == 1)
        {
            PLAY_ENIMY_KICK();
        }

        if(attack_num == 2)
        {
            PLAY_ENIMY_PUNCH1();
        }
    }

    #endregion

    // enimy hit reaction method
    public void ENIMY_HIT_REACTION(int n)
    {
        if (play_get_hit)
        {
            if (n == 0)
            {
                PLAY_ENIMY_FACE_HIT();
            }

            if (n == 1)
            {
                PLAY_ENIMY_GET_HIT();
            }
        }
    }


}