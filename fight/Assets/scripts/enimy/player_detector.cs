using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class player_detector : MonoBehaviour
{
    public GameObject enimy_instantiator;

    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag(tags.full_player_tag))
        {
            Instantiate(enimy_instantiator,transform.position,Quaternion.identity);
            Destroy(gameObject);
        }
    }
}
