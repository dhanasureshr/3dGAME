using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fighting_collider : MonoBehaviour
{
    [TextArea]
    public string doc = "this script should be attatched to the player and enimy  collision points";

    /// <summary>
    /// //this is the main script for handling the player fighting collisions
    /// </summary>
    /// <param name="collision"></param>

    private string Player_Tag = "Player";
    private string Enimy_Tag = "Enimy";
    public void OnCollisionEnter(Collision other)
    {
        if(other.gameObject.CompareTag(Enimy_Tag))
        {
            Debug.Log("player colided the enimy");
            // hear we have to raise an event that player is hiting the enimy
        }

        if(other.gameObject.CompareTag(Player_Tag))
        {
            Debug.Log("Enimy collided  the player");
            //hear we have to raise the event that enimy is hiting the player
        }
    }
}
