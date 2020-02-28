using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class camera_switch_ui_script : ExtendedCustomMonoBehavior
{
    // Start is called before the first frame update
    public camera_switch_controller_script camera_swithch_controller_script_ref;
    private Toggle Toggles;
    void Start()
    {
        Toggles = gameObject.GetComponent<Toggle>();
       
    }

    public void camera_taugle_button_clicked()
    {
        
        if (Toggles.isOn == true)
        {
            
            camera_swithch_controller_script_ref.fps_cam = true;
        }
        else
        {
            
            camera_swithch_controller_script_ref.fps_cam = false;
        }


    }
}
