using UnityEngine;

namespace  shoot
{
    

    public class BASE_FIRE : MonoBehaviour
    {
        ///<summery> 
        //------------------------------------------------------------------------------->
        //----------------------------SHOOTING ALGORITHAM ------------------------------->
        //------------------------------------------------------------------------------->
        // this is the base script for the fhooting mechanasim
        // this script holds features like pressing on fire button irrespective of the game
        // action mode 
        // it will calculate the "Screen point to Ray hit point position"
        // form the center of the screen and stores in variable("screenpoint")
        // this script also stores the wepon nozzle position in the variable("nozzleposition")
        // this nozzleposition variable data should be updated depending up on the game 
        // action mode 
        // this nozzposition and screenpoint variables are used as base for displaying the 
        // shoot trail effect prefab
        // for shoot trail effect the nozzlepositon is the start position and screenpoint is 
        // the end position 
        // the shoot trail effect prefab should also be implemented in generic way
        // because depending up on the action mode
        // the shoot trail effect should be updated
        // the above concept is also appalicable to the Display prefab like Bullets arrows 
        // and rockets etc............. 
        //------------------------------------------------------------------------------>
        //----------------CODING CONVENCTIONS FOR THE ABOVE ALGORITHAM------------------>
        //------------------------------------------------------------------------------>
        // A variable name starts with smallcase forllowed by caps in between names
        //------------------------------------------------------------------------------>
        //------------------------------------------------------------------------------>
        ///<summery> ----BY DHANA SURESH ADARI -->love you janu
        #region Generic public variables

        private Vector3 nozzlePosition;
        private Vector3 screenPoint;
        private Ray ray;
        private RaycastHit hitpoint;

        private Vector3 rayorign;

        #endregion


        public Vector3 worldpositionfromscreenpoint()
        {
            // need to change the camera reference form  camera.main to cache reference
            // to remove performance lags
            rayorign = Camera.main.ViewportToWorldPoint(new Vector3(0.5f,0.5f,0));
            if(Physics.Raycast(Camera.main.transform.position,Camera.main.transform.forward,out hitpoint,100.0f))
            {
                screenPoint = hitpoint.point;
                if(hitpoint.rigidbody != null)
                    hitpoint.rigidbody.AddForce(-hitpoint.normal * 100.0f);
            }
            //return hitpoint.point;

            return screenPoint;
        }


 
    }




}
