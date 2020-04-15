using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class enimy_movement : ExtendedCustomMonoBehavior
{
    /// <summary>
    /// In this script manages the enimy movement and the related handling like 
    /// determing state of the enimy like 
    /// fighting state
    /// petrolling state
    /// chasing state
    /// </summary>
    [TextArea]
    public string objd = "this should be attatched to the enimy mesh where enimy animator and nav_mesh_agent";
    //this are the variables for the enimy movement
    public NavMeshAgent enimy_nav_mesh_agent;
    public Transform target_position;
    public float max_distance;
    public float distance;
    //this are the varibles for the  enimy animations
    public Animator enimy_animator_ref;
    private static int enimy_run = Animator.StringToHash("move");
    private static int enimy_fight = Animator.StringToHash("fight");
    private static int enimy_get_hit = Animator.StringToHash("get_hit");
    private static int enimy_fall_down = Animator.StringToHash("death");

    
    private void Start()
    {
        enimy_nav_mesh_agent = GetComponentInParent<NavMeshAgent>();
        enimy_animator_ref = GetComponent<Animator>();
        StartCoroutine(start_enimy_moement());
    }
    #region enimy_fighting_functions
    public void PLAY_ENIMY_RUN()
    {
        // enimy_animator_ref.SetTrigger(enimy_run);
        enimy_animator_ref.SetBool(enimy_run, true);
    }

    public void EXIT_ENIMY_RUN()
    {
        enimy_animator_ref.SetBool(enimy_run, false);
    }
    public void PLAY_ENIMY_FIGHT()
    {
        enimy_animator_ref.SetBool(enimy_fight,true);
    }
    
    public void EXIT_ENIMY_FIGHT()
    {
        enimy_animator_ref.SetBool(enimy_fight, false);
    }
    public void PLAY_ENIMY_GET_HIT()
    {
        enimy_animator_ref.SetBool(enimy_get_hit,true);

    }
    public void EXIT_ENIMY_GET_HIT()
    {
        enimy_animator_ref.SetBool(enimy_get_hit, false);
    }
    public void PLAY_ENIMY_FALL_DOWN()
    {
        enimy_animator_ref.SetTrigger(enimy_fall_down);
    }
    #endregion

    private void Update()
    {
        distance = Vector3.Distance(transform.position, target_position.position);
        
        if(distance <= enimy_nav_mesh_agent.stoppingDistance)
        {
            PLAY_ENIMY_FIGHT();
        }
        else
        {
            EXIT_ENIMY_FIGHT();
        }
    }

    #region enimy_Ienumerator_methods

    IEnumerator start_enimy_moement()
    {
        yield return new WaitForSeconds(2);
        if (distance <= max_distance && distance >= enimy_nav_mesh_agent.stoppingDistance)
        {
            
            PLAY_ENIMY_RUN();
            enimy_nav_mesh_agent.SetDestination(target_position.position);
        }
        else
        {
            EXIT_ENIMY_RUN();
            EXIT_ENIMY_FIGHT();
        }
        yield return StartCoroutine(start_enimy_moement());
    }


   
    #endregion
}
