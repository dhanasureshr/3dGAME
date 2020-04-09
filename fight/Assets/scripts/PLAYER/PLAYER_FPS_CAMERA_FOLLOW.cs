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
	public camera_switch_ui_script camera_switch_ui_script_ref;
	public PLAYER_CAMERA_FOLLOW player_camer_follow;
	#endregion

	#region start method
	void Start()
	{
		transform.parent = player_target.transform;
		transform.position = player_target.position;
		transform.rotation = player_target.rotation;
		player_target.rotation = camera_switch_ui_script_ref.fps_camera_pivot.rotation; // changed to fps from tps
	}
	#endregion
	// this is the late update for the player fps move
	#region LateUpdate
	void LateUpdate()
	{
		transform.parent = player_target.transform;
		transform.position = camera_switch_ui_script_ref.fps_camera_pivot.position;
		transform.rotation = camera_switch_ui_script_ref.fps_camera_pivot.rotation;
		foreach (Touch touch in Input.touches)
		{
			if(touch.phase == TouchPhase.Began)
			{
				fp  = touch.position;
				lp = touch.position;

			}
			if(touch.phase == TouchPhase.Moved)
			{
				lp = touch.position;
				swipeDistanceX = Mathf.Abs((lp.x - fp.x));
				swipeDistanceY = Mathf.Abs((lp.y - fp.y));

			}
			
			if(touch.phase == TouchPhase.Ended)
			{
				angle = Mathf.Atan2((lp.x - fp.x),(lp.y - fp.y)) * 57.2957795f;
				if(angle > 60 && angle < 120 && swipeDistanceX > 40)
				{
					player_target.Rotate(0.0f,25,0.0f);
				}
				if(angle > 150 || angle < - 150 && swipeDistanceY > 40)
				{
					
				}
				if(angle < -60  && angle > -120 && swipeDistanceX > 40)
				{
					player_target.Rotate(0.0f,-25.0f,0.0f);
				}
				if(angle > -30 && angle < 30 && swipeDistanceY > 40)
				{
					
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
