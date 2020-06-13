using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class game_action_swithcer : MonoBehaviour
{
    ///this scrip take cares about the swithching of the game actions 
    [Inject(InjectFrom.Anywhere)]
    public PLAYER_COMPONENT_PROVIDER player_component_access;
    [Inject(InjectFrom.Anywhere)]
    public CANVAS_COMPONENT_PROVIDER canvas_component_access;

   

    public  void FIGHTING_MODE()
    {
        canvas_component_access.FIGHTING_CANVAS.SetActive(true);
    }
    
    public void GUN_MODE()
    {
        switch_gun();
    }

    public void REMOVE_GUN_MODE()
    {
        remove_gun();
    }

    public  void MAGIC_MODE()
    {

    }

    public void BAT_MODE()

    {

    }

    public void SWARD_MODE()
    {

    }
    
    // main logic methods to switch the action mode

    void switch_gun()
    {
        player_component_access.GUN_PLAYER.SetActive(true);
        canvas_component_access.GUN_CANVAS.SetActive(true);
        canvas_component_access.FIGHTING_CANVAS.SetActive(false);
        canvas_component_access.main_ui_script_components.camera_swithc_ui_script_for_gun_ui._enable_fps_mode();
    }

    void remove_gun()
    {
        player_component_access.GUN_PLAYER.SetActive(false);
        canvas_component_access.GUN_CANVAS.SetActive(false);
        canvas_component_access.FIGHTING_CANVAS.SetActive(true);
        canvas_component_access.main_ui_script_components.camera_swithc_ui_script_for_gun_ui._enable_tps_mode();
    }

}
