using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CANVAS_COMPONENT_PROVIDER : ExtendedCustomMonoBehavior
{
    [Space(15)]
    [Header("MAIN GAME PANALS")]
    public GameObject GAME_LOST_PANAL;
    public GameObject GAME_RESUME_PANAL;

    [Header("GAME ACTION CANVAS")]
    public GameObject FIGHTING_CANVAS;
    public GameObject GUN_CANVAS;

    [Space(15)]
    [Header("main canvas scripts")]
    [Inject(InjectFrom.Anywhere)]
    public main_ui_component_provider main_ui_script_components;


    public void Start()
    {
        GAME_LOST_PANAL = GameObject.FindWithTag(tags.game_lost_panal_tag);
        GAME_RESUME_PANAL = GameObject.FindWithTag(tags.game_resume_panal_tag);

        FIGHTING_CANVAS = GameObject.FindWithTag(tags.fighting_canvas_tag);
        GUN_CANVAS = GameObject.FindWithTag(tags.gun_canvas_tag);


        Default_canvas_disabler();
    }
    

    void Default_canvas_disabler()
    {
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(GAME_LOST_PANAL);
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(GAME_RESUME_PANAL);
       // gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(FIGHTING_CANVAS);
        gamemanager.instance.base_game_controller_ref.Disable_object_in_hirichery(GUN_CANVAS);
    }

}
