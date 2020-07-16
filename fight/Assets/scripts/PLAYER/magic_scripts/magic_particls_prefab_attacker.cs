using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class magic_particls_prefab_attacker : MonoBehaviour
{
    public Transform[] H1_EFFECTER_PREFABS;
    public Transform[] H2_EFFECTER_PREFABS;
    public Transform[] h1_CHARGE_PREFABS;
    public Transform[] h2_CHARGE_PREFABS;
    public GameObject[] practical_hit_PREFABS;

    

    public Transform ONE_HAND_CONTAINER;
    public Transform TWO_HAND_CONTAINER;

    public GameObject[] magic_show_off;

    public void Start()
    {
        Disablemagic_player();
    }
    public void intantiate_one_hand_partical_prefab(int n)
    {
        //var magic_partical =(Transform) Instantiate(H1_EFFECTER_PREFABS[Random.Range(0, 3)], ONE_HAND_CONTAINER.position, Quaternion.identity);
        
        Transform  magic_partical = partical_instantiator(H1_EFFECTER_PREFABS, n);

        magic_partical.GetComponent<Rigidbody>().velocity = transform.forward * 25;
        StartCoroutine(destroy_partical(magic_partical,2));

    }

    public void instantiate_two_hand_partical_prefab(int n)
    {
        Transform magic_partical = partical_instantiator(h2_CHARGE_PREFABS, n);
        magic_partical.rotation = TWO_HAND_CONTAINER.rotation;
        if (n == 0)
        {
            StartCoroutine(destroy_partical(magic_partical, 2.0f));
        }
    }

    public IEnumerator instantiate_partical_effector_prefab()
    {


        yield break;

    }

    public IEnumerator instantiate_partical_hit_prefab()
    {
        

        yield break;

    }

    public IEnumerator destroy_partical(Transform pratical_to_destroy,float time_delay)
    {
        yield return new WaitForSeconds(time_delay);
        Destroy(pratical_to_destroy.gameObject);
        yield break;
    }


    public Transform  partical_instantiator(Transform[] h1_list,int effect_number)
    {
        var magic_partical = (Transform)Instantiate(h1_list[effect_number], TWO_HAND_CONTAINER.position, Quaternion.identity);
        
        return magic_partical;
    }



    public void Partical_attack_one_HAND1()
    {
        intantiate_one_hand_partical_prefab(0);
    }

    public void Partical_attack_one_HAND2()
    {
        intantiate_one_hand_partical_prefab(1);
    }


    public void Partical_attack_one_HAND3()
    {
        intantiate_one_hand_partical_prefab(2);
    }


    public void Partical_attack_two_HAND1()
    {
        instantiate_two_hand_partical_prefab(0);
    }




    public void Disablemagic_player()
    {
        gamemanager.instance.base_game_controller_ref.Disable_MULTIPLE_object_in_hirichery(magic_show_off);
    }


    public void Enablemagic_player()
    {
        gamemanager.instance.base_game_controller_ref.Enable_MULTIPLE_object_in_hirichery(magic_show_off);
    }
}
