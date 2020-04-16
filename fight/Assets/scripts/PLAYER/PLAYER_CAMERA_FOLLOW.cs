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
    public float rotx = 0.0f;
    public float roty = 0.0f;
    public Vector3 origrot;
    public float rotspeed = 0.2f;
    public float dir = -1;
    public float inittouch_x;
    public float inittouch_y;
    public float finaltouch_x;
    public float finaltouch_y;
    //new *************************************
    public Transform target;
    public Transform look_target;
    public int targetframe = 60;
    //this are for the caera collision detection
    private float thinRadius = 0.15f;
    private float thickRadius = 0.3f;
    private float distance = 10.0f; //DEFAULT 10.0f
    
    [Tooltip("LayerMask used for detecting camera collision"),SerializeField]
    private LayerMask layermask;
    private float distanceMin = 1f;
    private float distanceMax = 3f;//DEFAULT 5
    private object hit;
    private float xspeed = 1.0f;
    private float yspeed = 1.0f;
    private float yMinLimit = 10f;
    private float yMaxLimit = 30f; //DEFAULT 80
    private float xMinLimit = -360f;
    private float xMaxLimit = 360;
    private Quaternion rotation;
    private Vector3 position;
    private float x = 0.0f;
    private float y = 0.0f;
	// this is the end of the camera collision varables
	public bool useOffsetValue;
	public Vector3 offset;
	/*
	 * now this variables all are for the player movement 
	 * when is finger is on the joystick
	 * 
	 * */
	public VirtualJoystick virtual_joystick_access;
    public VirtualJoystick Camera_joystick_access;
	public Vector3 camjoyrotateinput = Vector3.zero;
	Quaternion targetrotation;
	public float speed;
    // this is for the movement camera controller variables
    public Transform pivot;
    // this is for the fighting camera movement enabler variable
    public bool is_player_fighting = false;
    public camera_switch_ui_script ui_script_ref;
    protected float cameraAngle;
    protected float cameraAnglespeed = 1.0f; // DEFAULT 2.0F
    public float deltax;
    public float deltay;
    #endregion

    #region start metheod for initilization
    private void Start()
    {
        gameObject.transform.parent = null;
        Vector3 angles = this.transform.eulerAngles;
        x = angles.y;
        y = angles.x;
        QualitySettings.vSyncCount = 0;
        if (!useOffsetValue)
        {
            offset = target.position - transform.position;
            // this is for the movement camer controller code
            pivot.transform.position = target.transform.position;
            pivot.transform.parent = target.transform;
            transform.position = pivot.position;
            transform.rotation = pivot.rotation;
        }
    }
    #endregion

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

    #region LateUpdate
    private void LateUpdate()
    {
        gameObject.transform.parent = null;
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
                float horizontal = virtual_joystick_access.InputDirection.x *(speed);
                //target.Rotate(0, horizontal, 0);//////////////////
                look_target.Rotate(0,horizontal,0);
                
                float vertical = virtual_joystick_access.InputDirection.y * (speed);
              //pivot.Rotate(-vertical, 0, 0);////////////////////
                float desiredYAngle = target.eulerAngles.y;
                float desiredXAngle = pivot.eulerAngles.x;
                Quaternion rotations = Quaternion.Euler(desiredXAngle, desiredYAngle, 0);
                
              //rotations = rotations.normalized;//////////////////
                transform.LookAt(target);
              //transform.LookAt(look_target);
                /////////====================================================================
                
                    // the below code only one code should be enabled
            
                ////////=====================================================================
                ///if you enable the below code means the camera will be at the back of the player
                        //code no 2

                            //transform.position = target.position - (rotations * offset + new Vector3(0.0f,-2.0f,5.0f));


                ///////======================================================================



            }
            else
            {
                // this is the code that deals about the player camera follow with the joystick 
                //with movement of player
                    
                //////================================================================
                /// if you enable the below function means the 
                /// camera move around the player with swipe input feature will be 
                /// enabled
                

                    CameraMovementAroundPlayer();


                //////================================================================
                
                /////////=============================================================
                /// if you enable the below function means
                /// camera move around the player with camera joystick feature will be 
                /// enabled
                

                    //CameraMovementAroundPlayerWithJoy();


                /////////=============================================================
                    
                /*
                 *the below  is the common code for both the above functions
                 * 
                 */
                    rotation = Quaternion.Euler(rotx, roty, 0);
                    rotation = rotation.normalized;
                    if (distance < distanceMax)
                    {
                        distance = Mathf.Lerp(distance, distanceMax, Time.deltaTime *2f);
                    }
                    Vector3 distanceVector = new Vector3(0.0f, 1.0f, -distance);
                    Vector3 position = rotation * distanceVector + target.position;
                    transform.rotation = rotation;
                    transform.position = position;
                    transform.LookAt(target);
            }
            
            
            

        }
        CameraCollision();
    }
    #endregion
    // this is the code for the camera movement with irrespetive to the player
    #region CameraMovementAroundPlayerwithjoy script
    public void CameraMovementAroundPlayerWithJoy()
    {
        deltax = Camera_joystick_access.InputDirection.x * speed;
        deltay = Camera_joystick_access.InputDirection.z * speed;
        rotx -= deltay * Time.deltaTime * 10 * dir;
        roty -= deltax * Time.deltaTime *10 * dir;
        rotx = Mathf.Clamp(rotx, -10f, 30f);
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
            rotx = Mathf.Clamp(rotx, -30.0f, 30f);
       
    }
    #endregion

    // this is the code  for clamping the angles between the x and y for the camera movement 
    #region ClampAgle script
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

    // this is for the CameraCollision script
    #region CameraCollision script
    public void CameraCollision()
    {
        // difining the variables for the calculation
        Vector3 normal, thicknormal;
        Vector3 ray = transform.position - target.position;
        //calculation the points 
        Vector3 collisionPoint = GetDoubleSphereCastCollision(transform.position, thinRadius, out normal, true);
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
        if(collisionDistance < distance)
        {
                distance = collisionDistance;

        }
        else
        {
            distance = Mathf.SmoothStep(distance, collisionDistance, Time.deltaTime * 100 * Mathf.Max(distance * 0.1f, 0.1f));

        }
        distance = Mathf.Clamp(distance, distanceMin, distanceMax);
        transform.position = target.position + ray.normalized * distance;

        if(Vector3.Distance(target.position,collisionPoint) > Vector3.Distance(target.position, collisionPointRay))
        {
            transform.position = collisionPointRay;
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
        if(Physics.Raycast(origin,ray.normalized,out ss, ray.magnitude, layermask))
        {
            return ss.point + ss.normal * 0.15f;

        }
        return cameraPosition;
    }
    #endregion
}
