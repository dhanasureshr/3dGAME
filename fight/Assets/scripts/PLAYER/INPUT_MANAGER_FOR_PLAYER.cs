using UnityEngine;
using UnityEngine.InputSystem;



public class INPUT_MANAGER_FOR_PLAYER : ExtendedCustomMonoBehavior
{
    
    #region private variables
    // for temperarly storing the input value
    private Vector2 inputmvac;
    private Vector2 inputlvac;

    #endregion
    public InputAction fire;
    public Vector3 moveVec;
    public Vector3 lookVec;
    public bool jump;

    public bool f = false;

    public bool is_finger_on_move_joystick = false;

    public bool is_finger_on_look_joystick = false;

    public Vector2 d;

    PlayeInputActions player_input_actions;
    
    public player_fighting_ui_controller_method b;

    #region player action responce methods with out player input component with c# object 
    private void Awake()
    {
        player_input_actions = new PlayeInputActions();

        player_input_actions.Player.Movement.performed += x=> Get_move_input(x);
        player_input_actions.Player.Movement.canceled += x=> Remove_move_input();

        // this is the player input method to handle different type of input actions

        player_input_actions.Player.Look.performed += x=> Get_look_input(x);
        player_input_actions.Player.Look.canceled += x=> Remove_look_input();
      
        
        player_input_actions.Player.Jump.performed += x => Jump();

        player_input_actions.Player.Fire.performed += x => f1sire();

        player_input_actions.Player.Fire2.performed += x => f2sire();

        player_input_actions.Player.Fire3.performed += x =>f3sire();

        player_input_actions.Player.Fire4.performed += x => f4sire();
        player_input_actions.Player.Fire.canceled += x => f = false;

        player_input_actions.Enable();

    }

    public void Get_move_input(InputAction.CallbackContext c)
    {
        inputmvac = c.ReadValue<Vector2>();
        is_finger_on_move_joystick = true;

    }

    public void Remove_move_input()
    {
        inputmvac = new Vector2(0,0);
        is_finger_on_move_joystick = false;
    }

    public void Get_look_input(InputAction.CallbackContext c)
    {
        inputlvac = c.ReadValue<Vector2>();
        is_finger_on_look_joystick = true;
    }
    public  void Remove_look_input()
    {
        inputlvac = new Vector2(0,0);
        is_finger_on_look_joystick = false;
    }
    public void f1sire()
    {
        Debug.Log("ok dhana player is fighting");

        b.OnPunchButtonPressed();
        f = true;
        
    }
    public void f2sire()
    {
        b.OnKickButtonPressed();
    }

    public void f3sire()
    {
        b.On_Dute_Animation();
    }

    public void f4sire()
    {
        b.On_shield_button_pressed();
    }
    public void Update()
    {
        // reading movement input
        moveVec = new Vector3(inputmvac.x,0,inputmvac.y);
        // reading look input
        lookVec = new Vector3(inputlvac.x,0,inputlvac.y);
    }
    private void Jump()
    {
        jump = true;
    }
    private void OnEnable()
    {
        player_input_actions.Enable();
    }

    private void OnDisable()
    {
        player_input_actions.Disable();

    }

    #endregion


    
    #region general player input methods for the player input component
/*

    public void OnFire()
    {
        Debug.Log("player is fireing dhana from new input system ok");
    }

    public void OnMove(InputValue input)
    {
        inputvac = input.Get<Vector2>();

        moveVec = new Vector3(inputvac.x,0,inputvac.y);
    }
    public void OnLook(InputValue input)
    {
        inputvac = input.Get<Vector2>();
        lookVec = new Vector3(inputvac.x,0,inputvac.y);
    }

   public void OnJump()
   {
       jump = true;
   }

   */
    #endregion



}