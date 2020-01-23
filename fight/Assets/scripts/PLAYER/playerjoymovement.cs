using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playerjoymovement : MonoBehaviour
{
	public tuch_inpu touch_input_script;
    [TextArea]
	public string var = "should be attatched to the player";
	public float speed = 6.0f;
	private Vector3 MoveDirection = Vector3.zero;
	public VirtualJoystick joystickinputforplayermovement;
	public float h_joy;
	public float y_joy;
	public CharacterController playercharactercontroller;


	private float x_touch_input;
	private float init_touch_x;
	private float finals_touch_x;
	private float plyer_rot_x;
	public  float rotate_speed = 10.0f;
	private Vector3 playerrotatevector = Vector3.zero;
	private void Start()
	{
		playercharactercontroller = GetComponent<CharacterController>();

	}

	private void Update()
	{
		h_joy = joystickinputforplayermovement.InputDirection.x;
		y_joy = joystickinputforplayermovement.InputDirection.z;

		MoveDirection = new Vector3(-y_joy,0,h_joy);
		MoveDirection = transform.TransformDirection(MoveDirection);
		MoveDirection *= speed;
		playercharactercontroller.Move(MoveDirection * Time.deltaTime);

		if(joystickinputforplayermovement.isfingeronjoystick)
		{

			if(touch_input_script.swiping)
			{
				/*
				init_touch_x  = touch_input_script.fp.x;
				finals_touch_x = touch_input_script.lp.x;
				x_touch_input = init_touch_x - finals_touch_x;
				plyer_rot_x = x_touch_input * Time.deltaTime * rotate_speed;
				transform.localEulerAngles = new Vector3(0,transform.localEulerAngles.y +plyer_rot_x,0);
				*/
			}


		}

	}


}