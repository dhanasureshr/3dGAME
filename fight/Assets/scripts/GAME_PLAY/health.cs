using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
///  this is the common health scirpt for both player and enimys
///  the script is logically divided for both of them at run time
///  
/// 
/// </summary>
public class health : ExtendedCustomMonoBehavior,IListener
{


    [TextArea]
    public string objd = "THIS SCRIPT IS COMMON FOR BOTH ENIMY AND PLAYER SO NEVER CHANGE DATA EXTERNALLY";
   
    [Inject(InjectFrom.Anywhere)]
    public basegamecontroller base_game_controller_to_intimate_game_state;

    public float character_health =0.0f;
    private playermanager player_manager_ref;
    private enimy_manager enimy_manger_ref;
   // private enimy_manager enimy_manager_ref;
    public baseusermanager baseusemanager_for_common_calculation;
    public enimy_movement enimy_movement_ref_for_enimyanimations;
    private bool characted_died;
    public bool is_player;

    public bool disable_enimy_Rotation_collider; // this variable is accessed by the playermanager to determine whether to enable or disable the player rotation constraint so be care full suresh :-)
    public bool nock_check;
    public void Start()
    {
        
       // enimy_movement_ref_for_enimyanimations = GetComponentInParent<enimy_movement>();
        if(is_player) // if this script attatched to the player
        {
            player_manager_ref = GetComponent<playermanager>();
            baseusemanager_for_common_calculation = gameObject.GetComponentInParent<baseusermanager>();
            event_manager.Instance.AddListener(EVENT_TYPE.PLAYER_DEAD, this);

        }
        else // if this script attatched to the enimy
        {
            enimy_manger_ref = GetComponent<enimy_manager>();
            baseusemanager_for_common_calculation = enimy_manger_ref.E__manger_ref_baseusermanager;
            enimy_movement_ref_for_enimyanimations = enimy_manger_ref.E__manager_ref_enimy_movement;
            base_game_controller_to_intimate_game_state = enimy_manger_ref.base_game_controller_to_provide_asserts;///changed

        }
    }
    
    public void ApplyDamage(float damage,bool KnockDown)
    {
        
        if(characted_died)
        {
            return;
        }

        baseusemanager_for_common_calculation.ReduceHealth(damage);

        character_health = baseusemanager_for_common_calculation.GetHealth();

        //player health ui displayer code
        if (is_player)
        {
            player_manager_ref.Display_player_health(character_health);
        }

        if(!is_player)
        {
            enimy_manger_ref.enable_enimy_health_bar();
            enimy_manger_ref.Display_enimy_health(character_health);
        }
        else
        {
            //enimy_manger_ref.disable_enimy_health_bar();
        }
        if (character_health <= 0.0f)
        {
           
            characted_died = true;
            // enimy death code
            if (!is_player)
            {
                //enimy_manger_ref.E__manager_ref_enimy_movement.SetLayerRecursively(gameObject, 0); // removes the collision layer
                
                gameObject.tag = tags.un_tag;
                disable_enimy_Rotation_collider = true;
                enimy_manger_ref.disable_enimy_health_bar();////////////////////////
                enimy_movement_ref_for_enimyanimations.stopenimy_movement_for_death();
               
                base_game_controller_to_intimate_game_state.player_supplyers_spanner(gameObject.transform);
              
                enimy_manger_ref.enimy_instantiator_from_enimy_component_provider.cloned_enimy_list.Remove(gameObject);// removed the died enimy from the cloned_enimy_list
                Destroy(gameObject, 10.0f);

            }
            else // player death code
            {
                disable_enimy_Rotation_collider = false;
            }

            if (is_player)
            {
                // deactivate the enimy movement scripts

                event_manager.Instance.PostNotification(EVENT_TYPE.PLAYER_DEAD, this);
            }
            return;

        }

        if(!is_player)
        {
            if(KnockDown)
            {
                enimy_movement_ref_for_enimyanimations.stopenimyMovement();
                enimy_manger_ref.disable_enimy_health_bar();
                enimy_movement_ref_for_enimyanimations.enimy_animation_helper_ref.disable_enimy_get_hit_animation();

            }else
            {
                enimy_movement_ref_for_enimyanimations.enimy_animation_helper_ref.ENIMY_HIT_REACTION(Random.Range(0, 3));  
            }
        }
    }

    public void OnEvent(EVENT_TYPE Event_Type, Component Sender, object Param = null)
    {
        switch(Event_Type)
        {
            case EVENT_TYPE.PLAYER_DEAD:
                base_game_controller_to_intimate_game_state.PlayerLostLife_Handler_Method();
                break;
        }
    }

    
}
