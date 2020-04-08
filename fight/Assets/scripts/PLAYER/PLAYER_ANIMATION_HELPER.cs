using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PLAYER_ANIMATION_HELPER : MonoBehaviour
{
    public Animator player_animator_ref;

    private static int cross_ounch = Animator.StringToHash("CROSS_OUNCH");
    private static int down_up_punch = Animator.StringToHash("DOWN_UP_PUNCH");
    private static int forward = Animator.StringToHash("FORWARD");
    private static int hook_punch = Animator.StringToHash("HOOK_PUNCH");
    private static int punch = Animator.StringToHash("PUNCH");
    private static int right_side_kick = Animator.StringToHash("RIGHT_SIDE_KICK");
    private static int round_kick = Animator.StringToHash("ROUND_KICK");
    private static int punch_combo = Animator.StringToHash("PUNCH_COMBO");

    private void Start()
    {
       // player_animator_ref = GetComponent<Animator>();
    }
    public void PLAY_CROSS_OUNCH()
    {
        player_animator_ref.SetTrigger(cross_ounch);
    }
    public void PLAY_DOWN_UP_PUNCH()
    {
        player_animator_ref.SetTrigger("down_up_punch");

    }
    public void PLAY_FORWARD()
    {
        player_animator_ref.SetTrigger(forward);

    }
    public void PLAY_HOOK_PUNCH()
    {
        player_animator_ref.SetTrigger(hook_punch);
    }
    public void PLAY_PUNCH()
    {
        player_animator_ref.SetTrigger(punch);
    }
    public void PLAY_PUNCH_COMBO()
    {
        player_animator_ref.SetTrigger(punch_combo);

    }
    public void PLAY_RIGHT_SIDE_KICK()
    {
        player_animator_ref.SetTrigger(right_side_kick);
    }
    public void PLAY_ROUND_KICK()
    {
        player_animator_ref.SetTrigger(round_kick);
    }




    #region prayer fighting functions
    public void PUNCH1_BUTTON_PRESSED()
    {
        PLAY_FORWARD();
    }

    public void PUNCH2_BUTTON_PRESSED()
    {
        PLAY_CROSS_OUNCH();
    }

    public void KICK_BUTTON_PRESSED()
    {
        PLAY_ROUND_KICK();
    }
    #endregion

}
