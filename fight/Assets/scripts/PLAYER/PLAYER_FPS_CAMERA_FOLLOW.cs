﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PLAYER_FPS_CAMERA_FOLLOW : MonoBehaviour
{
	//this is the code about the player fps camera follow
	[TextArea]
	public string val = "this script should attatch to the fps camera";

	// reference to the player 
	public Transform player_target;

	// this are the variable for the touch detecprion

	private Vector2 fp;
	private Vector2 lp;
	private float angle;
	private float swipeDistanceX;
	private float swipeDistanceY;


	// this is the late update for the player fps move

	void Update()
	{
		foreach(Touch touch in Input.touches)
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
					player_target.Rotate(0.0f,45,0.0f);
				}
				if(angle > 150 || angle < - 150 && swipeDistanceY > 40)
				{
					transform.Rotate(ClampAngle(45,0,20),0.0f,0.0f);
				}
				if(angle < -60  && angle > -120 && swipeDistanceX > 40)
				{
					player_target.Rotate(0.0f,-45.0f,0.0f);
				}
				if(angle > -30 && angle < 30 && swipeDistanceY > 40)
				{
					transform.Rotate(ClampAngle(-45,0,20),0.0f,0.0f);
				}
			}
		
		}
	}





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




}