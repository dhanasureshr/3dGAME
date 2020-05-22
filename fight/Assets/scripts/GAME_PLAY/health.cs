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
    [Inject(InjectFrom.Anywhere)]
    public basegamecontroller base_game_controller_to_intimate_game_state;

    public float character_health =0.0f;
    private playermanager player_manager_ref;
   // private enimy_manager enimy_manager_ref;
    public baseusermanager baseusemanager_for_common_calculation;
    public enimy_movement enimy_movement_ref_for_enimyanimations;
    private bool characted_died;
    public bool is_player;

    public bool nock_check;
    public void Start()
    {
        enimy_movement_ref_for_enimyanimations = GetComponentInParent<enimy_movement>();
        if(is_player)
        {
            player_manager_ref = GetComponent<playermanager>();
            baseusemanager_for_common_calculation = gameObject.GetComponentInParent<baseusermanager>();
            event_manager.Instance.AddListener(EVENT_TYPE.PLAYER_DEAD, this);

        }
        else
        {
            //enimy_manager_ref = GetComponent<enimy_manager>();
            baseusemanager_for_common_calculation = gameObject.GetComponent<baseusermanager>();

        }
    }
    
    public void ApplyDamage(float damage,bool KnockDown)
    {
        
        if(characted_died)
        {
            if(!is_player)
            {
                enimy_movement_ref_for_enimyanimations.stopenimyMovement();
                enimy_movement_ref_for_enimyanimations.enimy_animation_helper_ref.PLAY_ENIMY_DEATH();                
                Destroy(gameObject, 10.0f);
            }
            return;
        }

        baseusemanager_for_common_calculation.ReduceHealth(damage);

        character_health = baseusemanager_for_common_calculation.GetHealth();

        //player health ui displayer code
        if(is_player)
            player_manager_ref.Display_player_health(character_health);
        
        if (character_health <= 0.0f)
        {
           
            characted_died = true;

            if(is_player)
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
                //transform.gameObject.layer = 0;
                
                    //playnockdon
                    enimy_movement_ref_for_enimyanimations.stopenimyMovement();

                    nock_check = true;
            }else
            {
                    nock_check = false;
                    enimy_movement_ref_for_enimyanimations.enimy_animation_helper_ref.PLAY_ENIMY_GET_HIT();
               
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
