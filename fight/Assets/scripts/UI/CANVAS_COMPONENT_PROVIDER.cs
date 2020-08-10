using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CANVAS_COMPONENT_PROVIDER : ExtendedCustomMonoBehavior
{
    [Space(15)]
    [Header("MAIN GAME CANVAS")]
    public GameObject MAIN_GAME_CANVAS;


    [Space(15)]
    [Header("MAIN GAME PANALS")]
    public GameObject GAME_LOST_PANAL;
    public GameObject GAME_RESUME_PANAL;

    [Header("GAME ACTION CANVAS")]
    public GameObject FIGHTING_CANVAS;

    public GameObject GUN_CANVAS;

    public GameObject BOW_CANVAS;

    public GameObject SWORD_CANVAS;

    public GameObject MAGIC_CANVAS;

    public GameObject ROCKET_CANVAS;


    [Space(15)]
    [Header("main canvas scripts")]
    [Inject(InjectFrom.Anywhere)]
    public main_ui_component_provider main_ui_script_components;



    public void Start()
    {
        //THIS IS THE MIAN GAME PANALS PARENT CONTAINER IN WHICH ALL THE BELOW ARE THE CHILD OF THIS BELOW OBJECT
        MAIN_GAME_CANVAS = GameObject.FindWithTag(tags.game_panals_tag);

        ///////////////////////////////////////////////////////////////////////////
        ///


        GAME_LOST_PANAL = GameObject.FindWithTag(tags.game_lost_panal_tag);
        GAME_RESUME_PANAL = GameObject.FindWithTag(tags.game_resume_panal_tag);

        FIGHTING_CANVAS = GameObject.FindWithTag(tags.fighting_canvas_tag);
        GUN_CANVAS = GameObject.FindWithTag(tags.gun_canvas_tag);
        BOW_CANVAS = GameObject.FindWithTag(tags.bow_canvas_tag);
        SWORD_CANVAS = GameObject.FindWithTag(tags.sward_canvas_tag);
        MAGIC_CANVAS = GameObject.FindWithTag(tags.magic_canvas_tag);
        ROCKET_CANVAS = GameObject.FindWithTag(tags.rocket_canvas_tag);



        Default_canvas_disabler();
    }


    void Default_canvas_disabler()
    {
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(GAME_LOST_PANAL);
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(GAME_RESUME_PANAL);
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(MAGIC_CANVAS);
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(GUN_CANVAS);
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(BOW_CANVAS);
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(SWORD_CANVAS);
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(ROCKET_CANVAS);
    }

    public void Disable_game_action_canvas()
    {
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(FIGHTING_CANVAS);
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(GUN_CANVAS);
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(BOW_CANVAS);
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(SWORD_CANVAS);
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(MAGIC_CANVAS);
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(ROCKET_CANVAS);

    }

    public void Disable_main_canvas_for_pause_and_lost_panels()
    {
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(MAIN_GAME_CANVAS);
    }

    public void Enable_main_canvas_for_pause_and_lost_panels()
    {
        gamemanager.instance.base_game_controller_ref.Enable_object_in_hirichery(MAIN_GAME_CANVAS);
    }
}
