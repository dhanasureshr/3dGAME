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

   // [Inject(InjectFrom.Anywhere)]
   // public PLAYER_COMPONENT_PROVIDER p;
   // [Inject(InjectFrom.Anywhere)]
   // public CANVAS_COMPONENT_PROVIDER e;
    
   // public magic_particls_prefab_attacker magic_particls_prefab_attacker_player_scipt;

   // public magic_particls_prefab_attacker magic_particls_prefab_attacker_enimy_scipt;
    public void Start()
    {

        StartCoroutine(destroy_partical(2));
        
       // magic_particls_prefab_attacker_player_scipt = p.gameObject.GetComponent<magic_particls_prefab_attacker>();

        //magic_particls_prefab_attacker_player_scipt = e.gameObject.GetComponent<magic_particls_prefab_attacker>();
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

                Instantiate(impact_pref, collision.transform.position + new Vector3(0, 1, 0), Quaternion.identity);
                Destroy(gameObject);

            }
        

            if (collision.transform.tag == tags.full_player_tag)
            {
                if (small_effect)
                {
                    collision.transform.gameObject.GetComponentInParent<health>().ApplyDamage(small_damage, false);

                }
                if (big_effect)
                {

                    collision.transform.gameObject.GetComponentInParent<health>().ApplyDamage(big_damage, false);
                }

                Instantiate(impact_pref, collision.transform.position + new Vector3(0, 1, 0), Quaternion.identity);
                Destroy(gameObject);

            }
        
        if(collision.transform.tag =="cam")
        {
            Instantiate(impact_pref, transform.position + new Vector3(0, 1, 0), Quaternion.identity);
            Destroy(gameObject);

        }


    }

}
