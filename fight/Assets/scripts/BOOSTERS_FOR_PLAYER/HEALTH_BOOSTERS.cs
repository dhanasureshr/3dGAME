using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HEALTH_BOOSTERS : ExtendedCustomMonoBehavior
{
    // This is the health booster script that is going to  boost up the player health when player hits this health booster game object

    public GameObject Health_pick_up_vfx;

    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Player")
        {
            Debug.Log("player hited the health booster");
            if (other.gameObject.GetComponentInParent<baseusermanager>().health == 100)
            {
                return;
            }
            else
            {
                float d = other.gameObject.GetComponentInParent<baseusermanager>().health = 100;
                other.gameObject.GetComponentInParent<playermanager>().Display_player_health(d);
                Destroy(gameObject);
                Instantiate(Health_pick_up_vfx,other.transform.position + new Vector3(0,1,0),other.transform.rotation);
            }
        }
    }
}
