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

    public bool fight = false;
    public bool fightpetrol = false;
    public bool chase = false;
    private int fight_con = 0;

    public bool should_fight_with_player;
    private bool nock_check_ref;


    #region scene petrol variables

    //  public Transform[] scenepoints; // ////////////////////////////////////////////////
    // public GameObject[] target_scene_points;// ////////////////////////////////////////
    // //private int destscenepoint = 0;// ////////////////////////////////////////////////


    // public bool sceenpetrol = false; // ///////////////////////////////////////////////////

    //private int scenepointcount = 0;
    // private float scenepointdistance;

    #endregion


     
    private void Start()
    {
       
        enimy_nav_mesh_agent.updateRotation = true;
      
        // this is for the enimy petrol code 
        enimy_nav_mesh_agent.autoBraking = false;
        main_player = GameObject.FindWithTag("Player");
        target_position = main_player.GetComponent<Transform>();
        StartCoroutine("start_enimy_movement");
        //StartCoroutine("enimy_fighting");
        target_fight_points = GameObject.FindGameObjectsWithTag("p1");
        for(int i = 0;i<target_fight_points.Length;i++)
        {
            fightpoints[i] = target_fight_points[i].gameObject.GetComponent<Transform>();
        }
        destfightpoint = fightpoints.Length;


        #region sceen petrol initial checks
        /*
        /////////////////////////////////////////////
        target_scene_points = GameObject.FindGameObjectsWithTag("p2");
        for(int j = 0; j<target_scene_points.Length;j++)
        {
            scenepoints[j] = target_scene_points[j].gameObject.GetComponent<Transform>();
        }
        destscenepoint = scenepoints.Length;
        /////////////////////////////////////////////
        ///*/
        ///

        #endregion
    }

    #region update

    private void Update()
    {
        nock_check_ref = transform.gameObject.GetComponent<health>().nock_check;
        if (target_position == null)
        {
            return;
        }

        distance = Vector3.Distance(transform.position, target_position.position);
      
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
            fightpetrol = true;
          
        }
        else
        {
            fightpetrol = false;
          
        }

        //this is for the fighting movement controller check 
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
      
        if(distance <= enimy_nav_mesh_agent.stoppingDistance && !nock_check_ref)
        {
            should_fight_with_player = true;
        }
        else
        {
            should_fight_with_player = false;
        }

        if(should_fight_with_player)
        {
            Fight_with_player_method();
        }
        


    }
    #endregion

    #region enimy fighting method
    public void Fight_with_player_method()
    {
        enimy_animation_helper_ref.current_attack_time += Time.deltaTime;
        if (enimy_animation_helper_ref.current_attack_time > enimy_animation_helper_ref.default_attack_time)
        {
            enimy_animation_helper_ref.enimy_attack(Random.Range(0, 3));
            enimy_animation_helper_ref.current_attack_time = 0.0f;
        }
    }
    #endregion


    #region common_enimy_movement_controlled_by_the_enimy_Ienumrator_methods
    public void common_enimy_movement(bool fig,bool cha,bool fpet)
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
            enimy_nav_mesh_agent.SetDestination(fightpoints[Random.Range(0, destfightpoint)].position);
        }
        
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

        #region scene petrol actual code
        /*
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
                 if(scenepointcount == scenepoints.Length)
                 {
                     scenepointcount = 0;
                 }


                 scenepointcount = Random.Range(0, scenepoints.Length);

             }

         }
         /////////////////////////////////////////////////////////////////////
         ///
         */
        #endregion
    }

    #endregion

    #region enimy_Ienumerator_methods

    #region enimy Movement method
    IEnumerator start_enimy_movement()
    {
      
        Vector3 tar = new Vector3(target_position.transform.position.x, transform.position.y, target_position.transform.position.z);
        transform.LookAt(tar);
        yield return new WaitForSeconds(2);
        common_enimy_movement(fight,chase,fightpetrol);
 
        yield return StartCoroutine("start_enimy_movement");
    }
    #endregion

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
        yield return new WaitForSeconds(5.0f);
       // StartCoroutine("enimy_fighting");
        transform.gameObject.layer = 11;
        transform.gameObject.GetComponent<health>().nock_check = false;
        if (distance <= enimy_nav_mesh_agent.stoppingDistance)
        {
            should_fight_with_player = true;
        }
        yield break;
    }

    #endregion

    #endregion

    #region stop enimy movement code
    public void stopenimyMovement()
    {
        should_fight_with_player = false;
        transform.gameObject.layer = 0;
        enimy_animation_helper_ref.PLAY_ENIMY_NOCK_DOWN();
        StopCoroutine("start_enimy_movement");
    }

    #endregion

}
