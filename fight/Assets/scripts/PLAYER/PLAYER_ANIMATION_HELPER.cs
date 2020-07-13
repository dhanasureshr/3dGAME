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
        ACTION_1,
        ACTION_2,
        ACTION_3,
        ACTION_4,
        ACTION_5,
        ACTION_6,
        B_ACTION_1,
        B_ACTION_2,
        B_ACTION_3
    }



    private bool activateTimerToReset;
    private float default_combo_timer = 0.6f;
    private float current_combo_timer;
    private CombeState c_state;
    #endregion

    #region animation variables
    public  Animator player_animator_ref;
    // these are the variables for the player fighting animations
    private static int cross_ounch = Animator.StringToHash("CROSS_OUNCH");

    private static int right_hook_punch = Animator.StringToHash("RIGHT_HOOK_PUNCH");

    private static int forward = Animator.StringToHash("FORWARD");
   
    private static int punch = Animator.StringToHash("PUNCH");

    private static int punch_combo = Animator.StringToHash("PUNCH_COMBO");

    private static int quick_punch = Animator.StringToHash("QUICK_PUNCH");
    
    private static int fly_two_leg_kick = Animator.StringToHash("FLY_TWO_LEG_KICK");

    private static int round_kick = Animator.StringToHash("ROUND_KICK");

    private static int right_forword_kick = Animator.StringToHash("RIGHT_FORWORD_KICK");
    
    private static int player_body_hit = Animator.StringToHash("HIT_TO_BODY");

    private static int player_face_hit = Animator.StringToHash("PUNCH_TO_FACE");
    
    private static int player_showlder_dute = Animator.StringToHash("SHOLDER_THROW_PLAYER");

    private static int player_hell_dute = Animator.StringToHash("PLAYER_HELL_SLAMMER");
    
    private static int player_shield = Animator.StringToHash("PLAYER_SHIELD");




    // this are the variables for the player sword animations 
    private static int sword_splash1 = Animator.StringToHash("SPLASH1");

    private static int sword_splash2 = Animator.StringToHash("SPLASH2");

    private static int sword_splash3 = Animator.StringToHash("SPLASH3");

    private static int sword_splash4 = Animator.StringToHash("SPLASH4");

    private static int sword_splash5 = Animator.StringToHash("SPLASH5");

    private static int sword_attack1 = Animator.StringToHash("ATTACK1");

    private static int sword_attack2 = Animator.StringToHash("ATTACK2");

    private static int sword_attack3 = Animator.StringToHash("ATTACK3");

    private static int sword_attack4 = Animator.StringToHash("ATTACK4");

    private static int sword_casting1 = Animator.StringToHash("CAST1");

    private static int sword_casting2 = Animator.StringToHash("CAST2");


    // this are the variables for th player magic animations
    private static int magic_h_attack1 = Animator.StringToHash("M_ATTACK_H1");
    
    private static int magic_h_attack2 = Animator.StringToHash("M_ATTACK_H2");
    
    private static int magic_h_attack3 = Animator.StringToHash("M_ATTACK_H3");

    private static int magic_2h_attack1 = Animator.StringToHash("M_ATTACK_2H1");

    private static int magic_2h_attack2 = Animator.StringToHash("M_ATTACK_2H2");

    private static int magic_2h_attack3 = Animator.StringToHash("M_ATTACK_2H3");

    private static int magic_2h_attack4 = Animator.StringToHash("M_ATTACK_2H4");

    private static int magic_2h_attack5 = Animator.StringToHash("M_ATTACK_2H5");

    private static int magic_2h_a_attack1 = Animator.StringToHash("M_ATTACK_A_2H1");

    private static int magic_2h_a_attack2 = Animator.StringToHash("M_ATTACK_A_2H2");




    #endregion

    #region mono methods

    private void Start()
    {
        current_combo_timer = default_combo_timer;
        c_state = CombeState.NONE;
        player_animator_ref = GetComponent<Animator>();
        //player_animator_ref.SetLayerWeight(2, 1);
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

    public void PLAY_PLAYER_SHIELD()
    {
        player_animator_ref.SetTrigger(player_shield);
    }

    // player sword animation methods

    public void PLAY_PLAYER_SWORD_SPLASH1()
    {
        player_animator_ref.SetTrigger(sword_splash1);
    }

    public void PLAY_PLAYER_SWORD_SPLASH2()
    {
        player_animator_ref.SetTrigger(sword_splash2);
    }

    public void PLAY_PLAYER_SWORD_SPLASH3()
    {
        player_animator_ref.SetTrigger(sword_splash3);
    }

    public void PLAY_PLAYER_SWORD_SPLASH4()
    {
        player_animator_ref.SetTrigger(sword_splash4);
    }

    public void PLAY_PLAYER_SWORD_SPLASH5()
    {
        player_animator_ref.SetTrigger(sword_splash5);
    }

    public void PLAY_PLAYER_SWORD_ATTACK1()
    {
        player_animator_ref.SetTrigger(sword_attack1);
    }

    public void PLAY_PLAYER_SWORD_ATTACK2()
    {
        player_animator_ref.SetTrigger(sword_attack2);
    }

    public void PLAY_PLAYER_SWORD_ATTACK3()
    {
        player_animator_ref.SetTrigger(sword_attack3);
    }

    public void PLAY_PLAYER_SWORD_ATTACK4()
    {
        player_animator_ref.SetTrigger(sword_attack4);
    }


    public void PLAY_PLAYER_SWORD_CASTING1()
    {
        player_animator_ref.SetTrigger(sword_casting1);
    }


    // player magic animations

    public void PLAY_PLAYER_MAGIC_H_ATTACK1()
    {
        player_animator_ref.SetTrigger(magic_h_attack1);

    }

    public void PLAY_PLAYER_MAGIC_H_ATTACK2()
    {
        player_animator_ref.SetTrigger(magic_h_attack2);
    }

    public void PLAY_PLAYER_MAGIC_H_ATTACK3()
    {
        player_animator_ref.SetTrigger(magic_h_attack3);
    }

    public void PLAY_PLAYER_MAGIC_2H_ATTACK1()
    {
        player_animator_ref.SetTrigger(magic_2h_attack1);
    }

    public void PLAY_PLAYER_MAGIC_2H_ATTACK2()
    {
        player_animator_ref.SetTrigger(magic_2h_attack2);
    }

    public void PLAY_PLAYER_MAGIC_2H_ATTACK3()
    {
        player_animator_ref.SetTrigger(magic_2h_attack3);
    }
    
    public void PLAY_PLAYER_MAGIC_2H_ATTACK4()
    {
        player_animator_ref.SetTrigger(magic_2h_attack4);

    }

    public void PLAY_PLAYER_MAGIC_2H_ATTACK5()
    {
        player_animator_ref.SetTrigger(magic_2h_attack5);
    }

    public void PLAY_PLAYER_MAGIC_2H_A_ATTACK1()
    {
        player_animator_ref.SetTrigger(magic_2h_a_attack1);
    }

    public void PLAY_PLAYER_MAGIC_2H_A_ATTACK2()
    {
        player_animator_ref.SetTrigger(magic_2h_a_attack2);
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

    #region player mechanm fighting functions


    public void PUNCH1_BUTTON_PRESSED()
    {



        #region two button setup
        ///two button change;
        ///

        /*
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

    */


        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        c_state = action_button_one_combo_state_determiner(this.c_state);
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        ///







        if (c_state == CombeState.ACTION_1)
        {
            PLAY_CROSS_OUNCH();
        }

        if (c_state == CombeState.ACTION_2)
        {
            PLAY_RIGHT_HOOK_PUNCH();
        }

        if (c_state == CombeState.ACTION_3)
        {
            PLAY_FORWARD();
        }

        if (c_state == CombeState.ACTION_4)
        {
            PLAY_PUNCH();
        }

        if (c_state == CombeState.ACTION_5)
        {
            PLAY_PUNCH_COMBO();
        }

        if (c_state == CombeState.ACTION_6)
        {
            PLAY_QUICK_PUNCH();
        }




        #endregion
    }


    public void KICK_BUTTON_PRESSED()
    {

        #region two button setup
        ///two button change

        /*
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

    */

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
         c_state   = action_button_two_combo_state_determiner(this.c_state);
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


        if (c_state == CombeState.B_ACTION_1)
        {
            PLAY_FLY_TWO_LEG_KICK();
        }

        if (c_state == CombeState.B_ACTION_2)
        {
            PLAY_ROUND_KICK();
        }

        if (c_state == CombeState.B_ACTION_3)
        {
            PLAY_RIGHT_FORWORD_KICK();
        }


        #endregion

    }

    public void FIGHTING_SHIELD_BUTTON_PRESSED()
    {
        PLAY_PLAYER_SHIELD();
        StartCoroutine(Disable_player_shield_protection());
    }

    #endregion

    #region player  sward fighting functions

    public void SWARD_BUTTON1_PRESSED()
    {
        c_state = action_button_one_combo_state_determiner(this.c_state);

        if(c_state == CombeState.ACTION_1)
        {
            PLAY_PLAYER_SWORD_SPLASH1();
        }

        if(c_state == CombeState.ACTION_2)
        {
            PLAY_PLAYER_SWORD_SPLASH2();
        }

        if(c_state == CombeState.ACTION_3)
        {
            PLAY_PLAYER_SWORD_SPLASH3();
        }

        if(c_state == CombeState.ACTION_4)
        {
            PLAY_PLAYER_SWORD_SPLASH4();
        }


        if(c_state == CombeState.ACTION_5)
        {
            PLAY_PLAYER_SWORD_SPLASH5();
        }

        if(c_state == CombeState.ACTION_6)
        {
            PLAY_PLAYER_SWORD_ATTACK1();

        }


    }

    public void SWARD_BUTTON2_PRESSED()
    {
        c_state = action_button_two_combo_state_determiner(this.c_state);
        if(c_state == CombeState.B_ACTION_1)
        {
            PLAY_PLAYER_SWORD_ATTACK2();
        }

        if(c_state == CombeState.B_ACTION_2)
        {
            PLAY_PLAYER_SWORD_ATTACK3();
        }
    }


    public void SWARD_SHIELD_BUTTON_PRESSED()
    {
        StartCoroutine(Disable_player_shield_protection());
    }

    public void PLAY_PLAYER_SWORD_CASTING_ANIMATION()
    {
        PLAY_PLAYER_SWORD_CASTING1();
    }

    #endregion

    #region player magic fighting functions
    public void MAGIC_BUTTON1_PRESSED()
    {
        c_state = action_button_one_combo_state_determiner(c_state);

        if (c_state == CombeState.ACTION_1)
        {
            PLAY_PLAYER_MAGIC_2H_ATTACK2();

        }

        if (c_state == CombeState.ACTION_2)
        {
            PLAY_PLAYER_MAGIC_H_ATTACK2();
        }

        if (c_state == CombeState.ACTION_3)
        {
            PLAY_PLAYER_MAGIC_2H_ATTACK1();
        }

        if (c_state == CombeState.ACTION_4)
        {
            PLAY_PLAYER_MAGIC_H_ATTACK1();
        }


        if (c_state == CombeState.ACTION_5)
        {
            PLAY_PLAYER_MAGIC_2H_ATTACK3();
        }

        if (c_state == CombeState.ACTION_6)
        {
            PLAY_PLAYER_MAGIC_2H_ATTACK4();

        }


    }

    public void MAGIC_BUTTON2_PRESSED()
    {
        c_state = action_button_two_combo_state_determiner(this.c_state);
        if (c_state == CombeState.B_ACTION_1)
        {
            PLAY_PLAYER_MAGIC_2H_ATTACK5();
        }

        if (c_state == CombeState.B_ACTION_2)
        {
            PLAY_PLAYER_MAGIC_H_ATTACK3();

        }
    }

    public void PLAY_PLAYER_MAGIC_AREA_ANIMATIONS(int n)
    {
        if(n == 0)
        {
            PLAY_PLAYER_MAGIC_2H_A_ATTACK1();
        }
        
        if(n == 1)
        {
            PLAY_PLAYER_MAGIC_2H_A_ATTACK2();
        }

    }



    #endregion

    #region prayer ACTION  COMMON functions

    public CombeState action_button_one_combo_state_determiner(CombeState c_state)
    {
        if (this.c_state == CombeState.ACTION_6 ||
           this.c_state == CombeState.B_ACTION_1 ||
           this.c_state == CombeState.B_ACTION_2 ||
           this.c_state == CombeState.B_ACTION_3)
        {
            return this.c_state;
        }
        this.c_state++;
        activateTimerToReset = true;
        current_combo_timer = default_combo_timer;
        return this.c_state;
    }


    public CombeState action_button_two_combo_state_determiner(CombeState c_state)
    {

        if (this.c_state == CombeState.B_ACTION_3 ||
             this.c_state == CombeState.ACTION_6)
        {
            return this.c_state;

        }

        if (this.c_state == CombeState.NONE ||
            this.c_state == CombeState.ACTION_1 ||
            this.c_state == CombeState.ACTION_2 ||
            this.c_state == CombeState.ACTION_3 ||
            this.c_state == CombeState.ACTION_4 ||
            this.c_state == CombeState.ACTION_5)
        {
            this.c_state = CombeState.B_ACTION_1;
        }
        else if (this.c_state == CombeState.B_ACTION_1)
        {
            this.c_state++;
        }
        else if (this.c_state == CombeState.B_ACTION_2)
        {
            this.c_state++;
        }


        activateTimerToReset = true;
        current_combo_timer = default_combo_timer;

        return this.c_state;
    }

    public IEnumerator Disable_player_shield_protection()
    {
        yield return new WaitForSeconds(4);
        gameObject.GetComponent<playermanager>().Enable_player_collider_layer();
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
                c_state = CombeState.NONE;
                activateTimerToReset = false;
                current_combo_timer = default_combo_timer;
            }
        }
    }
    #endregion

}
