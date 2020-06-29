using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bow_controller : MonoBehaviour
{
    public GameObject bow_arow;

    public Animator bow_animation_controller;

    private static int fire_arrow = Animator.StringToHash("fire_arrow");

    public void Start()
    {
        bow_arow = GameObject.FindWithTag("n");
        bow_animation_controller = gameObject.GetComponent<Animator>();
    }


    public void PLAY_ARCHARY_PLAYER_FIRE_ARROW()
    {
        bow_animation_controller.SetTrigger(fire_arrow);
    }

    public void enable_arrow()
    {
        bow_arow.SetActive(true);
    }


    public void disable_arrow()
    {
        bow_arow.SetActive(false);
    }

}
