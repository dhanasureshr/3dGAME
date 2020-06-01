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
    public basegamecontroller base_game_controller_to_get_enimy_health_bar;

    #endregion



    #region Enimy main controllers initilizer
    private void Start()
    {

        E__manager_ref_enimy_movement = gameObject.GetComponent<enimy_movement>();

        E__manager_ref_enimy_animation_helper = gameObject.GetComponent<enimy_animation_helper>();

        E__manager_ref_health = gameObject.GetComponent<health>();

        E__manger_ref_baseusermanager = gameObject.GetComponent<baseusermanager>();

        E__manager_ref_NavMeshAgent = gameObject.GetComponent<NavMeshAgent>();

        E__manager_ref_Enimy_Renderer = gameObject.GetComponentInChildren<SkinnedMeshRenderer>();

        #region Enimy static properties setter
        E__manager_ref_enimy_animation_helper.enimy_rendrer = E__manager_ref_Enimy_Renderer;
        #endregion

    }

    #endregion

    public void Display_enimy_health(float health_value)
    {

        base_game_controller_to_get_enimy_health_bar.ui_prefabs_provider.E_health_bar_image.fillAmount = health_value;
       
    }

    private void Update()
    {
        if (enimy_properties.NEAR_ATTACKER)
        {
            E__manager_ref_enimy_animation_helper.enimy_animator_ref.runtimeAnimatorController = enimy_properties.R_A__CONTROLLERS_ENIMY[0];

        }

        if(enimy_properties.FAR_ATTACKER)
        {
            if(E__manager_ref_enimy_movement.distance <E__manager_ref_enimy_movement.enimy_nav_mesh_agent.stoppingDistance)
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
