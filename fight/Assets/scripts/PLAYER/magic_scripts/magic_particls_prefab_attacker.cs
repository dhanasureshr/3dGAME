﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public class magic_particls_prefab_attacker : MonoBehaviour
{
    public Transform[] H1_EFFECTER_PREFABS;
   // public Transform[] H2_EFFECTER_PREFABS;
    //public Transform[] h1_CHARGE_PREFABS;
    public Transform[] h2_CHARGE_PREFABS;
    public GameObject[] practical_hit_PREFABS;

    public GameObject[] magic_clave;

    public Transform ONE_HAND_CONTAINER;
    public Transform TWO_HAND_CONTAINER;

    public GameObject[] magic_show_off;


    public bool script_holder_enimy;
    public bool script_holder_player;



  //  public AssetReference[] H1_EFFECTE_PREFAB;

    public void Start()
    {
        Disablemagic_player();
    }
    public void intantiate_move_hand_partical_prefab(int n, Transform[] effect)
    {
        //var magic_partical =(Transform) Instantiate(H1_EFFECTER_PREFABS[Random.Range(0, 3)], ONE_HAND_CONTAINER.position, Quaternion.identity);
        
        Transform  magic_partical = partical_instantiator(effect, n);

        magic_partical.GetComponent<Rigidbody>().velocity = transform.forward * 25;
        
    }

    public void instantiate_two_hand_partical_prefab(int n)
    {
        Transform magic_partical = partical_instantiator(h2_CHARGE_PREFABS, n);
        magic_partical.rotation = TWO_HAND_CONTAINER.rotation;
        
    }


    /*
    public IEnumerator instantiate_partical_effector_prefab()
    {


        yield break;

    }

    public IEnumerator instantiate_partical_hit_prefab()
    {
        

        yield break;

    }

    */


    public Transform  partical_instantiator(Transform[] h1_list,int effect_number)
    {
        
        var magic_partical = (Transform)Instantiate(h1_list[effect_number], TWO_HAND_CONTAINER.position, Quaternion.identity);
        
        return magic_partical;
    }



    public void Partical_attack_one_HAND1()
    {
        intantiate_move_hand_partical_prefab(0,H1_EFFECTER_PREFABS);
    }

    public void Partical_attack_one_HAND2()
    {
        intantiate_move_hand_partical_prefab(1, H1_EFFECTER_PREFABS);
    }


    public void Partical_attack_one_HAND3()
    {
        intantiate_move_hand_partical_prefab(2, H1_EFFECTER_PREFABS);
    }


    public void Partical_attacker_one_hand4()
    {
        intantiate_move_hand_partical_prefab(3, H1_EFFECTER_PREFABS);
    }

    public void Partical_attacker_one_hand5()
    {
        intantiate_move_hand_partical_prefab(4, H1_EFFECTER_PREFABS);
    }

    public void Partical_attack_two_HAND1()
    {
        instantiate_two_hand_partical_prefab(0);
    }


    public void Partical_attack_two_HAND2()
    {
        intantiate_move_hand_partical_prefab(1,h2_CHARGE_PREFABS);
    }

    public void Partical_attack_two_HAND3()
    {
        intantiate_move_hand_partical_prefab(2, h2_CHARGE_PREFABS);
    }


    public void Disablemagic_player()
    {
        gamemanager.instance.base_game_controller_ref.Disable_MULTIPLE_object_in_hirichery(magic_show_off);
    }


    public void Enablemagic_player()
    {
        gamemanager.instance.base_game_controller_ref.Enable_MULTIPLE_object_in_hirichery(magic_show_off);
    }







    public void Enable_magic_clave_pratical()
    {
        magic_clave[0].SetActive(true);
        StartCoroutine(Automatic_sword_collider_disabler());
    }


    public void Disable_magic_clave_pratical()
    {
        magic_clave[0].SetActive(false);
        magic_clave[1].SetActive(true);
    }


    public IEnumerator Automatic_sword_collider_disabler()
    {
        yield return new WaitForSeconds(0.6f);
        Disable_magic_clave_pratical();
    }
}
