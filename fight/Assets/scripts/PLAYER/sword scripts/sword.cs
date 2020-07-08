using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sword : ExtendedCustomMonoBehavior
{

    public float sword_applialbe_damage = 10.0f;
    public GameObject blood_impact_prefab;

    public BoxCollider sword_collider;

    //public void OnCollisionEnter(Collision colision)
    //{
    //    if (colision.transform.CompareTag(tags.full_enimy_tag))
    //    {
    //        colision.transform.gameObject.GetComponentInParent<health>().ApplyDamage(sword_applialbe_damage, false);
    //        Instantiate(blood_impact_prefab, transform.position, Quaternion.LookRotation(colision.contacts[0].normal));
    //        Debug.Log("sword splashed the enimy ok dhana");
    //    }
    //}


    private void Start()
    {
        sword_collider = gameObject.GetComponent<BoxCollider>();
        sword_collider.enabled = false;

    }

    public void OnTriggerEnter(Collider colision)
    {

        if (colision.transform.CompareTag(tags.full_enimy_tag))
        {
            colision.transform.gameObject.GetComponentInParent<health>().ApplyDamage(sword_applialbe_damage, false);
            Instantiate(blood_impact_prefab, transform.position,transform.rotation);
            Debug.Log("sword splashed the enimy ok dhana");
        }
    }


    public void Enable_sword_collider()
    {
        sword_collider.enabled = true;
    }


    public void Disable_sword_collider()
    {
        sword_collider.enabled = false;
    }


    public IEnumerator Automatic_sword_collider_disabler()
    {
        yield return new WaitForSeconds(10);
        Disable_sword_collider();
    }
    public void Update()
    {
        

    }


}
