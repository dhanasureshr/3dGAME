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

    public NavMeshAgent enimy_nav_mesh_agent;
    public Transform target_position;
    public float move_speed;
    public float min_distance;
    public float max_distance;

    public bool patrol=false;
    public bool chase=false;
    public bool fight=false;


    private void Update()
    {
        tempVEC = transform.position - target_position.position;
        move_enimy();
    }

    public void  move_enimy()
    {
        
           
            enimy_nav_mesh_agent.SetDestination(target_position.position);
        


        
    }



}
