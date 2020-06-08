using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;

public class enimy_manager :ExtendedCustomMonoBehavior
{
    /// <summary>
    /// This is the enimy manager script which take cares about 
    /// supplying required data to the enimy costomisible scripts 
    /// SOME OF THE CUSTOMISIBLE SCRIPTS ARE:-----------------------
    /// -----------------------------------------------------------------------------------------------------------------------------------------------
    /// ===============================================================================================================================================
    /// 1) Enimy_movement.cs // this take cares about the movement of the enimy
    /// 2) Enimy_animation_helper.cs // this take cares about the animating the enimy and to apply fighting method that can be sward,bat,fight,fire,etc;
    /// 3) Health.cs // this take cares about damaging the player 
    /// 4) Baseusersmanager.cs // this take cares about the modifing of the enimy data at run time
    /// ================================================================================================================================================
    /// ------------------------------------------------------------------------------------------------------------------------------------------------
    /// </summary>
   

    #region enimy variables
    public enimy_common_data enimy_properties;

    public enimy_movement E__manager_ref_enimy_movement;

    public enimy_animation_helper E__manager_ref_enimy_animation_helper;

    public health E__manager_ref_health;

    public baseusermanager E__manger_ref_baseusermanager;

    public NavMeshAgent E__manager_ref_NavMeshAgent;

    public Renderer E__manager_ref_Enimy_Renderer;

    #endregion

    #region enimy_ui_variables
    //private Image enimy_health_bar_image_ref;

    [Inject(InjectFrom.Anywhere)]
    public basegamecontroller base_game_controller_to_provide_asserts;

    
    public GameObject enimy_component_from_current_scene;
    [HideInInspector] public ENIMY_COMPONENT_PROVIDER enimy_component_provider;
    [HideInInspector] public Emimy_instantiator enimy_instantiator_from_enimy_component_provider;
    #endregion



    #region Enimy main controllers initilizer
    private void Start()
    {
        enimy_component_from_current_scene = GameObject.FindWithTag(tags.enimy_component_provider_tag);// game object
        enimy_component_provider = enimy_component_from_current_scene.GetComponent<ENIMY_COMPONENT_PROVIDER>();//script
        enimy_instantiator_from_enimy_component_provider = enimy_component_provider.enimy_instantiator;//variable access from above script


        base_game_controller_to_provide_asserts = gamemanager.instance.GetComponent<basegamecontroller>();


        E__manager_ref_enimy_movement = gameObject.GetComponent<enimy_movement>();

        E__manager_ref_enimy_animation_helper = gameObject.GetComponent<enimy_animation_helper>();

        E__manager_ref_health = gameObject.GetComponent<health>();

        E__manger_ref_baseusermanager = gameObject.GetComponent<baseusermanager>();

        E__manager_ref_NavMeshAgent = gameObject.GetComponent<NavMeshAgent>();



        //i hava stored the enimy renderer to play the enimy animations if enimy render is visible then enimy aimations will play
        // else not 
        E__manager_ref_Enimy_Renderer = gameObject.GetComponentInChildren<SkinnedMeshRenderer>();
        #region Enimy static properties setter
        E__manager_ref_enimy_animation_helper.enimy_rendrer = E__manager_ref_Enimy_Renderer;
        #endregion

       
    }

    #endregion

    #region ENIMY HEALTH BAR CODE
    public void Display_enimy_health(float health_value)
    {

        //base_game_controller_to_provide_asserts.ui_prefabs_provider.E_health_bar_image.fillAmount = health_value;
        enimy_component_provider.E_health_bar_image.fillAmount = health_value;
       
    }

    public void disable_enimy_health_bar()
    {
        enimy_component_provider.Enimy_health_bar_Game_object.SetActive(false);
    }

    public void enable_enimy_health_bar()
    {
        enimy_component_provider.Enimy_health_bar_Game_object.SetActive(true);
    }

    #endregion

    private void Update()
    {
        if (enimy_properties.NEAR_ATTACKER)
        {
            E__manager_ref_enimy_animation_helper.enimy_animator_ref.runtimeAnimatorController = enimy_properties.R_A__CONTROLLERS_ENIMY[0];

        }

        if(enimy_properties.FAR_ATTACKER)
        {
            if(E__manager_ref_enimy_movement.distance < E__manager_ref_enimy_movement.enimy_nav_mesh_agent.stoppingDistance)
            {
                E__manager_ref_enimy_animation_helper.enimy_animator_ref.runtimeAnimatorController = enimy_properties.R_A__CONTROLLERS_ENIMY[0];
            }
            else
            {
                E__manager_ref_enimy_animation_helper.enimy_animator_ref.runtimeAnimatorController = enimy_properties.R_A__CONTROLLERS_ENIMY[1];
            }
        }
    }
}
