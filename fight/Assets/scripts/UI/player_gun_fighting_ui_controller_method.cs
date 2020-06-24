using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class player_gun_fighting_ui_controller_method : MonoBehaviour
{

    public main_ui_component_provider t;

    private Toggle aim_toggle_button;

    [Inject(InjectFrom.Anywhere)]
    public game_action_swithcer game_action_swither_script;

    [HideInInspector] public bool aim_fire = false;
    private void Start()
    {
        t = gameObject.GetComponentInParent<main_ui_component_provider>();
        if(gameObject.name =="aim")
        {
            aim_toggle_button = gameObject.GetComponent<Toggle>();
        }
    }


    public void REMOVE_GUN_MODE_BUTTON()
    {
        //  t.camera_swithc_ui_script_for_gun_ui.Remove_gun_mode();
        game_action_swither_script.REMOVE_GUN_MODE();
        game_action_swither_script.FIGHTING_MODE();
      
    }

    public void FIRE_RIFIL_BUTTON()
    {

        if (!t.gun_script.OutOfAmmo)
        {
            t.player_gun_animation_script.PLAY_GUN_PLAYER_FIRE_RIFIL();
            t.gun_script.fire();
        }

    }

    public void RELOAD_RIFIL_BUTTON()
    {
        t.gun_script.Ammo = 0;
        t.player_gun_animation_script.PLAY_GUN_PLAYER_RELOAD_RIFIL();
        StartCoroutine(Reload_after_delay_to_complet_reload_animation());
    }

    IEnumerator Reload_after_delay_to_complet_reload_animation()
    {
        yield return new WaitForSeconds(3.01f);
        t.gun_script.Ammo = 90;
        yield break;
    }
    public void AIM_RIFIL_BUTTON()
    {
       
        aim_fire = !aim_fire;

        if(aim_fire)
        {
            t.player_gun_animation_script.PLAY_GUN_PLAYER_AIM_IN_RIFIL();
        }
        else
        {
            t.player_gun_animation_script.PLAY_GUN_PLAYER_AIM_OUT_RIFIL();
        }

    }
}
