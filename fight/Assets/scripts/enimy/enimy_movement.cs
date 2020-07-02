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

  //  [Inject(InjectFrom.Anywhere)]
    public basegamecontroller base_game_controller_to_provide_assets;

  
    

    [TextArea]
    public string objd = "this should be attatched to the enimy parent where enimy animator and nav_mesh_agent";
    #region Enimy_properties
    private float fighting_petrol_distance_ref;
    private float chase_distance_ref;
    private float scene_petrol_distance_ref;
    private float attack_distance_ref;
    private enimy_manager eimy_manager_ref_for_enimy_properties;

    private float stoping_distance_ref;
    private bool near_attacker_ref;
    private bool far_attacker_ref;
    #endregion


    #region this are the variables for the enimy movement

    [HideInInspector] public NavMeshAgent enimy_nav_mesh_agent;
    [HideInInspector] public enimy_animation_helper enimy_animation_helper_ref;

    private Vector3 tar;

    [HideInInspector]public Transform target_position;
    [HideInInspector]public GameObject main_player;
    [HideInInspector]public float max_distance;
    [HideInInspector] public float distance;
    public bool fight = false;
    public bool chase = false;
    public bool should_fight_with_player;
    private int fight_con = 0;
    private Transform chi;
    private bool nock_check_ref;
    #endregion

    #region fight petrol variables
    public Transform[] fightpoints;///  /////////////////////////////////// changed to private
    public GameObject[] target_fight_points; /// //////////////////////////chanaged to private
    public bool fightpetrol = false;
    private int destfightpoint = 0;
    #endregion

    #region scene petrol variables

    public Transform[] scenepoints;
    public GameObject[] target_scene_points;
    private int destscenepoint = 0;
    public bool sceenpetrol = false; 
    private int scenepointcount = 0;
    private float scenepointdistance;

    #endregion

    

    private void Start()
    {
        #region Enimy_properties_initlizer


        
        eimy_manager_ref_for_enimy_properties = gameObject.GetComponent<enimy_manager>();
        
        base_game_controller_to_provide_assets = gamemanager.instance.GetComponent<basegamecontroller>();


        enimy_nav_mesh_agent = eimy_manager_ref_for_enimy_properties.E__manager_ref_NavMeshAgent;
        enimy_animation_helper_ref = eimy_manager_ref_for_enimy_properties.E__manager_ref_enimy_animation_helper;

        fighting_petrol_distance_ref = eimy_manager_ref_for_enimy_properties.enimy_properties.FIGHTING_PETROL_DISTANCE;

        chase_distance_ref = eimy_manager_ref_for_enimy_properties.enimy_properties.CHASE_DISTANCE;
        scene_petrol_distance_ref = eimy_manager_ref_for_enimy_properties.enimy_properties.SENEPETROL_DISTANCE;
        attack_distance_ref = eimy_manager_ref_for_enimy_properties.enimy_properties.ATTACK_DISTANCE;

        stoping_distance_ref = eimy_manager_ref_for_enimy_properties.enimy_properties.STOPING_DISTANCE_REF;


        near_attacker_ref = eimy_manager_ref_for_enimy_properties.enimy_properties.NEAR_ATTACKER;
        far_attacker_ref = eimy_manager_ref_for_enimy_properties.enimy_properties.FAR_ATTACKER;

        
        #endregion


        #region this is the enimy common code 
        enimy_nav_mesh_agent.updateRotation = true;
        enimy_nav_mesh_agent.autoBraking = false;
        main_player = GameObject.FindWithTag("Player"); ////////////////////////////////////// this should be done
        target_position = main_player.GetComponent<Transform>();
        StartCoroutine("start_enimy_movement");
        #endregion

        #region fight petrol initial checks
      
        target_fight_points = eimy_manager_ref_for_enimy_properties.enimy_component_provider.Current_fighting_petrol_points;
        for(int i = 0;i<target_fight_points.Length;i++)
        {
            fightpoints[i] = target_fight_points[i].gameObject.GetComponent<Transform>();
        }
        destfightpoint = fightpoints.Length;

        #endregion

        #region sceen petrol initial checks

        target_scene_points = eimy_manager_ref_for_enimy_properties.enimy_component_provider.Current_scene_petorl_points;
        for (int j = 0; j < target_scene_points.Length; j++)
        {
            scenepoints[j] = target_scene_points[j].gameObject.GetComponent<Transform>();
        }
        destscenepoint = scenepoints.Length;
       
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
       
        #region OLD VERSION CODE FOR ENIMY AI DEDEKATED TO BASE ENIMY
        //if (enimy_nav_mesh_agent.enabled == true)
        //{
        //    if (distance >= 25)
        //    {
        //        sceenpetrol = true;
        //    }
        //    else
        //    {
        //        sceenpetrol = false;
        //    }

        //    if (distance > 6 && distance < 25)
        //    {
        //        chase = true;

        //    }
        //    else
        //    {
        //        chase = false;

        //    }




        //    if (distance > 3 && distance < 6)
        //    {
        //        fightpetrol = true;

        //    }
        //    else
        //    {
        //        fightpetrol = false;

        //    }

        //    //this is for the fighting movement controller check 
        //    if (distance <= 1.3)
        //    {
        //       // if (!nock_check_ref)
        //       // {
        //            fight_con = Random.Range(0, 3);
        //            if (fight_con == 0 || fight_con == 1)
        //            {
        //                fight = true;

        //            }
        //            else
        //            {
        //                fight = false;


        //            }
        //       // }

        //    }else
        //    {
        //        fight = false;
        //    }

        //    if (distance <= enimy_nav_mesh_agent.stoppingDistance && !nock_check_ref)
        //    {
        //        should_fight_with_player = true;
        //    }
        //    else
        //    {
        //        should_fight_with_player = false;
        //    }

        //    if (should_fight_with_player)
        //    {
        //        Fight_with_player_method();
        //    }


        //}//end of movement conditions checking
        #endregion

        #region UPDATED CODE VERSION FOR ENIMY AI DEDEKATED TO BASE ENIMY

        if (enimy_nav_mesh_agent.enabled == true)
        {
            enimy_nav_mesh_agent.stoppingDistance = stoping_distance_ref;

            #region NEAR_ATTACKER MOVEMENT CONDITIONS
            if (near_attacker_ref)
            {
                if (distance >= scene_petrol_distance_ref)
                {
                    sceenpetrol = true;
                    enimy_nav_mesh_agent.speed = 3.0f;
                }
                else
                {
                    sceenpetrol = false;
                }

                if (distance > chase_distance_ref && distance < scene_petrol_distance_ref)
                {
                    chase = true;
                    enimy_nav_mesh_agent.speed = 2.5f;
                }
                else
                {
                    chase = false;

                }

                if (distance > fighting_petrol_distance_ref && distance < chase_distance_ref)
                {
                    fightpetrol = true;
                    enimy_nav_mesh_agent.speed = 2.0f;
                }
                else
                {
                    fightpetrol = false;

                }


                //this is for the fighting movement controller check 
                if (distance <= attack_distance_ref)
                {
                    fight_con = Random.Range(0, 3);
                    if (fight_con == 0 || fight_con == 1)
                    {
                        fight = true;
                        enimy_nav_mesh_agent.speed = 1.5f;
                    }
                    else
                    {
                        fight = false;


                    }
                }
                else
                {
                    fight = false;
                }

                if (distance <= enimy_nav_mesh_agent.stoppingDistance && !nock_check_ref)
                {
                    should_fight_with_player = true;
                    Vector3 tar = new Vector3(target_position.transform.position.x, transform.position.y, target_position.transform.position.z);
                    transform.LookAt(tar);
                }
                else
                {
                    should_fight_with_player = false;
                }

                if (should_fight_with_player)
                {
                    Fight_with_player_method();
                }

            }
            #endregion

            #region FAR_ATTACKER MOVEMENT CONDITIONS
            if (far_attacker_ref)
            {
                if (distance > chase_distance_ref)
                {
                    fight = true;

                }
                else
                {
                    fight  = false;

                }
                
                if (distance <= attack_distance_ref && !nock_check_ref)
                {
                    should_fight_with_player = true;
                    Vector3 tar = new Vector3(target_position.transform.position.x, transform.position.y, target_position.transform.position.z);
                    transform.LookAt(tar);
                   
                }
                else
                {
                    should_fight_with_player = false;
                }

                if (should_fight_with_player)
                {
                    Fight_with_player_method();
                }

            }
            #endregion

        }//end of movement conditions checking

        #endregion

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


    #region common_enimy_movement_controlled_by_the_enimy_Ienumrator_methods  NEAR_ATTACKER
    public void common_enimy_movement(bool fig,bool cha,bool fpet,bool spet)
    {
        if (enimy_nav_mesh_agent.enabled == true)
        {
            if (fig)
            {
                enimy_nav_mesh_agent.updateRotation = false;
               // tar = new Vector3(target_position.transform.position.x, transform.position.y, target_position.transform.position.z);
                tar = target_position.position;
                transform.LookAt(tar);
                enimy_nav_mesh_agent.SetDestination(target_position.position);
            }

            if (cha)
            {
                enimy_nav_mesh_agent.updateRotation = true;
                enimy_nav_mesh_agent.SetDestination(fightpoints[Random.Range(0, destfightpoint)].position);
              
            }

            if (fpet)
            {
                if (fightpoints.Length == 0)
                {
                    return;
                }
                enimy_nav_mesh_agent.updateRotation = false;
                // tar = new Vector3(target_position.transform.position.x, transform.position.y, target_position.transform.position.z);
                tar = target_position.position;
                transform.LookAt(tar);
                enimy_nav_mesh_agent.SetDestination(fightpoints[Random.Range(0, destfightpoint)].position);
            }

            #region scene petrol actual code

            ///////////////////////////////////////////////////////////////////////
            if (spet)
            {

                if (scenepoints.Length == 0)
                {
                    return;
                }
                //  enimy_nav_mesh_agent.updateRotation = true;
                enimy_nav_mesh_agent.SetDestination(scenepoints[scenepointcount].position);
                scenepointdistance = Vector3.Distance(transform.position, scenepoints[scenepointcount].position);
                if (scenepointdistance < 10)
                {
                    if (scenepointcount == scenepoints.Length)
                    {
                        scenepointcount = 0;
                    }


                    scenepointcount = Random.Range(0, scenepoints.Length);

                }

            }
            /////////////////////////////////////////////////////////////////////
            ///
        }
        #endregion
    }

    #endregion

    #region common_enimy_movement_contolled_by_the_enimy_Ienmrator_methods FAR_ATTACKER
    public void common_enimy_movement_far_attacker(bool fig)
    {
        if(enimy_nav_mesh_agent.enabled == true)
        {
            if(fig)
            {
                
                enimy_nav_mesh_agent.updateRotation = false;
                Vector3 tar = new Vector3(target_position.transform.position.x, transform.position.y, target_position.transform.position.z);
                transform.LookAt(tar);
                enimy_nav_mesh_agent.SetDestination(fightpoints[Random.Range(0, destfightpoint)].position);
                
            }
        }
    }
    #endregion

    #region enimy_Ienumerator_methods

    #region enimy Movement method
    IEnumerator start_enimy_movement()
    {

        // Vector3 tar = new Vector3(target_position.transform.position.x, transform.position.y, target_position.transform.position.z);
        //  transform.LookAt(tar);
        if (enimy_nav_mesh_agent.enabled == true)
        {
            yield return new WaitForSeconds(2);
            if (near_attacker_ref)
            {
                common_enimy_movement(fight, chase, fightpetrol, sceenpetrol);
            }

            if(far_attacker_ref)
            {
                common_enimy_movement_far_attacker(fight);
            }
            yield return StartCoroutine("start_enimy_movement");
        }
        else
        {
            yield break;
        }
    }
    #endregion

    #region enimy stand up  code
    public void STAND_UP_ENIMY_AFTER_TIME()
    {
        
        StartCoroutine("stand_up_enimy");
      
    }

    IEnumerator stand_up_enimy()
    {
       // transform.gameObject.GetComponent<Animator>().enabled = true;
        yield return new WaitForSeconds(9.0f);
        enimy_animation_helper_ref.PLAY_ENIMY_STAND_UP();
        yield return new WaitForSeconds(1.0f);
        enimy_nav_mesh_agent.enabled = true;
        StartCoroutine("start_enimy_movement");
        yield return new WaitForSeconds(5.0f);
        //transform.gameObject.layer = 11;
        SetLayerRecursively(transform.gameObject, 11);
        ///////////////////////////transform.gameObject.GetComponent<health>().nock_check = false;
        ////////transform.gameObject.GetComponent<health>().disable_enimy_Rotation_collider = false;
        transform.gameObject.GetComponent<enimy_animation_helper>().enable_enimy_get_hit_animation();
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
        SetLayerRecursively(transform.gameObject, 0);
        enimy_animation_helper_ref.PLAY_ENIMY_NOCK_DOWN();
        enimy_nav_mesh_agent.enabled = false;
        StopCoroutine("start_enimy_movement");
    }

    public void stop()
    {
        should_fight_with_player = false;
        SetLayerRecursively(transform.gameObject, 0);
        enimy_nav_mesh_agent.enabled = false;
        transform.gameObject.GetComponent<health>().nock_check = true ;
        StopCoroutine("start_enimy_movement");
    }

    public void stopenimy_movement_for_death()
    {
        should_fight_with_player = false;
        SetLayerRecursively(transform.gameObject, 0);
        transform.gameObject.GetComponent<Animator>().enabled = false;
        enimy_nav_mesh_agent.enabled = false;
    }



    public void SetLayerRecursively(GameObject go, int layerNumber)
    {
        foreach (Transform trans in go.GetComponentsInChildren<Transform>(true))
        {
            
            trans.gameObject.layer = layerNumber;
        }
    }




    public void SettagRecursively(GameObject go, string tagNumber)
    {
        foreach (Transform trans in go.GetComponentsInChildren<Transform>(true))
        {

            trans.gameObject.tag  = tagNumber;
        }
    }



    #endregion

}
