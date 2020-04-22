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
    [HideInInspector]
    public float max_distance;
    [HideInInspector]
    public float distance;

    public Transform[] points;
    
    private int destpoint = 0;
    
    public bool fight = false;
 
    public bool petrol = false;
   
    public bool chase = false;

    private int fight_con = 0;


    private void Start()
    {
        enimy_nav_mesh_agent = GetComponentInParent<NavMeshAgent>();
       
        StartCoroutine("start_enimy_movement");
        enimy_nav_mesh_agent.updateRotation = true;
        // this is for the enimy petrol code 
        enimy_nav_mesh_agent.autoBraking = false;
        destpoint = points.Length;
    }

  
    private void Update()
    {
        distance = Vector3.Distance(transform.position, target_position.position);
        //Debug.Log(distance);
        if(distance > 10)
        {
            chase = true;
        }
        else
        {
            chase = false;
        }

        if(distance < 6 && distance > 3)
        {
            petrol = true;
        }
        else
        {
            petrol = false;
        }
        if (distance <= 2)
        {
            fight_con = Random.Range(0, 8);
            if (fight_con == 0 || fight_con == 1)
            {
                fight = true;
                
            }
            else
            {
                fight = false;
              
                
            }
        }
    }

    public void common_enimy_movement(bool fig,bool cha,bool pet)
    {
        if (fig)
        {
            enimy_nav_mesh_agent.updateRotation = false;
            Vector3 tar = new Vector3(target_position.transform.position.x, transform.position.y, target_position.transform.position.z);
            transform.LookAt(tar);
            enimy_nav_mesh_agent.SetDestination(target_position.position); 
        }

        if(cha)
        {
            enimy_nav_mesh_agent.updateRotation = true;
            enimy_nav_mesh_agent.SetDestination(points[Random.Range(0, destpoint)].position);
        }

        if(pet)
        {
            if(points.Length == 0)
            {
                return;
            }
            enimy_nav_mesh_agent.updateRotation = false;
            Vector3 tar = new Vector3(target_position.transform.position.x, transform.position.y, target_position.transform.position.z);
            transform.LookAt(tar);
            enimy_nav_mesh_agent.SetDestination(points[Random.Range(0, destpoint)].position);
        }
    }
    #region enimy_Ienumerator_methods
    IEnumerator start_enimy_movement()
    {
        Vector3 tar = new Vector3(target_position.transform.position.x, transform.position.y, target_position.transform.position.z);
        transform.LookAt(tar);
        yield return new WaitForSeconds(2);
        common_enimy_movement(fight,chase,petrol);
       // Debug.Log("coroutine_running............");
        yield return StartCoroutine("start_enimy_movement");
    }
    #endregion
    
    
}
