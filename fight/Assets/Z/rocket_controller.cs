using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rocket_controller : MonoBehaviour
{
    public Animator rocket_animator;

    public static int rocket_fire = Animator.StringToHash("lauch_rocket");



    public Transform rocket_prefab;
    public Transform rocketspanpoint;
    //public Transform rocket_rotation;
    public float rocketforce = 50.0f;

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
        var rocket = (Transform)Instantiate(rocket_prefab, rocketspanpoint.transform.position,transform.rotation);
        rocket.GetComponent<Rigidbody>().velocity = rocketspanpoint.forward * rocketforce;

    }
}
