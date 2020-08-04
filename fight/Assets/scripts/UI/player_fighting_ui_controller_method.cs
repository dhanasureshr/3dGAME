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

    #region fighting ui methods
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
        t.player_animation_helper_for_uI_controllers.FIGHTING_SHIELD_BUTTON_PRESSED();
    }

    #endregion

    #region sword ui methods
    public void On_Sword_Splash_Button_Pressed()
    {
        t.player_animation_helper_for_uI_controllers.SWARD_BUTTON1_PRESSED();
    }

    public void On_Sword_Attack_Button_Pressed()
    {
        t.player_animation_helper_for_uI_controllers.SWARD_BUTTON2_PRESSED();
    }


    public void Remove_Sword_Mode_Button_Pressed()
    {
        t.game_action_swither_script.REMOVE_SWARD_MODE();
        t.player_mangaer_for_dute.SWORD_MODE = false;
    }

    public void On_Sword_Casting_Button_Pressed()
    {
        t.player_animation_helper_for_uI_controllers.PLAY_PLAYER_SWORD_CASTING_ANIMATION();

    }

    #endregion

    #region magic ui methods

    public void On_Magic_Button1_Pressed()
    {
        t.player_animation_helper_for_uI_controllers.MAGIC_BUTTON1_PRESSED();
    }

    public void On_Magic_Button2_pressed()
    {
        t.player_animation_helper_for_uI_controllers.MAGIC_BUTTON2_PRESSED();
    }

    public void On_Magic_Area_Button_Pressed()
    {
        t.player_animation_helper_for_uI_controllers.PLAY_PLAYER_MAGIC_AREA_ANIMATIONS(Random.Range(0, 2));
    }
    public void Remov_magic_mode_Button_Pressed()
    {
        t.game_action_swither_script.REMOVE_MAGIC_MODE();
        t.player_mangaer_for_dute.MAGIC_MODE = false;
    }
    #endregion
    #endregion

    
}
