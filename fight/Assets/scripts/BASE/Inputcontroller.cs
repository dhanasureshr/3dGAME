using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inputcontroller : MonoBehaviour
{
	public delegate void inputcontrollerdelegate();
	public static event inputcontrollerdelegate onselected;



	public PLAYER_CAMERA_FOLLOW playercamerefollow;



	void Update()
	{
		if(tuch_inpu.touch_input_manager.swiping)
		{
			playercamerefollow.rotspeed = 0.5f;
		}
		else
		{
			playercamerefollow.rotspeed = 0.0f;
		}


	}
  


}
