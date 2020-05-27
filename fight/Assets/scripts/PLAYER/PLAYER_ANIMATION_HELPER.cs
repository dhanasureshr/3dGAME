using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PLAYER_ANIMATION_HELPER : MonoBehaviour
{
    #region combo variables
    public enum CombeState
    { 
        NONE,
        PUNCH_1,
        PUNCH_2,
        PUNCH_3,
        PUNCH_4,
        PUNCH_5,
        PUNCH_6,
        KICK_1,
        KICK_2,
        KICK_3
    }

    private bool activateTimerToReset;
    private float default_combo_timer = 0.6f;
    private float current_combo_timer;
    private CombeState current_combo_state;
    #endregion

    #region animation variables
    public  Animator player_animator_ref;
    // these all are one punch1 sets
    private static int cross_ounch = Animator.StringToHash("CROSS_OUNCH");
    private static int right_hook_punch = Animator.StringToHash("RIGHT_HOOK_PUNCH");
    private static int forward = Animator.StringToHash("FORWARD");
   
    // thes all are one punch2 sets
    
    private static int punch = Animator.StringToHash("PUNCH");
    private static int punch_combo = Animator.StringToHash("PUNCH_COMBO");
    private static int quick_punch = Animator.StringToHash("QUICK_PUNCH");

    //these all are kick sets
    private static int fly_two_leg_kick = Animator.StringToHash("FLY_TWO_LEG_KICK");
    private static int round_kick = Animator.StringToHash("ROUND_KICK");
    private static int right_forword_kick = Animator.StringToHash("RIGHT_FORWORD_KICK");

    // this are the variables for the player hit animation
    private static int player_body_hit = Animator.StringToHash("HIT_TO_BODY");
    private static int player_face_hit = Animator.StringToHash("PUNCH_TO_FACE");


    // this are the variavels for the player dute animations
    private static int player_showlder_dute = Animator.StringToHash("SHOLDER_THROW_PLAYER");
    private static int player_hell_dute = Animator.StringToHash("PLAYER_HELL_SLAMMER");
    #endregion

    #region mono methods

    private void Start()
    {
        current_combo_timer = default_combo_timer;
        current_combo_state = CombeState.NONE;
        //player_animator_ref = GetComponentInChildren<Animator>();
        player_animator_ref = GetComponent<Animator>();

        
    }

    private void Update()
    {
        ResetComboState();
    }

    #endregion

    #region animation functions 

    public void PLAY_CROSS_OUNCH()
    {
        player_animator_ref.SetTrigger(cross_ounch);
    }
    public void PLAY_QUICK_PUNCH()
    {
        player_animator_ref.SetTrigger(quick_punch);

    }
    public void PLAY_FORWARD()
    {
        player_animator_ref.SetTrigger(forward);

    }
    public void PLAY_RIGHT_HOOK_PUNCH()
    {
        player_animator_ref.SetTrigger(right_hook_punch);
    }
    public void PLAY_PUNCH()
    {
        player_animator_ref.SetTrigger(punch);
    }
    public void PLAY_PUNCH_COMBO()
    {
        player_animator_ref.SetTrigger(punch_combo);

    }
    public void PLAY_FLY_TWO_LEG_KICK()
    {
        player_animator_ref.SetTrigger(fly_two_leg_kick);
    }
    public void PLAY_ROUND_KICK()
    {
        player_animator_ref.SetTrigger(round_kick);
    }
    public void PLAY_RIGHT_FORWORD_KICK()
    {
        player_animator_ref.SetTrigger(right_forword_kick);
    }

    public void PLAY_PLAYER_BODY_HIT()
    {
        player_animator_ref.SetTrigger(player_body_hit);
    }
    
    public void PLAY_PLAYER_FACE_HIT()
    {
        player_animator_ref.SetTrigger(player_face_hit);
    }

    public void PLAY_PLAYER_SHOLDER_DUTE()
    {
        player_animator_ref.SetTrigger(player_showlder_dute);
    }

    public void PLAY_PLAYER_HELL_DUTE()
    {
        player_animator_ref.SetTrigger(player_hell_dute);
    }

    #endregion

    public void PLAY_PLAYER_GET_HIT(int val)
    {
        if(val == 0)
        {
            PLAY_PLAYER_BODY_HIT();
        }
        if(val == 1)
        {
            PLAY_PLAYER_FACE_HIT();
        }
    }

    #region prayer fighting functions
    public void PUNCH1_BUTTON_PRESSED()
    {
        #region three button setup
        /*
        if( current_combo_state == CombeState.PUNCH_3 ||
            current_combo_state == CombeState.PUNCH_4 ||
            current_combo_state == CombeState.PUNCH_5 ||
            current_combo_state == CombeState.PUNCH_6 ||
            current_combo_state == CombeState.KICK_1||
            current_combo_state == CombeState.KICK_2||
            current_combo_state == CombeState.KICK_3)
        {
            return;
        }

        current_combo_state++;
        activateTimerToReset = true;
        current_combo_timer = default_combo_timer;

        if(current_combo_state == CombeState.PUNCH_1)
        {
            PLAY_CROSS_OUNCH();
        }
        if(current_combo_state == CombeState.PUNCH_2)
        {
            
            
            PLAY_RIGHT_HOOK_PUNCH();
        }
        if(current_combo_state == CombeState.PUNCH_3)
        {
            PLAY_FORWARD();
        }
        */

        #endregion

        #region two button setup
        ///two button change;
        if (current_combo_state == CombeState.PUNCH_6||
            current_combo_state == CombeState.KICK_1||
            current_combo_state == CombeState.KICK_2||
            current_combo_state == CombeState.KICK_3)
        {
            return;
        }
        current_combo_state++;
        activateTimerToReset = true;
        current_combo_timer = default_combo_timer;
        if(current_combo_state == CombeState.PUNCH_1)
        {
            PLAY_CROSS_OUNCH();
        }

        if(current_combo_state == CombeState.PUNCH_2)
        {
            PLAY_RIGHT_HOOK_PUNCH();
        }

        if(current_combo_state == CombeState.PUNCH_3)
        {
            PLAY_FORWARD();
        }

        if(current_combo_state == CombeState.PUNCH_4)
        {
            PLAY_PUNCH();
        }

        if(current_combo_state == CombeState.PUNCH_5)
        {
            PLAY_PUNCH_COMBO();
        }

        if(current_combo_state == CombeState.PUNCH_6)
        {
            PLAY_QUICK_PUNCH();
        }
        #endregion

    }



    #region three button setup button
    public void PUNCH2_BUTTON_PRESSED()
    {
        if(current_combo_state == CombeState.PUNCH_3 ||
            current_combo_state == CombeState.PUNCH_6||
            current_combo_state == CombeState.KICK_3)
        {
            return;

        }

        if(current_combo_state == CombeState.NONE||
            current_combo_state == CombeState.PUNCH_1||
            current_combo_state == CombeState.PUNCH_2||
            current_combo_state == CombeState.KICK_1||
            current_combo_state == CombeState.KICK_2)
        {
            current_combo_state = CombeState.PUNCH_4;
        }
        else if(current_combo_state == CombeState.PUNCH_4)
        {
            current_combo_state++;
        }
        else if(current_combo_state == CombeState.PUNCH_5)
        {
            current_combo_state++;
        }
        activateTimerToReset = true;
        current_combo_timer = default_combo_timer;

        if(current_combo_state == CombeState.PUNCH_4)
        {
            PLAY_PUNCH();

        }
        if(current_combo_state == CombeState.PUNCH_5)
        {
            PLAY_PUNCH_COMBO();
        }
        if(current_combo_state == CombeState.PUNCH_6)
        {
            PLAY_QUICK_PUNCH();
        }
    }
    #endregion



    public void KICK_BUTTON_PRESSED()
    {
        #region three button setup
        /*
        if (current_combo_state == CombeState.KICK_3||
             current_combo_state == CombeState.PUNCH_3 ||
              current_combo_state == CombeState.PUNCH_6
             )
        {
            return;
        }

        if (current_combo_state == CombeState.NONE ||
             current_combo_state == CombeState.PUNCH_4 ||
              current_combo_state == CombeState.PUNCH_5||
              current_combo_state == CombeState.PUNCH_1||
              current_combo_state == CombeState.PUNCH_2
              )
        {
            current_combo_state = CombeState.KICK_1;
       }
       else if(current_combo_state == CombeState.KICK_1)
        {
            current_combo_state++;
        }
        else if(current_combo_state == CombeState.KICK_2)
        {
            current_combo_state++;
        }
        activateTimerToReset = true;
        current_combo_timer = default_combo_timer;
        if(current_combo_state == CombeState.KICK_1)
        {
            PLAY_FLY_TWO_LEG_KICK();
        }
        if(current_combo_state == CombeState.KICK_2)
        {
            PLAY_ROUND_KICK();
            
        }

        if(current_combo_state == CombeState.KICK_3)
        {
            PLAY_RIGHT_FORWORD_KICK();
            
        }
        */
        #endregion

        #region two button setup
        ///two button change

        if (current_combo_state  == CombeState.KICK_3||
            current_combo_state == CombeState.PUNCH_6)
        {
            return;

        }

        if(current_combo_state == CombeState.NONE||
            current_combo_state == CombeState.PUNCH_1||
            current_combo_state == CombeState.PUNCH_2||
            current_combo_state == CombeState.PUNCH_3||
            current_combo_state == CombeState.PUNCH_4||
            current_combo_state == CombeState.PUNCH_5)
        {
            current_combo_state = CombeState.KICK_1;
        }
        else if(current_combo_state == CombeState.KICK_1)
        {
            current_combo_state++;
        }
        else if(current_combo_state == CombeState.KICK_2)
        {
            current_combo_state++;
        }


        activateTimerToReset = true;
        current_combo_timer = default_combo_timer;
        if(current_combo_state == CombeState.KICK_1)
        {
            PLAY_FLY_TWO_LEG_KICK();
        }
       
        if(current_combo_state == CombeState.KICK_2)
        {
            PLAY_ROUND_KICK();
        }

        if(current_combo_state == CombeState.KICK_3)
        {
            PLAY_RIGHT_FORWORD_KICK();
        }


        #endregion

    }
    #endregion

    #region combo helper funciton
    private void ResetComboState()
    {
        if (activateTimerToReset)
        {
            current_combo_timer -= Time.deltaTime;


            if (current_combo_timer <= 0.0f)
            {
                current_combo_state = CombeState.NONE;
                activateTimerToReset = false;
                current_combo_timer = default_combo_timer;
            }
        }
    }
    #endregion



}
