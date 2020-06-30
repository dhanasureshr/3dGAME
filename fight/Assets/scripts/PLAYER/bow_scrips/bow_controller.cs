using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bow_controller : MonoBehaviour
{
    public GameObject bow_arow;

    public Transform vertical_bow_position;
    public Transform horizontal_bow_position;

    public Animator bow_animation_controller;

    private bool vertical_bow_shoot = false;

    [Inject(InjectFrom.Anywhere)]
    public PLAYER_COMPONENT_PROVIDER player_component_provider_script;


    [Inject(InjectFrom.Anywhere)]
    public playerjoymovement playerjoymovement_for_gun_movement_animation;
    //animation paramater acess code
    private static int horthash = Animator.StringToHash("x");
    private static int verthash = Animator.StringToHash("y");

    private static int fire_arrow = Animator.StringToHash("fire_arrow");
    private static int aim_arrow = Animator.StringToHash("aim_arrow");
    public void Start()
    {
        bow_arow = GameObject.FindWithTag("n");
        bow_animation_controller = gameObject.GetComponent<Animator>();
    }

    private void Update()
    {

        bow_animation_controller.SetFloat(horthash, playerjoymovement_for_gun_movement_animation.h_joy, 0.1f, Time.deltaTime);
        bow_animation_controller.SetFloat(verthash, playerjoymovement_for_gun_movement_animation.y_joy, 0.1f, Time.deltaTime);
    }

    public void PLAY_ARCHARY_PLAYER_FIRE_ARROW()
    {
        if (vertical_bow_shoot)
        {
            //player_component_provider_script.BOW_PLAYER.transform.position = vertical_bow_position.position;
            bow_animation_controller.SetTrigger(fire_arrow);

        }
        else
        {

           // player_component_provider_script.BOW_PLAYER.transform.position = horizontal_bow_position.position;
            bow_animation_controller.SetTrigger(fire_arrow);
        }
    }


    public void PLAY_ARCHARY_PLAYER_AIM_IN_VERTICAL_ARROW()
    {
        bow_animation_controller.SetBool(aim_arrow, true);
        player_component_provider_script.BOW_PLAYER.transform.position = vertical_bow_position.position;
        vertical_bow_shoot = true;

    }

    public void PLAY_ARCHARY_PLAYER_AIM_OUT_VERTICAL_ARROW()
    {
        bow_animation_controller.SetBool(aim_arrow, false);
        player_component_provider_script.BOW_PLAYER.transform.position = horizontal_bow_position.position;
        vertical_bow_shoot = false;

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
