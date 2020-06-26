using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{

    public float destroyAfter = 15.0f;

    //public bool destroyOnImpact = false;


    public float bullet_applible_damage = 10.0f;

    public GameObject[] impactPrefabs;

    private void Start()
    {
        StartCoroutine("DestroyTimer");
    }


    private void OnCollisionEnter(Collision collision)
    {
        if (collision.transform.tag == "ENIMY")
        {

            collision.transform.gameObject.GetComponent<health>().ApplyDamage(bullet_applible_damage, false);
            Destroy(gameObject);
            Instantiate(impactPrefabs[1], transform.position, Quaternion.LookRotation(collision.contacts[0].normal));
        }
        else if (collision.transform.tag == "cam")
        {
            Destroy(gameObject);
            Instantiate(impactPrefabs[0], transform.position, Quaternion.LookRotation(collision.contacts [0].normal));
        }
        else
        {
            Destroy(gameObject);
        }
    }

    private IEnumerator DestroyTimer()
    {
        yield return new WaitForSeconds(destroyAfter);
        Destroy(gameObject);
    }
}
