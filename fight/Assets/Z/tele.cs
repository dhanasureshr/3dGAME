using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class tele : MonoBehaviour
{
    public Transform d;
    
    private void OnTriggerEnter(Collider other)
    {
       other.gameObject.transform.position = d.transform.position;
    }

    private void OnTriggerStay(Collider other)
    {

       // other.gameObject.transform.position = d.transform.position;
    }
}
