using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class magic_effect_script : MonoBehaviour
{
    public bool small_effect;
    public bool big_effect;

    private float small_damage = 2.0f;
    private float big_damage = 9.0f;


    public GameObject impact_pref;
    public void Start()
    {

        StartCoroutine(destroy_partical(2));

    }


    public IEnumerator destroy_partical(float time_delay)
    {
        yield return new WaitForSeconds(time_delay);
        Destroy(gameObject);
        yield break;
    }
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

            Instantiate(impact_pref, collision.transform.position + new Vector3(0,1,0), Quaternion.identity);
            Destroy(gameObject);
            
        }

        if(collision.transform.tag =="cam")
        {
            Instantiate(impact_pref, transform.position + new Vector3(0, 1, 0), Quaternion.identity);
            Destroy(gameObject);

        }


    }

}
