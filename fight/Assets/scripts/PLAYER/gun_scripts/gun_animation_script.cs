using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gun_animation_script : MonoBehaviour
{

    [HideInInspector] private Animator gun_animator;

    [Inject(InjectFrom.Anywhere)]
    public playerjoymovement playerjoymovement_for_gun_movement_animation;
    //animation paramater acess code
    private static int horthash = Animator.StringToHash("x");
    private static int verthash = Animator.StringToHash("y");

    private static int fire_rifile = Animator.StringToHash("fire_rifil");
    private static int reload_rifile = Animator.StringToHash("reload");

    private static int aim = Animator.StringToHash("aim");
    //private static int aim_fire = Animator.StringToHash("aim__fire");

    [HideInInspector] public bool aim_the_gun;
    private void Start()
    {
        gun_animator = GetComponent<Animator>();
    }

    private void Update()
    {

        gun_animator.SetFloat(horthash, playerjoymovement_for_gun_movement_animation.h_joy, 0.1f, Time.deltaTime);
        gun_animator.SetFloat(verthash, playerjoymovement_for_gun_movement_animation.y_joy, 0.1f, Time.deltaTime);
    }

    public void PLAY_GUN_PLAYER_FIRE_RIFIL()
    {
        gun_animator.SetTrigger(fire_rifile);
    }

    public void PLAY_GUN_PLAYER_RELOAD_RIFIL()
    {
        gun_animator.SetTrigger(reload_rifile);
    }

    public void PLAY_GUN_PLAYER_AIM_IN_RIFIL()
    {
        gun_animator.SetBool(aim, true);
    }


    public void PLAY_GUN_PLAYER_AIM_OUT_RIFIL()
    {
        gun_animator.SetBool(aim, false);
    }

    //public void PLAY_GUN_PLAYER_AIM__FIRE()
    //{
    //    gun_animator.SetTrigger(aim_fire);
    //}
}
