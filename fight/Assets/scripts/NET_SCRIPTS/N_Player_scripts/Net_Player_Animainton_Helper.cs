using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace com.dhanasoftwares
{
    public class Net_Player_Animainton_Helper : MonoBehaviour
    {
        //Local variables
        Animator Networked_Player_animatior;
        
       // [Inject(InjectFrom.Anywhere)]
        public INPUT_MANAGER_FOR_PLAYER Player_Input;
    

        private static int Move_x = Animator.StringToHash("wepon_inputX");
        private static int Move_y = Animator.StringToHash("wepon_inputY");
        private static int Switch_wepon_Movement = Animator.StringToHash("P_wepon_mode");
        private static int Run_jump = Animator.StringToHash("run_jump");
        private static int Idle_jump = Animator.StringToHash("idle_jump");

        private void Start()
        {
            Networked_Player_animatior = GetComponentInChildren<Animator>();

        }
        public void PLAY_MOVE_ANIMATION()
        {
            Networked_Player_animatior.SetFloat(Move_x,Player_Input.moveVec.x);
            Networked_Player_animatior.SetFloat(Move_y,Player_Input.moveVec.z);
        }
        public void ENABLE_WEPON_MOVEMENT_ANIMATIONS()
        {
            Networked_Player_animatior.SetBool(Switch_wepon_Movement,true);
        }
        public void DISABLE_WEPON_MOVEMENT_ANIMATIONS()
        {
            Networked_Player_animatior.SetBool(Switch_wepon_Movement,false);
        }

        public void PLAY_ADVANTURE_JUMP()
        {
            Networked_Player_animatior.SetTrigger(Run_jump);
        }
        public void PLAY_WEPON_JUMP()
        {
            Networked_Player_animatior.SetTrigger(Idle_jump);
        }
    }
    
}

