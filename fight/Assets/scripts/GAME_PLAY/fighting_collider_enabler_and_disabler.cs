using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fighting_collider_enabler_and_disabler : MonoBehaviour
{
    
    public GameObject RIGHT_HAND_COLLIDER;
    public GameObject LEFT_HAND_COLLIDER;
    public GameObject RIGHT_LEG_COLLIDER;
    public GameObject LEFT_LEG_COLLIDER;
    

    // right hand 
     void RIGHT_HAND_ENABLER()
    {
        RIGHT_HAND_COLLIDER.gameObject.SetActive(true);
    }

    void RIGHT_HAND_DISABLER()
    {
        if (RIGHT_HAND_COLLIDER.gameObject.activeInHierarchy)
        {
            RIGHT_HAND_COLLIDER.gameObject.SetActive(false);
        }
    }

    // left hand

    void LEFT_HAND_ENABLER()
    {
        LEFT_HAND_COLLIDER.gameObject.SetActive(true);
    }

    void LEFT_HAND_DISABLER()
    {
        if(LEFT_HAND_COLLIDER.gameObject.activeInHierarchy)
        {
            LEFT_HAND_COLLIDER.gameObject.SetActive(false);
        }
    }


    //right leg

    void RIGHT_LEG_ENABLER()
    {
        RIGHT_LEG_COLLIDER.gameObject.SetActive(true);
    }

    void RIGHT_LEG_DISABLER()
    {
        if(RIGHT_LEG_COLLIDER.gameObject.activeInHierarchy)
        {
            RIGHT_LEG_COLLIDER.gameObject.SetActive(false);
        }
    }

    // left leg
    void LEFT_LEG_ENABLER()
    {
        LEFT_LEG_COLLIDER.gameObject.SetActive(true);

    }

    void LEFT_LEG_DISABLER()
    {
        if(LEFT_LEG_COLLIDER.gameObject.activeInHierarchy)
        {
            LEFT_LEG_COLLIDER.gameObject.SetActive(false);
        }
    }
}
