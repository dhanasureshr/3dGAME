using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sword : ExtendedCustomMonoBehavior
{

    public float sword_applialbe_damage = 10.0f;
    public GameObject blood_impact_prefab;

    //public void OnCollisionEnter(Collision colision)
    //{
    //    if (colision.transform.CompareTag(tags.full_enimy_tag))
    //    {
    //        colision.transform.gameObject.GetComponentInParent<health>().ApplyDamage(sword_applialbe_damage, false);
    //        Instantiate(blood_impact_prefab, transform.position, Quaternion.LookRotation(colision.contacts[0].normal));
    //        Debug.Log("sword splashed the enimy ok dhana");
    //    }
    //}

    public void OnTriggerEnter(Collider colision)
    {

        if (colision.transform.CompareTag(tags.full_enimy_tag))
        {
            colision.transform.gameObject.GetComponentInParent<health>().ApplyDamage(sword_applialbe_damage, false);
            Instantiate(blood_impact_prefab, transform.position,transform.rotation);
            Debug.Log("sword splashed the enimy ok dhana");
        }
    }



}
