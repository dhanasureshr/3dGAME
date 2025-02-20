﻿using System.Collections;
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
        switch_magic();
    }

    public void REMOVE_MAGIC_MODE()
    {
        remove_magic();
    }

    public void BAT_MODE()
    {

    }

    public void REMOVE_BAT_MODE()
    {

    }

    public void ROCKET_MODE()
    {
        switch_rocket();
    }

    public void REMOVE_ROCKET_MODE()
    {
        remove_rocket();
    }

    public void SWARD_MODE()
    {
        switch_sword();
    }

    public void REMOVE_SWARD_MODE()
    {
        remove_sword();
    }

    public void ARCHARY_MODE()
    {
        
        switch_bow();
    }
    
    public void REMOVEA_ARCHARY_MODE()
    {
        remove_bow();
        
    }


    // main logic methods to switch the GAME actions  are hear
    void switch_gun()
    {
        Remove_all_game_action_modes();
        player_component_access.GUN_PLAYER.SetActive(true);
        canvas_component_access.GUN_CANVAS.SetActive(true);
        canvas_component_access.FIGHTING_CANVAS.SetActive(false);
        canvas_component_access.main_ui_script_components.camera_swithc_ui_script_for_gun_ui._enable_fps_mode();
    }



    void switch_bow()
    {
        Remove_all_game_action_modes();

        player_component_access.BOW_PLAYER.SetActive(true);

        canvas_component_access.BOW_CANVAS.SetActive(true);
        canvas_component_access.FIGHTING_CANVAS.SetActive(false);
        canvas_component_access.main_ui_script_components.camera_swithc_ui_script_for_gun_ui._enable_fps_mode();
    }


    void switch_sword()
    {
        Remove_all_game_action_modes();
        player_component_access.player_camera_follow_scrip_reference._wepon_tps_camera_ = true;
        player_component_access.SWORD_PLAYER.SetActive(true);
        player_component_access.FULL_PLAYER.GetComponent<PLAYER_ANIMATION_HELPER>().player_animator_ref.SetLayerWeight(0, 0);
        player_component_access.FULL_PLAYER.GetComponent<PLAYER_ANIMATION_HELPER>().player_animator_ref.SetLayerWeight(1, 1);
        player_component_access.FULL_PLAYER.GetComponent<PLAYER_ANIMATION_HELPER>().player_animator_ref.applyRootMotion = true;

        canvas_component_access.SWORD_CANVAS.SetActive(true);
        canvas_component_access.FIGHTING_CANVAS.SetActive(false);
    }

    void switch_magic()
    {
        Remove_all_game_action_modes();
        player_component_access.player_camera_follow_scrip_reference._wepon_tps_camera_ = true;
        player_component_access.FULL_PLAYER.GetComponent<PLAYER_ANIMATION_HELPER>().player_animator_ref.SetLayerWeight(0, 0);
        player_component_access.FULL_PLAYER.GetComponent<PLAYER_ANIMATION_HELPER>().player_animator_ref.SetLayerWeight(2, 1);
        player_component_access.FULL_PLAYER.GetComponent<magic_particls_prefab_attacker>().Enablemagic_player();
        canvas_component_access.FIGHTING_CANVAS.SetActive(false);
        canvas_component_access.MAGIC_CANVAS.SetActive(true);
        

    }

    void switch_rocket()
    {
        Remove_all_game_action_modes();
        player_component_access.ROCKET_PLAYER.SetActive(true);
        canvas_component_access.ROCKET_CANVAS.SetActive(true);
        canvas_component_access.FIGHTING_CANVAS.SetActive(false);
        canvas_component_access.main_ui_script_components.camera_swithc_ui_script_for_gun_ui._enable_fps_mode();

    }

    void remove_rocket()
    {
        player_component_access.ROCKET_PLAYER.SetActive(false);
        canvas_component_access.ROCKET_CANVAS.SetActive(false);
        canvas_component_access.FIGHTING_CANVAS.SetActive(true);
        canvas_component_access.main_ui_script_components.camera_swithc_ui_script_for_gun_ui._enable_tps_mode();


    }

    void remove_magic()
    {
        player_component_access.player_camera_follow_scrip_reference._wepon_tps_camera_ = false;
        player_component_access.FULL_PLAYER.GetComponent<PLAYER_ANIMATION_HELPER>().player_animator_ref.SetLayerWeight(0, 1);
        player_component_access.FULL_PLAYER.GetComponent<PLAYER_ANIMATION_HELPER>().player_animator_ref.SetLayerWeight(2, 0);
        player_component_access.FULL_PLAYER.GetComponent<magic_particls_prefab_attacker>().Disablemagic_player();
        
        canvas_component_access.MAGIC_CANVAS.SetActive(false);
        canvas_component_access.FIGHTING_CANVAS.SetActive(true);

    }
    void remove_gun()
    {
        player_component_access.GUN_PLAYER.SetActive(false);
        canvas_component_access.GUN_CANVAS.SetActive(false);
        canvas_component_access.FIGHTING_CANVAS.SetActive(true);
        canvas_component_access.main_ui_script_components.camera_swithc_ui_script_for_gun_ui._enable_tps_mode();
    }



    void remove_bow()
    {

        player_component_access.BOW_PLAYER.SetActive(false);
        canvas_component_access.BOW_CANVAS.SetActive(false);
        canvas_component_access.FIGHTING_CANVAS.SetActive(true);
        canvas_component_access.main_ui_script_components.camera_swithc_ui_script_for_gun_ui._enable_tps_mode(); 
    }

    void remove_sword()
    {
        player_component_access.player_camera_follow_scrip_reference._wepon_tps_camera_ = false;
        player_component_access.SWORD_PLAYER.SetActive(false);
        player_component_access.FULL_PLAYER.GetComponent<playermanager>().fighting_colider_set_to_sword();
        player_component_access.FULL_PLAYER.GetComponent<PLAYER_ANIMATION_HELPER>().player_animator_ref.SetLayerWeight(1, 0);
        player_component_access.FULL_PLAYER.GetComponent<PLAYER_ANIMATION_HELPER>().player_animator_ref.SetLayerWeight(0, 1);
        player_component_access.FULL_PLAYER.GetComponent<PLAYER_ANIMATION_HELPER>().player_animator_ref.applyRootMotion = false;
        
        canvas_component_access.SWORD_CANVAS.SetActive(false);
        canvas_component_access.FIGHTING_CANVAS.SetActive(true);
    }


    public void Remove_all_game_action_modes()
    {
        REMOVE_GUN_MODE();
        REMOVE_MAGIC_MODE();
        REMOVE_BAT_MODE();
        REMOVE_SWARD_MODE();
        REMOVEA_ARCHARY_MODE();
        REMOVE_ROCKET_MODE();
        player_component_access.FULL_PLAYER.GetComponent<PLAYER_ANIMATION_HELPER>().player_animator_ref.SetLayerWeight(0, 1);

    }
}
