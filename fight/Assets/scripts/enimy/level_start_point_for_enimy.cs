using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class level_start_point_for_enimy : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if(other.transform.CompareTag(tags.full_player_tag))
        {

        }
    }
}
