using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sword : MonoBehaviour
{

    public float sword_applialbe_damage = 10.0f;
    public GameObject blood_impact_prefab;

    public GameObject[] sword_partical;
    

    //public void OnCollisionEnter(Collision colision)
    //{
    //    if (colision.transform.CompareTag(tags.full_enimy_tag))
    //    {
    //        colision.transform.gameObject.GetComponentInParent<health>().ApplyDamage(sword_applialbe_damage, false);
    //        Instantiate(blood_impact_prefab, transform.position, Quaternion.LookRotation(colision.contacts[0].normal));
    //        Debug.Log("sword splashed the enimy ok dhana");
    //    }
    //}




    public void Enable_sword_pratical_collider()
    {
        sword_partical[0].SetActive(true);
        StartCoroutine(Automatic_sword_collider_disabler());
    }


    public void Disable_sword_pratical_collider()
    {
        sword_partical[0].SetActive(false);
        sword_partical[1].SetActive(true);
    }


    public IEnumerator Automatic_sword_collider_disabler()
    {
        yield return new WaitForSeconds(0.6f);
        Disable_sword_pratical_collider();
    }

}
