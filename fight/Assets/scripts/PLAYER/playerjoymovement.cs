 using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class playerjoymovement : ExtendedCustomMonoBehavior
{
	public tuch_inpu touch_input_script;
	public PLAYER_CAMERA_FOLLOW player_camera_follow_script;
    [TextArea]
	public string var = "should be attatched to the player";
	public float speed;
	public Vector3 MoveDirection = Vector3.zero;
	public VirtualJoystick joystickinputforplayermovement;
	public float h_joy;
	public float y_joy;
	public CharacterController playercharactercontroller;
	private float x_touch_input;
	private float init_touch_x;
	private float finals_touch_x;
	private float plyer_rot_x;
	public  float rotate_speed = 5.0f;
	private Vector3 playerrotatevector = Vector3.zero;
	public Transform camera_pos;
	public Vector3 MoveVector { set; get; }
	private void Start()
	{
		playercharactercontroller = GetComponent<CharacterController>();
	}

	private void Update()
	{
		/// this code is for the player movement with free camera 
		/// -----------------------------------------------------
		//MoveVector = PoolInput();
		//MoveVector = RotateWithView();
		//Move();
		/// -----------------------------------------------------
		


		/// this code is for the player movement with camera at back
		/// --------------------------------------------------------
		h_joy = joystickinputforplayermovement.InputDirection.x;
		y_joy = joystickinputforplayermovement.InputDirection.z;
		float yStore = MoveDirection.y;
		MoveDirection = (transform.forward * h_joy) + (-transform.right * y_joy);
		MoveDirection = MoveDirection * speed;
		MoveDirection.y = yStore;
		MoveDirection += Physics.gravity;
		playercharactercontroller.Move(MoveDirection * Time.deltaTime);
		///-----------------------------------------------------------
	}

	private void Move()
	{
		
		playercharactercontroller.Move(MoveVector * speed * Time.deltaTime);

	}

	private Vector3 PoolInput()
	{

		Vector3 dir = Vector3.zero;

		dir.x = joystickinputforplayermovement.InputDirection.x;
		dir.z = joystickinputforplayermovement.InputDirection.z;
		if (dir.magnitude > 1)
			dir.Normalize();
		return dir;
	}

	private Vector3 RotateWithView()
	{
		if(camera_pos != null)
		{
			Vector3 dir = camera_pos.TransformDirection(MoveVector);
			dir.Set(dir.x, 0, dir.z);
			return dir.normalized * MoveVector.magnitude;
		}
		else
		{
			return MoveVector;
		}
	}




}