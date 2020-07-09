using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PLAYER_COMPONENT_PROVIDER : ExtendedCustomMonoBehavior
{
    


    [Space(15)]
    [Header("PLAYER HEALTH UI PREFABES AND IMAGES")]
    public GameObject player_health_bar_gameobject;
    public GameObject P_health_bar_fg;
    public Image P_health_bar_image;

    public GameObject player_strength_bar_gameobject;
    public GameObject P_strength_bar_fg;
    public Image P_strength_bar_image;


    [Space(15)]
    [Header("DIFFERNET PLAYER GAME OBJECT REFERENCES")]
    public GameObject FULL_PLAYER;
    public GameObject FIGHTING_PLAYER;
    public GameObject GUN_PLAYER;
    public GameObject BOW_PLAYER;
    public GameObject SWORD_PLAYER;
    public SkinnedMeshRenderer player_skinned_mesh_renderer;

    [Space(15)]
    [Header("PLAYER CAMERA RIEFERENCES")]
    public GameObject FPS_PIVOT;
    public GameObject TPS_PIVOT;
    public GameObject PLAYER_PIVOT;
    public GameObject MAIN_CAMERA;
    public GameObject GUN_CAMERA;

    



    public void Start()
    {
        player_health_bar_gameobject = GameObject.FindWithTag(tags.player_health_bg_tag);
        P_health_bar_fg = GameObject.FindWithTag(tags.player_health_fg_tag);
        P_health_bar_image = P_health_bar_fg.GetComponent<Image>(); // player health bar reference ends

        player_strength_bar_gameobject = GameObject.FindWithTag(tags.Player_strength_bg_tag);
        P_strength_bar_fg = GameObject.FindWithTag(tags.Player_strength_fg_tag);
        P_strength_bar_image = P_strength_bar_fg.GetComponent<Image>();// enimy health bar reference ends


        FULL_PLAYER = GameObject.FindWithTag(tags.full_player_tag);
        FIGHTING_PLAYER = GameObject.FindWithTag(tags.fighting_player_tag);
        GUN_PLAYER = GameObject.FindWithTag(tags.gun_player_tag);
        BOW_PLAYER = GameObject.FindWithTag(tags.bow_player_tag);
        SWORD_PLAYER = GameObject.FindWithTag(tags.sword_player_tag);
        player_skinned_mesh_renderer = FULL_PLAYER.GetComponentInChildren<SkinnedMeshRenderer>();


        FPS_PIVOT = GameObject.FindWithTag(tags.fps_pivot_tag);
        TPS_PIVOT = GameObject.FindWithTag(tags.tps_pivot_tag);
        PLAYER_PIVOT = GameObject.FindWithTag(tags.player_pivot_tag);
        MAIN_CAMERA = GameObject.FindWithTag(tags.main_camera_tag);
        GUN_CAMERA = GameObject.FindWithTag(tags.gun_camera_tag);


        Default_player_disabler();


    }

    private void Default_player_disabler()
    {
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(GUN_PLAYER);
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(BOW_PLAYER);
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(SWORD_PLAYER);
    }

}
