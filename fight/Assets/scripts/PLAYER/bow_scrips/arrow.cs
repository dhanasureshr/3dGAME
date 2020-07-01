using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class arrow : ExtendedCustomMonoBehavior
{
    private Rigidbody mybody;
    private bool hitsomething;

    private void Start()
    {
        mybody = gameObject.GetComponent<Rigidbody>();
    }

    private void Update()
    {
        if(!hitsomething)
        {
           // transform.rotation = Quaternion.LookRotation(mybody.velocity);
        }
    }
    private void OnCollisionEnter(Collision collision)
    {
        hitsomething = true;
        
        stick();
    }

    //  code to stick the arrow to stop when collider with other objects

    public void stick()
    {
        mybody.constraints = RigidbodyConstraints.FreezeAll;

    }
}
