using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class game_pause_script : ExtendedCustomMonoBehavior
{
    //private main_ui_component_provider ui_component_provider;

    //public void Start()
    //{
    //    ui_component_provider = gameObject.GetComponentInParent<main_ui_component_provider>();
    //}
    public void pause_toggle_button_clicked()
    {
        
        gamemanager.instance.ispaused = true;
       // gamemanager.instance.base_game_controller_ref.Enable_object_in_hirichery(ui_component_provider.canvas_component_provider.GAME_RESUME_PANAL);


    }

}
