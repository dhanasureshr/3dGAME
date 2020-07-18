using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class magic_effect_script : MonoBehaviour
{
    public bool small_effect;
    public bool big_effect;

    private float small_damage = 2.0f;
    private float big_damage = 9.0f;
    

    public void OnTriggerEnter(Collider collision)
    {
        if (collision.transform.tag == "ENIMY")
        {
            if (small_effect)
            {
                collision.transform.gameObject.GetComponentInParent<health>().ApplyDamage(small_damage, false);

            }
            if (big_effect)
            {

                collision.transform.gameObject.GetComponentInParent<health>().ApplyDamage(big_damage, false);
            }
            // Destroy(gameObject);
            // Instantiate(impactPrefabs[1], transform.position, Quaternion.LookRotation(collision.contacts[0].normal));
        }
        else if (collision.transform.tag == "cam")
        {
            //  Destroy(gameObject);
            // Instantiate(impactPrefabs[0], transform.position, Quaternion.LookRotation(collision.contacts[0].normal));
        }
    }

}
