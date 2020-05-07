using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player_fighting_ui_controller_method : MonoBehaviour
{
    // Start is called before the first frame update
    [Inject(InjectFrom.Anywhere)]
    public PLAYER_ANIMATION_HELPER player_animation_helper_for_uI_controllers;

    #region fingting_animation_botton_ui_controll_methods
    public void OnPunchButtonPressed()
    {
        player_animation_helper_for_uI_controllers.PUNCH1_BUTTON_PRESSED();
    }

    public void OnKickButtonPressed()
    {
        player_animation_helper_for_uI_controllers.KICK_BUTTON_PRESSED();
    }
    #endregion
}
