using System.Collections;
using System.Collections.Generic;
using UnityEngine;

// this script entirely about the gun prefab;

public class eniable_gun : MonoBehaviour
{

    

    private GameObject arms_assault_rifile_01;

    private GameObject fps_switcher_canvas;

    [Inject(InjectFrom.Anywhere)]
    public camera_switch_ui_script camera_switcher;

    private SkinnedMeshRenderer arms_assault_rifil_player_meshrenderer;

    private GameObject gun_canveas;
    private void Start()
    {
        
        arms_assault_rifile_01 = GameObject.FindWithTag("gun_player");
        fps_switcher_canvas = GameObject.FindWithTag("fps_switcher");
        arms_assault_rifile_01.SetActive(false);
        arms_assault_rifil_player_meshrenderer = arms_assault_rifile_01.GetComponentInChildren<SkinnedMeshRenderer>();
        gun_canveas = GameObject.FindWithTag("gun_canvas");
        gun_canveas.SetActive(false);
    }


    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Player")
        {
            gun_canveas.SetActive(true);
            fps_switcher_canvas.SetActive(false);
            camera_switcher._enable_fps_mode();
            arms_assault_rifile_01.SetActive(true);
            arms_assault_rifil_player_meshrenderer.enabled = false;
            Destroy(gameObject);
        }
    }
}
