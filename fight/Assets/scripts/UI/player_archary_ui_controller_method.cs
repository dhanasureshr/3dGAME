using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player_archary_ui_controller_method : MonoBehaviour
{
    public main_ui_component_provider t;

    public bool aim_arrow_shoot = false;

    [Inject(InjectFrom.Anywhere)]
    public game_action_swithcer game_action_swither_script;

    private void Start()
    {
        t = gameObject.GetComponentInParent<main_ui_component_provider>();
    }

    public void REMOVE_AURCHARY_BUTTON()
    {
        game_action_swither_script.REMOVEA_ARCHARY_MODE();
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
}
