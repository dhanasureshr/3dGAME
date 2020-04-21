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
    public bool move = false;
    private void Start()
    {
        enimy_nav_mesh_agent = GetComponentInParent<NavMeshAgent>();
        StartCoroutine("start_enimy_moement");
       
    }

    public void common_enimy_movement()
    {

        distance = Vector3.Distance(transform.position, target_position.position);
        Vector3 tar = new Vector3(target_position.transform.position.x, transform.position.y, target_position.transform.position.z);
        transform.LookAt(tar);
        enimy_nav_mesh_agent.SetDestination(target_position.position);
    }
    #region enimy_Ienumerator_methods
    IEnumerator start_enimy_moement()
    {
        
        yield return new WaitForSeconds(3);
        common_enimy_movement();
        yield return StartCoroutine("start_enimy_moement");
        
   
    }


 
    #endregion
    
    
}
