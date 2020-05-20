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
    public enimy_animation_helper enimy_animation_helper_ref;
    [HideInInspector]
    public Transform target_position;
    [HideInInspector]
    public GameObject main_player;
    [HideInInspector]
    public float max_distance;
    [HideInInspector]
    public float distance;

    public Transform[] fightpoints;
    public GameObject[] target_fight_points;
    private int destfightpoint = 0;

    public Transform[] scenepoints; // ////////////////////////////////////////////////
    public GameObject[] target_scene_points;// ////////////////////////////////////////
    private int destscenepoint = 0;// ////////////////////////////////////////////////


    public bool fight = false;
    public bool fightpetrol = false;
    public bool chase = false;
    public bool sceenpetrol = false; // ///////////////////////////////////////////////////

    private int scenepointcount = 0;
    private float scenepointdistance;

    private int fight_con = 0;

    
    private void Start()
    {   
        enimy_nav_mesh_agent.updateRotation = true;
      
        // this is for the enimy petrol code 
        enimy_nav_mesh_agent.autoBraking = false;
        main_player = GameObject.FindWithTag("Player");
        target_position = main_player.GetComponent<Transform>();
        StartCoroutine("start_enimy_movement");
        StartCoroutine("enimy_fighting");
        target_fight_points = GameObject.FindGameObjectsWithTag("p1");
        for(int i = 0;i<target_fight_points.Length;i++)
        {
            fightpoints[i] = target_fight_points[i].gameObject.GetComponent<Transform>();
        }
        destfightpoint = fightpoints.Length;

        /////////////////////////////////////////////
        target_scene_points = GameObject.FindGameObjectsWithTag("p2");
        for(int j = 0; j<target_scene_points.Length;j++)
        {
            scenepoints[j] = target_scene_points[j].gameObject.GetComponent<Transform>();
        }
        destscenepoint = scenepoints.Length;
        /////////////////////////////////////////////
    }

  
    private void Update()
    {
        if (target_position == null)
        {
            return;
        }

        distance = Vector3.Distance(transform.position, target_position.position);
      /*
        if(distance < 10)
        {
            //chase = true;
            //sceenpetrol = false;
        }
        else
        {
           //chase = false;
            //sceenpetrol = true;
        }
        */
        if(distance > 10)
        {
            sceenpetrol = true;
        }
        else
        {
            sceenpetrol = false;
        }
        if(distance < 6 && distance > 3)
        {
            fightpetrol = true;
            //sceenpetrol = false; /////////////////////////////////////////////
        }
        else
        {
            fightpetrol = false;
           // sceenpetrol = true; ///////////////////////////////////////////
        }

        if (distance <= 1.3)
        {
            fight_con = Random.Range(0, 3);
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



    #region common_enimy_movement_controlled_by_the_enimy_Ienumrator_methods
    public void common_enimy_movement(bool fig,/*bool cha,*/bool fpet,bool spet)
    {
       
        if (fig)
        {
            enimy_nav_mesh_agent.updateRotation = false;
            Vector3 tar = new Vector3(target_position.transform.position.x, transform.position.y, target_position.transform.position.z);
            transform.LookAt(tar);
            enimy_nav_mesh_agent.SetDestination(target_position.position); 
        }
        /*
        if(cha)
        {
            enimy_nav_mesh_agent.updateRotation = true;
            enimy_nav_mesh_agent.SetDestination(fightpoints[Random.Range(0, destfightpoint)].position);
        }
        */
        if(fpet)
        {
            if(fightpoints.Length == 0)
            {
                return;
            }
            enimy_nav_mesh_agent.updateRotation = false;
            Vector3 tar = new Vector3(target_position.transform.position.x, transform.position.y, target_position.transform.position.z);
            transform.LookAt(tar);
            enimy_nav_mesh_agent.SetDestination(fightpoints[Random.Range(0, destfightpoint)].position);
        }
        ///////////////////////////////////////////////////////////////////////
        if(spet)
        {
            
            if (scenepoints.Length == 0)
            {
                return;
            }
            enimy_nav_mesh_agent.updateRotation = true;
            //Vector3 tar = new Vector3(target_position.transform.position.x, transform.position.y, target_position.transform.position.z);
            //transform.LookAt(tar);
            enimy_nav_mesh_agent.SetDestination(scenepoints[scenepointcount].position);
            scenepointdistance = Vector3.Distance(transform.position, scenepoints[scenepointcount].position);
            if(scenepointdistance < 10)
            {
                if(scenepointcount >= scenepoints.Length)
                {
                    scenepointcount = 0;
                }
                else
                {
                    scenepointcount++;
                }
            }
            
        }
        /////////////////////////////////////////////////////////////////////
    }

    #endregion

    #region enimy_Ienumerator_methods
    IEnumerator start_enimy_movement()
    {
      
        Vector3 tar = new Vector3(target_position.transform.position.x, transform.position.y, target_position.transform.position.z);
        transform.LookAt(tar);
        yield return new WaitForSeconds(2);
        common_enimy_movement(fight,/*chase,*/fightpetrol,sceenpetrol);
 
        yield return StartCoroutine("start_enimy_movement");
    }


    IEnumerator enimy_fighting()
    {
        yield return new WaitForEndOfFrame();
        if (distance <= enimy_nav_mesh_agent.stoppingDistance)
        {
            enimy_animation_helper_ref.current_attack_time += Time.deltaTime;
            if (enimy_animation_helper_ref.current_attack_time > enimy_animation_helper_ref.default_attack_time)
            {
                enimy_animation_helper_ref.enimy_attack(Random.Range(0, 3));
                enimy_animation_helper_ref.current_attack_time = 0.0f;
            }
        }

        yield return StartCoroutine("enimy_fighting");

    }



    #region enimy stand up  code
    public void STAND_UP_ENIMY_AFTER_TIME()
    {
        StartCoroutine("stand_up_enimy");
    }

    IEnumerator stand_up_enimy()
    {
        yield return new WaitForSeconds(9.0f);
        enimy_animation_helper_ref.PLAY_ENIMY_STAND_UP();
        yield return new WaitForSeconds(1.0f);
        StartCoroutine("start_enimy_movement");
        yield return new WaitForSeconds(1.0f);
        StartCoroutine("enimy_fighting");
        this.transform.gameObject.layer = 11;
    }

    #endregion

    #endregion

    public void stopenimyMovement()
    {

        enimy_animation_helper_ref.PLAY_ENIMY_NOCK_DOWN();
        StopCoroutine("start_enimy_movement");
        StopCoroutine("enimy_fighting");
        transform.gameObject.layer = 0;
    }


}
