using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playerjoymovement : MonoBehaviour
{
    [TextArea]
	public string var = "should be attatched to the player";

	public float speed = 6.0f;
	private Vector3 MoveDirection = Vector3.zero;
	public VirtualJoystick joystickinputforplayermovement;
	public float h_joy;
	public float y_joy;
	public CharacterController playercharactercontroller;
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

	}


}