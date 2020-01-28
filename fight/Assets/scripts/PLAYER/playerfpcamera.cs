using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playerfpcamera : MonoBehaviour
{
  
	// this is the first persion camera 
	[TextArea]
	public string val = "this should be attatched to the player camera";

	public Transform playerref;
	private Vector2 fp;
	private Vector2 lp;
	private float angle;
	private float swipeDistancex;
	private float swipeDistancey;

	void Start()
	{
		transform.position  = playerref.position + new Vector3(5,1,0);
		transform.parent = playerref.transform;
	}


	void Update()
	{
/*
		for(int i = 0;i<Input.touchCount;++i)
		{
			if(Input.GetTouch(i).phase == TouchPhase.Began)
			{
				if(Input.GetTouch(i).tapCount == 2)
				{
					
				}
				if(Input.GetTouch(i).tapCount == 1)
				{
					
				}
			}
		}
*/

		// this is for the touch swipe controlling 
		foreach(Touch touch in Input.touches)
		{
			if(touch.phase == TouchPhase.Began)
			{
				fp = touch.position;
				lp = touch.position;

			}
			if(touch.phase == TouchPhase.Moved)
			{
				lp = touch.position;
				swipeDistancex = Mathf.Abs((lp.x - fp.x));
				swipeDistancey = Mathf.Abs((lp.y - fp.y));
			}
			if(touch.phase == TouchPhase.Ended)
			{
				angle = Mathf.Atan2((lp.x - fp.x) , (lp.y - fp.y)) * 57.2957795f;

				if(angle > 60 && angle < 120 && swipeDistancex > 40)
				{
					playerref.Rotate(0,45,0);

				}
				if(angle > 150 || angle <-150 && swipeDistancex > 40)
				{
					


				}

				if(angle < -60 && angle > -120 && swipeDistancex > 40)
				{
					
					playerref.Rotate(0,-45,0);
				}
				if(angle > -30 && angle < 30 && swipeDistancex > 40)
				{
					

				}
			}

		}


	}



}
