using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PLAYER_FPS_CAMERA_FOLLOW : ExtendedCustomMonoBehavior
{
	//this is the code about the player fps camera follow
	[TextArea]
	public string val = "this script should attatch to the fps camera";
	
	#region variables
	// reference to the player 

    public Transform player_target;
	// this are the variable for the touch detecprion
	private Vector2 fp;
	private Vector2 lp;
	private float angle;
	private float swipeDistanceX;
	private float swipeDistanceY;
	[Inject(InjectFrom.Anywhere)]
	public camera_switch_ui_script camera_switch_ui_script_ref;
	[Inject(InjectFrom.Anywhere)]
	public PLAYER_CAMERA_FOLLOW player_camer_follow;
	
	[Inject(InjectFrom.Anywhere)]
	public playermanager main_player;

	[Inject(InjectFrom.Anywhere)]
	public VirtualJoystick virtual_joystick_access_for_fps;

	//[Inject(InjectFrom.Anywhere)]
	//public tuch_inpu touch_input;



	private Rect TopRight;
	private Rect bottom_Right;


	#endregion
	

	#region camera vertical rotation variables
	public float rotatspeed = 10.0f;
	public int invertpitch = 1;
	private float pitch = 0.0f, raw = 0.0f;




    #endregion

    #region start method
    void Start()
	{
		player_target = main_player.gameObject.GetComponent<Transform>();
		transform.parent = player_target.transform;
		transform.position = player_target.position;
		transform.rotation = player_target.rotation;
		player_target.rotation = camera_switch_ui_script_ref.fps_camera_pivot.rotation; // changed to fps from tps
		
		TopRight = new Rect(0,Screen.height /2,Screen.width/2,Screen.height/2);
		bottom_Right = new Rect(Screen.width/2,0,Screen.width/2,Screen.height/2);
	}
	#endregion
	// this is the late update for the player fps move

	public void Update()
	{
		///featur plan
		///hear before rotating the player we should check whether the is fingeron joystick    
		/// if the finger on joystick then we should not run the below code;
		//if (!virtual_joystick_access_for_fps.isfingeronjoystick)
		//{
			//if (Input.touchCount == 1)
			//{
			//	Touch toucho = Input.GetTouch(0);
			//	if (toucho.phase == TouchPhase.Moved)
			//	{
			//		if (TopRight.Contains(toucho.position) || bottom_Right.Contains(toucho.position))
			//		{
			//			player_target.Rotate(0.0f, tuch_inpu.touch_input_manager.swiping_value, 0.0f);
			//		}
			//	}
			//}
		//}

	}

	#region LateUpdate
	void LateUpdate()
	{
		transform.parent = player_target.transform;
	    transform.position = camera_switch_ui_script_ref.fps_camera_pivot.position;
		
		transform.rotation = camera_switch_ui_script_ref.fps_camera_pivot.rotation;

		if (Input.touchCount == 1)
		{
			Touch toucho = Input.GetTouch(0);
			if (toucho.phase == TouchPhase.Moved)
			{
				if (bottom_Right.Contains(toucho.position))
				{
					//player_target.Rotate(0.0f, tuch_inpu.touch_input_manager.swiping_value, 0.0f);
					pitch -= Input.GetTouch(0).deltaPosition.y * rotatspeed * invertpitch * Time.deltaTime;
					raw += Input.GetTouch(0).deltaPosition.x * rotatspeed * invertpitch * Time.deltaTime;

					pitch = Mathf.Clamp(pitch, -80, 80);
				    player_target.transform.eulerAngles = new Vector3(pitch, raw, 0.0f);
				
				}
			}
		}
		
	}

	#endregion
	// this is the calampAngles script
	#region ClampAngle
	public float ClampAngle(float angle,float min,float max)
	{
		if(angle < -360f)
		{
			angle += 360f;
		}
		if(angle > 360f)
		{
			angle -= 360f;
		}
		return Mathf.Clamp(angle, min, max);
	}
    #endregion


}

