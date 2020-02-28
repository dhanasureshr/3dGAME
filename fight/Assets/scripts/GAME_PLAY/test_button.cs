using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class test_button : MonoBehaviour
{
    // Start is called before the first frame update
    public playermanager player_manage_script_ref;
    private Toggle Toggles;
    void Start()
    {
        Toggles = gameObject.GetComponent<Toggle>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void camera_taugle_button_clicked()
    {
        if(Toggles.isOn == true)
        {
            player_manage_script_ref.fps_cam = true;
        }
        else
        {
            player_manage_script_ref.fps_cam = false;
        }
        
       
    }
}
