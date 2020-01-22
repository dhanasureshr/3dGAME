using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class tuch_inpu : MonoBehaviour {
    //touch input manager class
    public static tuch_inpu touch_input_manager;

	public PLAYER_CAMERA_FOLLOW playercamerefollow;

    // public functions for accessing the touch input class
    public bool swipe_up = false;
    public bool swipe_down = false;
    public bool swipe_right = false;
    public bool swipe_left = false;
    public bool swiping = false;

	// this is the code to check the touch detect distance
	public Vector2 deltaPosition;

    // this are the variables for the tuch positions 
    public float bigin_x_tuch;
    public float bigin_y_tuch;
    public float end_x_tuch;
    public float end_y_tuch;

    //this are the variables for joystic input
    public float X_INPUT;
    public float Y_INPUT;

    public VirtualJoystick joystic_input;


      
    // this is the class for the checking the touch swipe input

    public Vector3 fp; // first touch position
    public Vector3 lp; // last touch position
    public float dragDistance; // the minimum distance of the swipe to be restricted
    public void Awake()
    {
        creat_singel_ton();
    }

    void creat_singel_ton()
    {
        if(touch_input_manager != null)
        {
            Destroy(gameObject);
        }
        else
        {
            touch_input_manager = this;
            DontDestroyOnLoad(gameObject);
        }
    }
    public void Start()
    {
        dragDistance = Screen.height * 2 / 100; //here i seted the dragDistance to 15% of the screen height

    }


    //  now i am checking the touch input 
    public void Update()
    {
        if(Input.touchCount == 1) // user is touching the screen with the single finger
        {
            Touch touch = Input.GetTouch(0); //get that touch
            if(touch.phase == TouchPhase.Began) // checking for the first touch 
            {
                fp = touch.position;
                lp = touch.position;
                swiping = false;

            }else if(touch.phase == TouchPhase.Moved)//updated the last posistion where the touch touch begain
            {
            
				playercamerefollow.rotspeed = 0.5f;

                lp = touch.position;
                swiping = true;
            }
            else if(touch.phase == TouchPhase.Ended)//user has removed his finger from the screen
            {
               // swipe_up = false;
                //swipe_down = false;
               // swipe_right = false;
               // swipe_left = false;
				playercamerefollow.rotspeed = 0.0f;
                swiping = false;
                lp = touch.position; // last touch positon

                //now checking the drag distance to minimum drag distance
                if (Mathf.Abs(lp.x - fp.x) > dragDistance || Mathf.Abs(lp.y - fp.y) > dragDistance)
                {
                    // now i am checking the horizontal movement is grater than vertical movement
                    if(Mathf.Abs(lp.x - fp.x) > Mathf.Abs(lp.y - fp.y))
                    {
                        //if the horizontal movement is grater than the vertical movement
                        // now i am checking if the movement was to the right
                        if(lp.x > fp.x)
                        {
                            //print("swiping right");
                            swipe_right = true;
                            swipe_down = false;
                            swipe_left = false;
                            swipe_up = false;


                        }
                        else
                        {
                            //print("swiping left");
                            swipe_left = true;
                            swipe_right = false;
                            swipe_down = false;
                            swipe_up = false;
                        }

						swipe_right = false;
						swipe_left = false;

                    }
                    else
                    {
                        // the vertical movement is grater than horizontla movement
                        if(lp.y > fp.y) // the movement is up are not
                        {
                            //print("swiping up");
                            swipe_up = true;
                            swipe_down = false;
                            swipe_left = false;
                            swipe_right = false;
                            
                        }
                        else
                        {
                            //print("swiping down");
                            swipe_down = true;
                            swipe_up = false;
                            swipe_right = false;
                            swipe_left = false;
                        }
						swipe_up = false;
						swipe_down = false;
                    }
                }
                else
                {
                    //print("user taped the screen");
                    swipe_up = false;
                    swipe_down = false;
                    swipe_right = false;
                    swipe_left = false;
 
                }
            }

        }

        //X_INPUT = joystic_input.InputDirection.x;
        //Y_INPUT = joystic_input.InputDirection.z;


    }

}
