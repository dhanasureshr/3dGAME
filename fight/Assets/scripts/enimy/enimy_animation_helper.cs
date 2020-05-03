using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enimy_animation_helper : MonoBehaviour
{
    public enimy_movement enimy_movement_reference;
    public Animator enimy_animator_ref;
    public Renderer enimy_rendrer;
    [HideInInspector]
    public float default_attack_time = 1.0f;
    [HideInInspector]
    public float current_attack_time;
    Vector2 smoothDeltaPosition = Vector2.zero;
    Vector2 velocity = Vector2.zero;
    private static int enimy_run = Animator.StringToHash("move");
    private static int enimy_get_hit = Animator.StringToHash("get_hit");
    private static int enimy_death = Animator.StringToHash("death");
    private static int enimy_punch = Animator.StringToHash("punch");
    private static int enimy_punch1 = Animator.StringToHash("punch1");
    private static int enimy_kick = Animator.StringToHash("kick");
    private static int enimy_nock_down = Animator.StringToHash("nock_down");
    private static int enimy_stand_up = Animator.StringToHash("stand_up");
    private static int x_input = Animator.StringToHash("x");
    private static int y_input = Animator.StringToHash("y");
   
    private void Start()
    {
        enimy_movement_reference = GetComponent<enimy_movement>();
        enimy_animator_ref = GetComponent<Animator>();
        enimy_rendrer = GetComponentInChildren<SkinnedMeshRenderer>();
        enimy_movement_reference.enimy_nav_mesh_agent.updatePosition = false;
       
       
    }

    #region enimy_fighting_functions
    
    public void PLAY_ENIMY_GET_HIT()
    {
        enimy_animator_ref.SetTrigger(enimy_get_hit);
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

    #endregion

    private void Update()
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
        bool shouldMove = velocity.magnitude > 0.5f && enimy_movement_reference.enimy_nav_mesh_agent.remainingDistance > enimy_movement_reference.enimy_nav_mesh_agent.radius;

        // Update animation parameters
        enimy_animator_ref.SetBool(enimy_run, shouldMove);
        enimy_animator_ref.SetFloat(x_input, velocity.x);
        enimy_animator_ref.SetFloat(y_input, velocity.y);

    }
    //void OnAnimatorMove()
    //{
      // transform.position = enimy_movement_reference.enimy_nav_mesh_agent.nextPosition;
    //}
    

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




}