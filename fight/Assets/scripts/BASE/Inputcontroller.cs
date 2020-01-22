using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inputcontroller : MonoBehaviour
{
	public delegate void inputcontrollerdelegate();
	public static event inputcontrollerdelegate onselected;



	public PLAYER_CAMERA_FOLLOW playercamerefollow;

	private tuch_inpu touch_input_script;

	public void Start()
	{
		touch_input_script = gameObject.GetComponent<tuch_inpu>();
	}

	void Update()
	{
		if(touch_input_script.swiping)
		{
			playercamerefollow.rotspeed = 0.5f;
		}
		else
		{
			playercamerefollow.rotspeed = 0.0f;
		}
	}
  


}
