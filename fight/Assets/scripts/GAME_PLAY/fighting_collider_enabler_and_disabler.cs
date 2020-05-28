using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fighting_collider_enabler_and_disabler : MonoBehaviour
{
    
    public GameObject RIGHT_HAND_COLLIDER;
    public GameObject LEFT_HAND_COLLIDER;
    public GameObject RIGHT_LEG_COLLIDER;
    public GameObject LEFT_LEG_COLLIDER;

    private void Start()
    {
    //    RIGHT_LEG_COLLIDER = transform.Find("RIGHT__LEG_HIT_COLLIDER").gameObject;
    //    LEFT_LEG_COLLIDER = transform.Find("LEFT__LEG_HIT_COLLIDER").gameObject;
    //    RIGHT_HAND_COLLIDER = transform.Find("RIGHT__HAND_HIT_COLLIDER").gameObject;
    //    LEFT_HAND_COLLIDER = transform.Find("LEFT__HAND_HIT_COLLIDER").gameObject;
    //
    }
    // right hand 
    void RIGHT_HAND_ENABLER()
    {
        RIGHT_HAND_COLLIDER.SetActive(true);
    }

    void RIGHT_HAND_DISABLER()
    {
        if (RIGHT_HAND_COLLIDER.gameObject.activeInHierarchy)
        {
            RIGHT_HAND_COLLIDER.SetActive(false);
        }
    }

    // left hand

    void LEFT_HAND_ENABLER()
    {
        LEFT_HAND_COLLIDER.SetActive(true);
    }

    void LEFT_HAND_DISABLER()
    {
        if(LEFT_HAND_COLLIDER.gameObject.activeInHierarchy)
        {
            LEFT_HAND_COLLIDER.SetActive(false);
        }
    }


    //right leg

    void RIGHT_LEG_ENABLER()
    {
        RIGHT_LEG_COLLIDER.SetActive(true);
    }

    void RIGHT_LEG_DISABLER()
    {
        if(RIGHT_LEG_COLLIDER.gameObject.activeInHierarchy)
        {
            RIGHT_LEG_COLLIDER.SetActive(false);
        }
    }

    // left leg
    void LEFT_LEG_ENABLER()
    {
        LEFT_LEG_COLLIDER.SetActive(true);

    }

    void LEFT_LEG_DISABLER()
    {
        if(LEFT_LEG_COLLIDER.gameObject.activeInHierarchy)
        {
            LEFT_LEG_COLLIDER.SetActive(false);
        }
    }




    void Tag_right_leg_TAG()
    {
        RIGHT_LEG_COLLIDER.tag = tags.player_right_leg_tag;

    }

    void Untag_right_leg_TAG()
    {
        RIGHT_LEG_COLLIDER.tag = tags.un_tag;
    }


    void Tag_left_leg_TAG()
    {
        LEFT_LEG_COLLIDER.tag = tags.player_right_leg_tag;

    }

    void Untag_left_leg_TAG()
    {
        LEFT_LEG_COLLIDER.tag = tags.un_tag;
    }


    void Tag_left_hand_TAG()
    {
        LEFT_HAND_COLLIDER.tag = tags.player_left_hand_tag;
    }

    void Untag_left_hand_TAG()
    {
        LEFT_HAND_COLLIDER.tag = tags.un_tag;
    }

    


}
