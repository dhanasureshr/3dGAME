using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sword_plaer_collision_detection : MonoBehaviour
{
    public float sword_player_partical_applible_damage = 0.1f;
    private void OnParticleCollision(GameObject other)
    {
        if(other.CompareTag(tags.full_enimy_tag))
        {

            other.transform.gameObject.GetComponent<health>().ApplyDamage(sword_player_partical_applible_damage, false);
        }
    }
}
