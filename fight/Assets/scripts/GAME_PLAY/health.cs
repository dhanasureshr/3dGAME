using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
///  this is the common health scirpt for both player and enimys
///  the script is logically divided for both of them at run time
///  
/// 
/// </summary>
public class health : ExtendedCustomMonoBehavior
{

    public float character_health = 100.0f;
    private playermanager player_manager_ref;
   // private enimy_manager enimy_manager_ref;
    public baseusermanager baseusemanager_for_common_calculation;
    public enimy_movement enimy_movement_ref_for_enimyanimations;
    private bool characted_died;
    public bool is_player;

    public void Start()
    {
        enimy_movement_ref_for_enimyanimations = GetComponentInParent<enimy_movement>();
        if(is_player)
        {
            player_manager_ref = GetComponent<playermanager>();
            baseusemanager_for_common_calculation = gameObject.GetComponentInParent<baseusermanager>();

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
                Debug.Log("playr_died");
            }
            return;

        }

        if(!is_player)
        {
            if(KnockDown)
            {
                if(Random.Range(0,3)>1)
                {
                    //playnockdon
                    enimy_movement_ref_for_enimyanimations.stopenimyMovement();
                }
            }else
            {
               // if(Random.Range(0,3)>1)
               // {
                    //play hit
                    enimy_movement_ref_for_enimyanimations.enimy_animation_helper_ref.PLAY_ENIMY_GET_HIT();
               // }
            }
        }
    }
}
