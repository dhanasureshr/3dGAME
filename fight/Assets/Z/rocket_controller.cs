using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rocket_controller : MonoBehaviour
{
    public Animator rocket_animator;

    public static int rocket_fire = Animator.StringToHash("lauch_rocket");

    public void Start()
    {
        rocket_animator = gameObject.GetComponent<Animator>();

    }

    public void PLAY_PLAYER_ROCKET_FIRE_ANIMATION()
    {
        rocket_animator.SetTrigger(rocket_fire);
    }

    public void Fire_Rocket()
    {

    }
}
