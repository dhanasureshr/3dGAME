using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fighting_collider_enabler_and_disabler : MonoBehaviour
{
    public GameObject LEFT_HAND_COLLIDER;
    public GameObject RIGHT_HAND_COLLIDER;
    public GameObject LEFT_LEG_COLLIDER;
    public GameObject RIGHT_LEG_COLLIDER;

    public void RIGHT_HAND_ENABLER()
    {
        RIGHT_HAND_COLLIDER.gameObject.SetActive(true);
    }

    public void RIGHT_HAND_DISABLER()
    {
            RIGHT_HAND_COLLIDER.gameObject.SetActive(false);
    }


}
