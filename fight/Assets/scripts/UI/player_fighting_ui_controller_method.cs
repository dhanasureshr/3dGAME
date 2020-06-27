using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class player_fighting_ui_controller_method : MonoBehaviour
{
    // Start is called before the first frame update
    //[Inject(InjectFrom.Anywhere)]
    //public PLAYER_ANIMATION_HELPER player_animation_helper_for_uI_controllers;

    public main_ui_component_provider t;

    
    #region fingting_animation_botton_ui_controll_methods

    private void Start()
    {
        t = gameObject.GetComponentInParent<main_ui_component_provider>();
    }
    public void OnPunchButtonPressed()
    {
        t.player_animation_helper_for_uI_controllers.PUNCH1_BUTTON_PRESSED();
    }

    public void OnKickButtonPressed()
    {
        t.player_animation_helper_for_uI_controllers.KICK_BUTTON_PRESSED();
    }


    public void On_Dute_Animation()
    {
        t.player_mangaer_for_dute.PLAY_DUTE_ANIMATIONS1();

    }

    public void On_shield_button_pressed()
    {
        t.player_animation_helper_for_uI_controllers.SHIELD_BUTTON_PRESSED();
    }
   


    #endregion

}
