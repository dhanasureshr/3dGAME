using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HEALTH_BOOSTERS : MonoBehaviour
{
    // This is the health booster script that is going to  boost up the player health when player hits this health booster game object
    
    public GameObject pick_up_vfx;

    private void Start()
    {
        Destroy(gameObject, 20);
    }
    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Player")
        {

            if (other.gameObject.GetComponentInParent<baseusermanager>().health == 100)
            {
                
                return;
            }
            else
            {
                float d = other.gameObject.GetComponentInParent<baseusermanager>().health = 100;
                other.gameObject.GetComponentInParent<playermanager>().Display_player_health(d);
                Destroy(gameObject);
                Instantiate(pick_up_vfx,other.transform.position + new Vector3(0,1,0),other.transform.rotation);
            }
        }
    }

    
    

}
