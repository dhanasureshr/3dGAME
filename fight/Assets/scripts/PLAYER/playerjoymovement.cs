 using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class playerjoymovement : ExtendedCustomMonoBehavior
{
	// this is paramaters section
    #region player movement paramaters
    // this are for the player movement with joustick without animations
	[Inject(InjectFrom.Anywhere)]
	public PLAYER_CAMERA_FOLLOW player_camera_follow_script;
    [TextArea]
	public string var = "should be attatched to the player";
	public float speed;
	[HideInInspector] public Vector3 MoveDirection = Vector3.zero;
	//public VirtualJoystick joystickinputforplayermovement;///
	[Inject(InjectFrom.Anywhere)]
	public VirtualJoystick virtual_joystick_access;
	
	[HideInInspector] public float h_joy;
	[HideInInspector] public float y_joy;
	[HideInInspector] private CharacterController playercharactercontroller;
	private float plyer_rot_x;
	public  float rotate_speed = 5.0f;
	private Vector3 playerrotatevector = Vector3.zero;
	//[HideInInspector] public Transform camera_pos;
	
    #endregion

    #region player_movement animation paramaters
    // these are animation paramaters for player basic movement
    [HideInInspector] private Animator player_animator;
	private static int horthash = Animator.StringToHash("X");
	private static int verthash = Animator.StringToHash("Y");
	#endregion
    // this is for game functions
    #region start for player coimponent references
    private void Start()
	{
		playercharactercontroller = GetComponent<CharacterController>();
		///////////////////////////////////////////////player_animator = GetComponentInChildren<Animator>();

		player_animator = GetComponent<Animator>();


		//camera_pos = player_camera_follow_script.gameObject.GetComponent<Transform>();
	}
    #endregion

    #region player movement updater

    private void Update()
	{
		/// this code is for the player movement with camera at back
		/// --------------------------------------------------------
		h_joy = virtual_joystick_access.InputDirection.x;
		y_joy = virtual_joystick_access.InputDirection.z;
		float yStore = MoveDirection.y;
		MoveDirection = new Vector3(h_joy, 0, y_joy);
		MoveDirection = transform.TransformDirection(MoveDirection);
		////////////////MoveDirection = Camera.main.transform.TransformDirection(MoveDirection);
		/////===========================================================
		MoveDirection = MoveDirection * speed;
		MoveDirection += Physics.gravity;
		playercharactercontroller.Move(MoveDirection * Time.deltaTime);
		///-----------------------------------------------------------
		player_animator.SetFloat(horthash, h_joy,0.1f,Time.deltaTime);
		player_animator.SetFloat(verthash, y_joy,0.1f,Time.deltaTime);
	}

    #endregion



}