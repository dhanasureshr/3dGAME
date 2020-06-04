using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class main_ui_component_provider : MonoBehaviour
{
    [Inject(InjectFrom.Anywhere)]
    public PLAYER_ANIMATION_HELPER player_animation_helper_for_uI_controllers;

    [Inject(InjectFrom.Anywhere)]
    public playermanager player_mangaer_for_dute;

    [Inject(InjectFrom.Anywhere)]
    public gamemanager game_manager_ref;

    [Inject(InjectFrom.Anywhere)]
    public PLAYER_CAMERA_FOLLOW third_person_camera;

    [Inject(InjectFrom.Anywhere)]
    public PLAYER_FPS_CAMERA_FOLLOW first_person_camera;


}
