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

    public void OnCollisionEnter(Collision collision)
    {
        if(collision.collider.CompareTag("Enimy"))
        {
            Debug.Log("player colided the enimy");
        }

        if(collision.collider.CompareTag("Player"))
        {
            Debug.Log("Enimy collided  the player");
        }
    }
}
