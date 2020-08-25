using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class PLAYER_CAMERA_FOLLOW : ExtendedCustomMonoBehavior
{

    /*
	 *  this is the script that manages the camara collision 
	 * 
	 * 								&&
	 * 
	 * By depending up the player state it will manage the camara movement 
	 *by changing the state from "movement_camera" to "around_the_player_camera" 
	 *
	 * 
	 * 
	 * 
	 * */
    #region variables
    // new ********************************


    private Rigidbody camera_rigid_body;
   
   [HideInInspector] public float rotx = 0.0f;
   [HideInInspector] public float roty = 0.0f;
   [HideInInspector] public Vector3 origrot;
   [HideInInspector] public float rotspeed = 0.2f;
   [HideInInspector] public float dir = -1;
   [HideInInspector] public float inittouch_x;
   [HideInInspector] public float inittouch_y;
   [HideInInspector] public float finaltouch_x;
   [HideInInspector] public float finaltouch_y;
    //new *************************************
    [HideInInspector]
    public Transform target;
    [HideInInspector]
    public GameObject player_fps_target;
   // public Transform look_target;
   [HideInInspector] public int targetframe = 75;
    //this are for the caera collision detection
    private float thinRadius = 0.30f; //0.15f //0.30f
    private float thickRadius = 0.9f; //0.3f  //0.9f
    private float distance = 10.0f; //DEFAULT 10.0f
    
    [Tooltip("LayerMask used for detecting camera collision"),SerializeField]
    private LayerMask layermask;
    private float distanceMin = 1f; //1   
    private float distanceMax = 5f;//DEFAULT 5   
    private object hit;
   // private float xspeed = 1.0f;
    //private float yspeed = 1.0f;
   // private float yMinLimit = 10f;
    //private float yMaxLimit = 20f; //DEFAULT 80
    //private float xMinLimit = -360f;
    //private float xMaxLimit = 360;
    private Quaternion rotation;
    private Vector3 position;
    [HideInInspector] public Vector3 positions;
    private float x = 0.0f;
    private float y = 0.0f;
	// this is the end of the camera collision varables
	[HideInInspector] public bool useOffsetValue;
	[HideInInspector] public Vector3 offset;
	[HideInInspector] public Vector3 camjoyrotateinput = Vector3.zero;
	Quaternion targetrotation;
	public float speed;
    // this is for the movement camera controller variables
    [HideInInspector]
    public Transform pivot;
    [HideInInspector]
    public GameObject camera_pivot;
    // this is for the fighting camera movement enabler variable
    [HideInInspector] public bool is_player_fighting = false;
    protected float cameraAngle;
    protected float cameraAnglespeed = 1.0f; // DEFAULT 2.0F
    [HideInInspector] public float deltax;
    [HideInInspector] public float deltay;
    #endregion


    [Inject(InjectFrom.Anywhere)]
    public playermanager main_player;

    [Inject(InjectFrom.Anywhere)]
    public camera_switch_ui_script ui_script_ref;

    [Inject(InjectFrom.Anywhere)]
    public VirtualJoystick virtual_joystick_access;


    #region start metheod for initilization
    private void Start()
    {
        camera_rigid_body = gameObject.GetComponent<Rigidbody>();
        gameObject.transform.parent = null;
        Vector3 angles = this.transform.eulerAngles;
        x = angles.y;
        y = angles.x;
       // QualitySettings.vSyncCount = 0;
        if (!useOffsetValue)
        {

            pivot = main_player.gameObject.GetComponent<Transform>();
            player_fps_target = GameObject.FindWithTag("player_pivot");
            target = player_fps_target.GetComponent<Transform>();
            offset = target.position - transform.position;
            // this is for the movement camer controller code
            pivot.transform.position = target.transform.position;
            pivot.transform.parent = target.transform;
            transform.position = pivot.position;
            transform.rotation = pivot.rotation;
            
        }
        
       
    }
    #endregion
    
    /*
    //this is the fixedupdate and lateUPdate function in which camera movement around player and camera collision occurs
    #region FixedUpdate
    private void FixedUpdate()
    {
        if(Application.targetFrameRate != targetframe)
        {
           Application.targetFrameRate = targetframe;
        }
    }
    #endregion
    
    
    public void Update()
    {
        if (virtual_joystick_access.isfingeronjoystick)
        {
            if (Input.touchCount == 1)
            {
                Touch toucho = Input.GetTouch(0);
                if (toucho.phase == TouchPhase.Moved)
                {
                    pivot.Rotate(0.0f, tuch_inpu.touch_input_manager.swiping_value *(speed) * Time.deltaTime, 0.0f);

                }
            }
        }
    }
    
*/

    #region LateUpdate
    private void LateUpdate()
    {
        gameObject.transform.parent = null;

        if (virtual_joystick_access.isfingeronjoystick)
        {
            if (Input.touchCount == 1)
            {
                Touch toucho = Input.GetTouch(0);
                if (toucho.phase == TouchPhase.Moved)
                {
                    pivot.Rotate(0.0f, tuch_inpu.touch_input_manager.swiping_value * (speed) * Time.deltaTime, 0.0f); 

                }
            }
        }

        if (target)
        {
            
			if(tuch_inpu.touch_input_manager.swiping)
			{
				rotspeed = 0.5f;
			}
			else
			{
				rotspeed = 0.0f;
			}
            if (virtual_joystick_access.isfingeronjoystick)
            {
                ////////=====================================================================
                ///if you enable the below lines of code menas 
                ///the camera will move free from player
                //code no 1
                // float horizontal = virtual_joystick_access.InputDirection.x *(speed);
                //float vertical = virtual_joystick_access.InputDirection.y * (speed);


                // pivot.Rotate(0, horizontal, 0); ///////////desabled for player_rot test
                ///





                // float desiredYAngle = target.eulerAngles.y; ////////////////////////////////this is the testing code be celly :-)
                // float desiredXAngle = pivot.eulerAngles.x; ////////////////////////////////this is the testing code be celly :-)
                //  Quaternion rotations = Quaternion.Euler(0,transform.rotation.y , 0); ////////////////////////////////this is the testing code be celly :-)
                // transform.rotation = rotations;

                // transform.LookAt(target);  ////////////////////////////////this is the testing code be celly :-)

                transform.LookAt(target);

            }
            else
            {
                    CameraMovementAroundPlayer();
                    rotation = Quaternion.Euler(rotx, roty, 0);
                    rotation = rotation.normalized;
                    if (distance < distanceMax)
                    {
                     //distance = Mathf.Lerp(distance+3, distanceMax, Time.deltaTime);// *1f); //10f
                    distance = Mathf.Lerp(distance+3, distanceMax ,2); //2f
                    }
                    Vector3 distanceVector = new Vector3(0.0f, 0.0f, -distance);//(0.0f,1.0f,-distance)  ////////////////////////////////this is the testing code be celly :-)
                positions = rotation * distanceVector + target.position;
                
                                                            transform.rotation = rotation; 
                                                        transform.position = positions;  //+ new Vector3(0.0f,-1f,-1f);
                    //camera_rigid_body.AddForce(position);
                                                           transform.LookAt(target);
            }
            
            
            

        }
        CameraCollision();
    }
    #endregion

    //this is the code for the camera movement with respective to the player
    #region CameraMovementAroundPlayer script
    public void CameraMovementAroundPlayer()
    {
        //new **********************************
        inittouch_x = tuch_inpu.touch_input_manager.fp.x;
        inittouch_y = tuch_inpu.touch_input_manager.fp.y;
        finaltouch_x = tuch_inpu.touch_input_manager.lp.x;
        finaltouch_y = tuch_inpu.touch_input_manager.lp.y;
       
        deltax = inittouch_x - finaltouch_x;
        deltay = inittouch_y - finaltouch_y;
        rotx -= deltay * Time.deltaTime * rotspeed * dir;
        roty -= deltax * Time.deltaTime * rotspeed * dir;
        rotx = Mathf.Clamp(rotx, -15.0f, 10f); //-30.0f,30.0f //-15.0f,10f
       
    }
    #endregion

    // this is the code  for clamping the angles between the x and y for the camera movement 
    #region ClampAgle script
    public float ClampAngle(float angle,float min,float max)
    {
        if(angle < -45f)
        {
            angle += 45f;
        }
        if(angle > 45f)
        {
            angle -= 45f;
        }
        return Mathf.Clamp(angle, min, max);
    }
    #endregion

    // this is for the CameraCollision script
    #region CameraCollision script
    public void CameraCollision()
    {
        // difining the variables for the calculation
        Vector3 normal, thicknormal;
        Vector3 ray = transform.position - target.position; // target.position
        //calculation the points 
        Vector3 collisionPoint = GetDoubleSphereCastCollision(transform.position , thinRadius, out normal, true);
        Vector3 collisionPointThick = GetDoubleSphereCastCollision(transform.position, thickRadius, out thicknormal, false);
        Vector3 collisionPointRay = GetRayCollisionPoint(transform.position);
        Vector3 collisionPointProjectedonRay = Vector3.Project(collisionPointThick - target.position, ray.normalized) + target.position;
        Vector3 vectorToProject = (collisionPointProjectedonRay - collisionPointThick).normalized;
        Vector3 collisionPointThickProjectedOnThin = collisionPointProjectedonRay - vectorToProject * thinRadius;

        float thinToThickDistance = Vector3.Distance(collisionPointThickProjectedOnThin, collisionPointThick);
        float thinToThickDistanceNormal = thinToThickDistance / (thickRadius - thinRadius);
        float collisionDistanceThin = Vector3.Distance(target.position, collisionPoint);
        float collisionDistanceThick = Vector3.Distance(target.position, collisionPointProjectedonRay);
        float collisionDistance = Mathf.Lerp(collisionDistanceThick, collisionDistanceThin, thinToThickDistanceNormal);

        /*this point can be actually projected in front of the character 
         * due to double projection t avoid sphere moving through the walls 
         *in this case we should only use thin point 
         * */
        bool isThickPointIncorrect = transform.InverseTransformDirection(collisionPointThick - target.position).z > 0;

        isThickPointIncorrect = isThickPointIncorrect || (collisionDistanceThin < collisionDistanceThick);

        if (isThickPointIncorrect)
        {
            collisionDistance = collisionDistanceThin;
        }
        
        if (collisionDistance < distance )
        {
            distance = collisionDistance;

        }
        else
        {
            distance = Mathf.SmoothStep(distance, collisionDistance, Time.deltaTime *2);// * 100);// * Mathf.Max(distance * 0.1f,0.1f)); //(distacne * 0.1f,0.1f)

        }
        distance = Mathf.Clamp(distance, distanceMin, distanceMax);
        transform.position = target.position + ray.normalized * distance; // llooooooooooooooooooooooooooooooooooooonewly changed for cameray fleckring 
        //camera_rigid_body.AddForce(target.position + ray.normalized * distance);

        //this code is to test the work flow of the player main camera 
        // why i am writing this code means i have a problem with camera movement with respective to camera movement from negative input

        



        if (Vector3.Distance(target.position,collisionPoint) > Vector3.Distance(target.position, collisionPointRay))
        {
           transform.position = collisionPointRay; //newly changed for cameray fleckring

          // camera_rigid_body.AddForce(collisionPointRay);

        }
     }
    #endregion

    //this is one method of the camera collision
    #region GetDoubleSphereCastCollision script
    Vector3 GetDoubleSphereCastCollision(Vector3 cameraPosition, float radius, out Vector3 normal, bool pushAlongNormal)
    {
        float raylength = 1;
        RaycastHit rs;
        Vector3 origin = target.position;
        Vector3 ray = origin - cameraPosition;
        float dot = Vector3.Dot(transform.forward, ray);
        if (dot < 0)
        {
            ray *= -1; 

        }

        //projects the sphere in an opposite direction of the disired character ********** Vector to get some space for teh real spherecast 

        if(Physics.SphereCast(origin,radius,ray.normalized,out rs, raylength, layermask))
        {
            origin = origin + ray.normalized * rs.distance;
        }
        else
        {
            origin += ray.normalized * raylength;

        }
        //do final spherecast with offset origine
        ray = origin - cameraPosition;

        if(Physics.SphereCast(origin,radius,-ray.normalized,out rs, ray.magnitude, layermask))
        {
            normal = rs.normal;
            if (pushAlongNormal)
            {
                return rs.point + rs.normal * radius;

            }
            else
            {
                return rs.point;
            }
        }
        else
        {
            normal = Vector3.zero;
            return cameraPosition;
        }
    }
    #endregion

    // this is the second method of the camera collision
    #region GetRayCollisionPoint script
    Vector3 GetRayCollisionPoint(Vector3 cameraPosition)
    {
        Vector3 origin = target.position;
        Vector3 ray = cameraPosition - origin;
        RaycastHit ss;
        if(Physics.Raycast(origin,ray.normalized,out ss, ray.magnitude , layermask))
        {

            return ss.point + ss.normal * 0.15f; //0.15f

        }
        return cameraPosition;
    }
    #endregion
}
