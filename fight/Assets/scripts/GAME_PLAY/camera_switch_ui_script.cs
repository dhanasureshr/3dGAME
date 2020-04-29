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
    void Start()
    {
        Toggles = gameObject.GetComponent<Toggle>();
        first_person_pivot = GameObject.FindWithTag("fps_pivot");
        third_person_pivot = GameObject.FindWithTag("tps_pivot");
        player_pivot_gameobject_ref = GameObject.FindWithTag("player_pivot");
        main_camera_gameobject_ref = GameObject.FindWithTag("MainCamera");
        fps_camera_pivot = first_person_pivot.gameObject.GetComponent<Transform>();
        tps_camera_pivot = third_person_pivot.gameObject.GetComponent<Transform>();
        player_target_for_fps = player_pivot_gameobject_ref.gameObject.GetComponent<Transform>();
        main_camera = main_camera_gameobject_ref.gameObject.GetComponent<Transform>();

        Debug.Log("ui_script_running");
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
            Player_camera_follow_script_ref.enabled = false;
            Player_fps_camera_script_ref.enabled = true;
          
        }
        else
        {
            Player_camera_follow_script_ref.enabled = true;
            Player_fps_camera_script_ref.enabled = false;
            
        }


    }
}
