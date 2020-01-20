using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class PLAYER_CAMERA_FOLLOW : MonoBehaviour {
    // new ********************************
    public float rotx = 0.0f;
    public float roty = 0.0f;
    public Vector3 origrot;
    public float rotspeed = 0.5f;
    public float dir = -1;
    public float inittouch_x;
    public float inittouch_y;
    public float finaltouch_x;
    public float finaltouch_y;
    //new *************************************


    public Transform target;
    public int targetframe = 60;


   // public VirtualJoystick joystick;
    //this are for the caera collision detection 

    private float thinRadius = 0.15f;
    private float thickRadius = 0.3f;
    private float distance = 5.0f;
    [Tooltip("LayerMask used for detecting camera collision"),SerializeField]
    private LayerMask layermask;
    private float distanceMin = 1f;
    private float distanceMax = 5f;
    private object hit;

    private float xspeed = 10.0f;
    private float yspeed = 10.0f;
    private float yMinLimit = 10f;
    private float yMaxLimit = 80f;

    private float xMinLimit = -360f;
    private float xMaxLimit = 360;

    private Quaternion rotation;
    private Vector3 position;
    private float x = 0.0f;
    private float y = 0.0f;

    private void Start()
    {
        Vector3 angles = this.transform.eulerAngles;
        x = angles.y;
        y = angles.x;
        QualitySettings.vSyncCount = 0;

    }

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
            CameraMovement();
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
        CameraCollision();
    }

    //this is the code for the camera movement with respective to the player

        public void CameraMovement()
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

    private void CameraCollision()
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
