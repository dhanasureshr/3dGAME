using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class magic_particls_prefab_attacker : MonoBehaviour
{
    public Transform[] H1_EFFECTER_PREFABS;
    public GameObject[] H2_EFFECTER_PREFABS;
    public GameObject[] h1_CHARGE_PREFABS;
    public GameObject[] h2_CHARGE_PREFABS;
    public GameObject[] practical_hit_PREFABS;

    

    public Transform ONE_HAND_CONTAINER;
    public Transform TWO_HAND_CONTAINER;

    public void intantiate_one_hand_partical_prefab()
    {
      var magic_partical =(Transform) Instantiate(H1_EFFECTER_PREFABS[Random.Range(0, 3)], ONE_HAND_CONTAINER.position, Quaternion.identity);
        magic_partical.GetComponent<Rigidbody>().velocity = transform.forward * 25;
        StartCoroutine(destroy_partical(magic_partical));

    }

    public void instantiate_two_hand_partical_prefab()
    {


    }

    public IEnumerator instantiate_partical_effector_prefab()
    {


        yield break;

    }

    public IEnumerator instantiate_partical_hit_prefab()
    {
        

        yield break;

    }

    public IEnumerator destroy_partical(Transform pratical_to_destroy)
    {
        yield return new WaitForSeconds(2);
        Destroy(pratical_to_destroy.gameObject);
        yield break;
    }
}
