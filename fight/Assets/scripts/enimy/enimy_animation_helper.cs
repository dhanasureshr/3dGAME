using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enimy_animation_helper : MonoBehaviour
{
    public enimy_movement enimy_movement_reference;
    public Animator enimy_animator_ref;

    private static int enimy_run = Animator.StringToHash("move");
    private static int enimy_fight = Animator.StringToHash("fight");
    private static int enimy_get_hit = Animator.StringToHash("get_hit");
    private static int enimy_fall_down = Animator.StringToHash("death");

    private void Start()
    {
        enimy_movement_reference = GetComponent<enimy_movement>();
        enimy_animator_ref = GetComponent<Animator>();
    }

    #region enimy_fighting_functions
    public void PLAY_ENIMY_RUN()
    {
        // enimy_animator_ref.SetTrigger(enimy_run);
        enimy_animator_ref.SetBool(enimy_run, true);
    }

    public void EXIT_ENIMY_RUN()
    {
        enimy_animator_ref.SetBool(enimy_run, false);
    }
    public void PLAY_ENIMY_FIGHT()
    {
        enimy_animator_ref.SetBool(enimy_fight, true);
    }

    public void EXIT_ENIMY_FIGHT()
    {
        enimy_animator_ref.SetBool(enimy_fight, false);
    }
    public void PLAY_ENIMY_GET_HIT()
    {
        enimy_animator_ref.SetBool(enimy_get_hit, true);

    }
    public void EXIT_ENIMY_GET_HIT()
    {
        enimy_animator_ref.SetBool(enimy_get_hit, false);
    }
    public void PLAY_ENIMY_FALL_DOWN()
    {
        enimy_animator_ref.SetTrigger(enimy_fall_down);
    }
    #endregion


}
