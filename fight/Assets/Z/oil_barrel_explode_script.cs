using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class oil_barrel_explode_script : MonoBehaviour
{
    public Transform destroyed_barrel;
    //public Transform explode_vfx;

   // public rocket t;

    private void OnTriggerEnter(Collider other)
    {
      //  t.explode = true;
        Instantiate(destroyed_barrel, transform.position, transform.rotation);
        Destroy(gameObject);
    }
}
