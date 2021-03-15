using UnityEngine;
using UnityEngine.InputSystem;



public class INPUT_MANAGER_FOR_PLAYER : ExtendedCustomMonoBehavior
{
    public InputAction fire;
    public Vector3 moveVec;
    public Vector3 lookVec;
    public bool jump;

    public Vector2 d;

    PlayeInputActions player_input_actions;
    
    public player_fighting_ui_controller_method b;

    #region player action responce methods with out player input component with c# object 
    private void Awake()
    {
        player_input_actions = new PlayeInputActions();

        player_input_actions.Player.Movement.performed += x=> inputvac = x.ReadValue<Vector2>();
        player_input_actions.Player.Movement.canceled += x=> inputvac = new Vector2(0,0);

        // this is the player input method to handle different type of input actions

        player_input_actions.Player.Look.performed += x=>d =x.ReadValue<Vector2>();
        player_input_actions.Player.Look.canceled += x=> d = new Vector2(0,0);
      
        
        player_input_actions.Player.Jump.performed += x => Jump();

        player_input_actions.Player.Fire.performed += x => f1sire();

        player_input_actions.Player.Fire2.performed += x => f2sire();

        player_input_actions.Player.Fire3.performed += x =>f3sire();

        player_input_actions.Player.Fire4.performed += x => f4sire();

        
        player_input_actions.Enable();

    }


    public void f1sire()
    {
        Debug.Log("ok dhana player is fighting");

        b.OnPunchButtonPressed();
        
        
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
        moveVec = new Vector3(inputvac.x,0,inputvac.y);

        lookVec = new Vector3(d.x,0,d.y);

        Debug.Log(lookVec);
        
    
      
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

    #region private variables
    private Vector2 inputvac; // for temperarly storing the input value
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