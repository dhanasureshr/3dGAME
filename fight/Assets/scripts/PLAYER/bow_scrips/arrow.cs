using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement;
public class arrow : ExtendedCustomMonoBehavior
{
    private Rigidbody mybody;
  //  private bool hitsomething;
    public float destroyAfter = 15.0f;
    public float arrow_appliable_damage = 10.0f;
    private BoxCollider arrow_collider;

   


    private void Start()
    {
        mybody = gameObject.GetComponent<Rigidbody>();
        arrow_collider = gameObject.GetComponent<BoxCollider>();
        StartCoroutine("DestroyTimer");
       
    }

    private void OnCollisionEnter(Collision colision)
    {
        
        if (colision.transform.CompareTag(tags.full_enimy_tag))
        {
            colision.transform.gameObject.GetComponent<health>().ApplyDamage(arrow_appliable_damage, false);
            Destroy(gameObject);
            Addressables.ReleaseInstance(gameObject);
            return;
        }
        else if (colision.transform.tag != gameObject.transform.tag  && colision.transform.tag != tags.un_tag && colision.transform.tag != tags.full_player_tag)
        {
            stick();
           // return;
        }
        
        mybody.mass = 100.0f;
        mybody.useGravity = true;
        arrow_collider.enabled = false;
        Debug.Log(colision.gameObject.name);
       
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
        // Addressables.ReleaseInstance(gameObject);
       
    }

}
