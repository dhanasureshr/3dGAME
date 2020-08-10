using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player_archary_ui_controller_method : MonoBehaviour
{
    public main_ui_component_provider t;

    public bool aim_arrow_shoot = false;

    
    private void Start()
    {
        t = gameObject.GetComponent<main_ui_component_provider>();
    }

    public void REMOVE_AURCHARY_BUTTON()
    {
        t.game_action_swither_script.REMOVEA_ARCHARY_MODE();
    }

    public void FIRE_ARROW_BUTTON()
    {
        t.bow_controller_animator.PLAY_ARCHARY_PLAYER_FIRE_ARROW();
    }

 
    public void AIM_ARCHARY_BUTTON()
    {
        aim_arrow_shoot = !aim_arrow_shoot;
        if(aim_arrow_shoot)
        {

            t.bow_controller_animator.PLAY_ARCHARY_PLAYER_AIM_IN_VERTICAL_ARROW();
           
        }
        else
        {
           t.bow_controller_animator.PLAY_ARCHARY_PLAYER_AIM_OUT_VERTICAL_ARROW();

        }
    }


    //ROCKET METODS 

    public void REMOVE_ROCKET_BUTTON()
    {
        t.game_action_swither_script.REMOVE_ROCKET_MODE();

    }
    public void FIRE_ROCKET_BUTTON()
    {
        t.rocket_controller_animator.Fire_Rocket();
        t.rocket_controller_animator.PLAY_PLAYER_ROCKET_FIRE_ANIMATION();
    }

}
