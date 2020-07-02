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
    public PLAYER_CAMERA_FOLLOW third_person_camera;

    [Inject(InjectFrom.Anywhere)]
    public PLAYER_FPS_CAMERA_FOLLOW first_person_camera;


    
    [Inject(InjectFrom.Anywhere)]
    public camera_switch_ui_script camera_swithc_ui_script_for_gun_ui;


    [Inject(InjectFrom.Anywhere)]
    public player_archary_ui_controller_method player_archary_ui_controller_method_script;


    [Inject(InjectFrom.Anywhere)]
    public gun_animation_script player_gun_animation_script;

    [Inject(InjectFrom.Anywhere)]
    public bow_controller bow_controller_animator;

    [Inject(InjectFrom.Anywhere)]
    public CANVAS_COMPONENT_PROVIDER canvas_component_provider;

    [Inject(InjectFrom.Anywhere)]
    public gun_controller gun_script;
    
       
   

}
