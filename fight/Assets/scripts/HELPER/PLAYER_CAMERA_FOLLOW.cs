using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class PLAYER_CAMERA_FOLLOW : MonoBehaviour
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
	 * 
	 * 
	 * 
	 * */

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
    public int targetframe = 60;


    //this are for the caera collision detection
    private float thinRadius = 0.15f;
    private float thickRadius = 0.3f;
    private float distance = 5.0f;                   
    [Tooltip("LayerMask used for detecting camera collision"),SerializeField]
    private LayerMask layermask;
    private float distanceMin = 1f;
    private float distanceMax = 5f;
    private object hit;

    private float xspeed = 1.0f;// // // / //
    private float yspeed = 1.0f;
    private float yMinLimit = 10f;
    private float yMaxLimit = 80f;

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

	public Vector3 camjoyrotateinput = Vector3.zero;
	Quaternion targetrotation;
	public float speed;
    private void Start()
    {
		
        Vector3 angles = this.transform.eulerAngles;
        x = angles.y;
        y = angles.x;
        QualitySettings.vSyncCount = 0;


		if(!useOffsetValue)
		{
			offset = target.position - transform.position;
		}
		// this is for the movement camer controller code
		pivot.transform.position = target.transform.position;
		pivot.transform.parent = target.transform;

    }



	// this is for the movement camera controller variables
	public Transform pivot;

    //this is the update function for the fixed frme rate
    private void FixedUpdate()
    {
        if(Application.targetFrameRate != targetframe)
        {
            Application.targetFrameRate = targetframe;
        }
    }

    private void LateUpdate()
    {
        if (target)
        {

			if(virtual_joystick_access.isfingeronjoystick)
			{
				//camjoyrotateinput  = new Vector3(virtual_joystick_access.InputDirection.x,0,virtual_joystick_access.InputDirection.z);
				//if(camjoyrotateinput != Vector3.zero)
				//{
				//	targetrotation = Quaternion.LookRotation(camjoyrotateinput);
				//}
				//transform.rotation = Quaternion.RotateTowards(transform.rotation,targetrotation,speed*Time.deltaTime);
				//print("player is moving");

									//if(distance < distanceMax)
									//{
								//		distance = Mathf.Lerp(distance, distanceMax, Time.deltaTime * 2f);

								//	}
								//	Vector3 distanceVector = new Vector3(0.0f, 0.0f, -distance);
				//Vector3 position = rotation * distanceVector + target.position;
								//	transform.rotation = rotation;
									//transform.position = position;

									//if(tuch_inpu.touch_input_manager.swiping)
									//{
									//	transform.rotation = rotation;
									/*}
*/
				/*//this is for the movement camera controller code
				inittouch_y = tuch_inpu.touch_input_manager.fp.y;
				finaltouch_y = tuch_inpu.touch_input_manager.lp.y;
				float deltay = inittouch_y - finaltouch_y;
				inittouch_x = tuch_inpu.touch_input_manager.fp.x;
				finaltouch_x = tuch_inpu.touch_input_manager.lp.x;
				float deltax = inittouch_x - finaltouch_x;
				//rotx -= deltay * Time.deltaTime * speed;
				//roty -= deltax * Time.deltaTime * speed;



*/

				float horizontal = virtual_joystick_access.InputDirection.x *(speed) ;

				//float horizontal = x;
				//Quaternion rot = Quaternion.Euler(0,horizontal,0);
				//target.rotation = rot;
				target.Rotate(0,horizontal,0);

				float vertical = virtual_joystick_access.InputDirection.y *(speed);

		
				//float vertical = roty;
				pivot.Rotate(-vertical,0,0);
				float desiredYAngle = target.eulerAngles.y;
				float desiredXAngle = pivot.eulerAngles.x;
				Quaternion rotations = Quaternion.Euler(desiredXAngle,desiredYAngle,0);
				transform.position = target.position - (rotations * offset);
				transform.LookAt(target);

			}
			else
			{
				
				// this is the code that deals about the player camera follow with the joystick 
				//with movement of player

				CameraMovementAroundPlayer();

				//rotation = Quaternion.Euler(y, x, 0);

				//new ****************
				rotation = Quaternion.Euler(rotx, roty, 0);

				if(distance < distanceMax)
				{
					distance = Mathf.Lerp(distance, distanceMax, Time.deltaTime * 2f);

				}
				Vector3 distanceVector = new Vector3(0.0f, 0.0f, -distance);
				Vector3 position = rotation * distanceVector + target.position;
				transform.rotation = rotation;
				transform.position = position;
			}


			/*CameraMovement();
			  //rotation = Quaternion.Euler(y, x, 0);

			  //new ****************
			rotation = Quaternion.Euler(rotx, roty, 0);

			if(distance < distanceMax)
			{
				distance = Mathf.Lerp(distance, distanceMax, Time.deltaTime * 2f);

			}
			Vector3 distanceVector = new Vector3(0.0f, 0.0f, -distance);
			Vector3 position = rotation * distanceVector + target.position;
			transform.rotation = rotation;
			transform.position = position;
            */

        }
        CameraCollision();
    }
		

    //this is the code for the camera movement with respective to the player

	public void CameraMovementAroundPlayer()
    {
        //x += joystick.InputDirection.x * xspeed;
        //y -= joystick.InputDirection.z * yspeed;

        //new **********************************
        inittouch_x = tuch_inpu.touch_input_manager.fp.x;
        inittouch_y = tuch_inpu.touch_input_manager.fp.y;
        finaltouch_x = tuch_inpu.touch_input_manager.lp.x;
        finaltouch_y = tuch_inpu.touch_input_manager.lp.y;
       
        
            float deltax = inittouch_x - finaltouch_x;
            float deltay = inittouch_y - finaltouch_y;
            rotx -= deltay * Time.deltaTime * rotspeed * dir;
            roty -= deltax * Time.deltaTime * rotspeed * dir;
            rotx = Mathf.Clamp(rotx, -30f, 30f);
         

        

        // new *****************************



        //x = ClampAngle(x, xMinLimit, xMaxLimit);
        //y = ClampAngle(y, yMinLimit, yMaxLimit);

    }

    // this is the code  for clamping the angles between the x and y for the camera movement 

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
        transform.position= target.position + ray.normalized * distance;

        if(Vector3.Distance(target.position,collisionPoint) > Vector3.Distance(target.position, collisionPointRay))
        {
            transform.position = collisionPointRay;
            
        }
     }

    //this is one method of the camera collision
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




   

    

}
