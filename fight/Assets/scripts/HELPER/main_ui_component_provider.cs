using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class main_ui_component_provider : MonoBehaviour
{
    [Inject(InjectFrom.Anywhere)]
    public PLAYER_ANIMATION_HELPER player_animation_helper_for_uI_controllers;


    [Inject(InjectFrom.Anywhere)]
    public gamemanager game_manager_ref;

    

}
