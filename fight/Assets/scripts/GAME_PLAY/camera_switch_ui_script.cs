using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class camera_switch_ui_script : ExtendedCustomMonoBehavior
{
    // Start is called before the first frame update
    public camera_switch_controller_script camera_swithch_controller_script_ref;
    public Toggle Toggles;
    public PLAYER_CAMERA_FOLLOW Player_camera_follow_script_ref;
    public Transform fps_camera_pivot;
    public Transform main_camera;
    public Transform tps_camera_pivot;
    private Vector3 fps_pos_ref;
    private Vector3 tps_pos_ref;
    
    public PLAYER_FPS_CAMERA_FOLLOW Player_fps_camera_script_ref;
    void Start()
    {
        Toggles = gameObject.GetComponent<Toggle>();
        fps_camera_pivot = GetComponent<Transform>();
        tps_camera_pivot = GetComponent<Transform>();
        main_camera = GetComponent<Transform>();


       
    }
    public void LateUpdate()
    {
        fps_pos_ref = fps_camera_pivot.position;
        tps_pos_ref = tps_camera_pivot.position;
       
    }

    public void camera_taugle_button_clicked()
    {
        
        //if (Toggles.isOn == true)
        //{
            
        //    camera_swithch_controller_script_ref.fps_cam = true;
        //}
        //else
        //{
            
        //    camera_swithch_controller_script_ref.fps_cam = false;
        //}


        if(Toggles.isOn == true)
        {
            Player_camera_follow_script_ref.enabled = false;
            Player_fps_camera_script_ref.enabled = true;
            main_camera.transform.position = fps_pos_ref;
        }
        else
        {
            
            Player_camera_follow_script_ref.enabled = true;
            Player_fps_camera_script_ref.enabled = false;
            main_camera.transform.position = tps_pos_ref;
        }


    }
}
