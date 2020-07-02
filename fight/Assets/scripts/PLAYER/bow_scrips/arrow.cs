using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class arrow : ExtendedCustomMonoBehavior
{
    private Rigidbody mybody;
    private bool hitsomething;
    public float destroyAfter = 15.0f;
    public float arrow_appliable_damage = 10.0f;

    private void Start()
    {
        mybody = gameObject.GetComponent<Rigidbody>();
        StartCoroutine("DestroyTimer");
    }

    private void Update()
    {
        if(!hitsomething)
        {
           // transform.rotation = Quaternion.LookRotation(mybody.velocity);
        }
    }
    private void OnCollisionEnter(Collision colision)
    {
        hitsomething = true;
        if (colision.transform.CompareTag(tags.full_enimy_tag))
        {
            colision.transform.gameObject.GetComponent<health>().ApplyDamage(arrow_appliable_damage, false);
            Destroy(gameObject);
            return;
        }
        else if (colision.transform.tag != gameObject.transform.tag  && colision.transform.tag != tags.un_tag)
        {
            stick();
           // return;
        }
        
        mybody.mass = 100.0f;
        mybody.useGravity = true;
        
       
    }

    //  code to stick the arrow to stop when collider with other objects

    public void stick()
    {
        mybody.constraints = RigidbodyConstraints.FreezeAll;

    }



    private IEnumerator DestroyTimer()
    {
        yield return new WaitForSeconds(destroyAfter);
        Destroy(gameObject);
    }
}
