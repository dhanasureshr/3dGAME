using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class tuch_inpu : ExtendedCustomMonoBehavior
{
    //touch input manager class
    #region public variables for the touch_input code

    public static tuch_inpu touch_input_manager;

	//public PLAYER_CAMERA_FOLLOW playercamerefollow;

    // public functions for accessing the touch input class
   [HideInInspector] public bool swipe_up = false;
   [HideInInspector] public bool swipe_down = false;
   [HideInInspector] public bool swipe_right = false;
   [HideInInspector] public bool swipe_left = false;
   [HideInInspector] public bool swiping = false;
   [HideInInspector] public bool touchbegin = false;
   [HideInInspector] public bool touchended = false;
   [HideInInspector] public float swiping_value = 0.0f;

	// this is the code to check the touch detect distance
	[HideInInspector] public Vector2 deltaPosition;

    // this are the variables for the tuch positions 
   [HideInInspector] public float bigin_x_tuch;
   [HideInInspector] public float bigin_y_tuch;
   [HideInInspector] public float end_x_tuch;
   [HideInInspector] public float end_y_tuch;

    //this are the variables for joystic input
   [HideInInspector] public float X_INPUT;
   [HideInInspector] public float Y_INPUT;



    public Touch touch;

   // this is the class for the checking the touch swipe input

   [HideInInspector] public Vector3 fp; // first touch position
   [HideInInspector] public Vector3 lp; // last touch position
   [HideInInspector] public float dragDistance; // the minimum distance of the swipe to be restricted


    #endregion 



    // this code is about the singelton for the tuch_inpu
    #region singletone code

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
    #endregion
    
    //this is the code to initilze some variables for the touch input detection 
    #region start to initilize
    public void Start()
    {
        dragDistance = Screen.height * 2 / 100; //here i seted the dragDistance to 15% of the screen height

    }

    #endregion



    //  now i am checking the touch input 

    #region update to check the touch input
    public void Update()
    {
        if(gamemanager.instance.isinputallowed)
        {
            
            if(Input.touchCount == 1) // user is touching the screen with the single finger
            {
                touch = Input.GetTouch(0); //get that touch
                if(touch.phase == TouchPhase.Began) // checking for the first touch 
                {
                    touchbegin = true;
                    fp = touch.position;
                    lp = touch.position;
                    swiping = false;

                }else if(touch.phase == TouchPhase.Moved)//updated the last posistion where the touch touch begain
                {




                    

                    if (Input.touchCount == 1)
                    {
                        Touch toucho = Input.GetTouch(0);
                        if (toucho.phase == TouchPhase.Moved)
                        {
                            //  player_target.Rotate(0.0f, toucho.deltaPosition.x, 0.0f);
                            swiping_value =  toucho.deltaPosition.x;
                        }

                    }


                    lp = touch.position;
                    swiping = true;
                }
                else if(touch.phase == TouchPhase.Ended)//user has removed his finger from the screen
                {
                
                    touchended = true;
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
                                
                                swipe_right = true;
                                swipe_down = false;
                                swipe_left = false;
                                swipe_up = false;


                            }
                            else
                            {
                            
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
                            
                                swipe_up = true;
                                swipe_down = false;
                                swipe_left = false;
                                swipe_right = false;
                                
                            }
                            else
                            {
                                
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
        }


    }
    #endregion


    
}
