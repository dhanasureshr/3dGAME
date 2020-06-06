using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class camera_switch_ui_script : ExtendedCustomMonoBehavior
{
    // Start is called before the first frame update

    [Inject(InjectFrom.Anywhere)]
    public PLAYER_CAMERA_FOLLOW Player_camera_follow_script_ref;
    [Inject(InjectFrom.Anywhere)]
    public PLAYER_FPS_CAMERA_FOLLOW Player_fps_camera_script_ref;

    private Toggle Toggles;
    private Vector3 fps_pos_ref;
    private Vector3 tps_pos_ref = Vector3.forward;
    private GameObject first_person_pivot;
    private GameObject third_person_pivot;
    private GameObject player_pivot_gameobject_ref;
    private GameObject main_camera_gameobject_ref;


   [HideInInspector] public Transform fps_camera_pivot;
   [HideInInspector] public Transform main_camera;
   [HideInInspector] public Transform tps_camera_pivot;
   [HideInInspector] public Transform player_target_for_fps;

    public GameObject playerobject;
    private SkinnedMeshRenderer final_dhana_small_player_meshrenderer;
  

    private GameObject fps_switcher_canvas;
    private GameObject final_dhana_small_game_object;
    private GameObject arms_assault_rifile_01;


    private GameObject gun_canveas;
    void Start()
    {
        Toggles = gameObject.GetComponent<Toggle>();
        playerobject = GameObject.FindWithTag("Player");
        final_dhana_small_player_meshrenderer = playerobject.GetComponentInChildren<SkinnedMeshRenderer>();
        first_person_pivot = GameObject.FindWithTag("fps_pivot");
        third_person_pivot = GameObject.FindWithTag("tps_pivot");
        player_pivot_gameobject_ref = GameObject.FindWithTag("player_pivot");
        main_camera_gameobject_ref = GameObject.FindWithTag("MainCamera");
        fps_camera_pivot = first_person_pivot.gameObject.GetComponent<Transform>();
        tps_camera_pivot = third_person_pivot.gameObject.GetComponent<Transform>();
        player_target_for_fps = player_pivot_gameobject_ref.gameObject.GetComponent<Transform>();
        main_camera = main_camera_gameobject_ref.gameObject.GetComponent<Transform>();


        fps_switcher_canvas = GameObject.FindWithTag("fps_switcher");
        final_dhana_small_game_object = GameObject.FindWithTag("fight_player");
        arms_assault_rifile_01 = GameObject.FindWithTag("gun_player");

        gun_canveas = GameObject.FindWithTag("gun_canvas");
       
    }



    public void LateUpdate()
    {

        

        fps_pos_ref = fps_camera_pivot.position;
    
        tps_pos_ref = tps_camera_pivot.position;
       
    }

    public void camera_taugle_button_clicked()
    {
        if(Toggles.isOn == true)
        {

            _enable_fps_mode();
          
        }
        else
        {
            _enable_tps_mode();
        }


    }

    public void _enable_fps_mode()
    {
        Player_camera_follow_script_ref.enabled = false;
        final_dhana_small_player_meshrenderer.enabled = false;
        Player_fps_camera_script_ref.enabled = true;

    }

    public void _enable_tps_mode()
    {
        final_dhana_small_player_meshrenderer.enabled = true;
        Player_camera_follow_script_ref.enabled = true;
        Player_fps_camera_script_ref.enabled = false;
    }

    public void Remove_gun_mode()
    {
        _enable_tps_mode();
        fps_switcher_canvas.gameObject.SetActive(true);
        final_dhana_small_game_object.gameObject.SetActive(true);
        arms_assault_rifile_01.SetActive(false);
        gun_canveas.gameObject.SetActive(false);

    }
}
