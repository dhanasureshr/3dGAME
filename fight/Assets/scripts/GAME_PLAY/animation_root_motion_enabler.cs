using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class animation_root_motion_enabler : MonoBehaviour
{

    public Animator player_animator_ref;
    private void Start()
    {
        player_animator_ref = GetComponent<Animator>();
    }
    public void enable_root_motion()
    {
        player_animator_ref.applyRootMotion = true;
    }

    public void disable_root_motion()
    {
        player_animator_ref.applyRootMotion = false;
    }
}
