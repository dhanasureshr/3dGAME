using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Emimy_instantiator : ExtendedCustomMonoBehavior
{
    //public  GameObject enimy_prefab_to_instantiate;

    public GameObject[] Enimy_prefabs;

    public int instantation_count;

    public Transform[] position_to_instantiate_enimy;

    public List<GameObject> cloned_enimy_list;

    public GameObject scene_changer;

    public bool TYPE0;
   
    public bool TYPE1;
    public bool TYPE2;
    public bool TYPE3;


    public void Start()
    {
        //  cloned_enimy_list = instantiate_enimy(enimy_prefab_to_instantiate, instantation_count, gameObject.transform);

        //////////
        /////////////
        ///
        scene_changer.SetActive(false);

        if (TYPE0)
        {
            instantiate_enimy(0);
        }


        if (TYPE1)
        {
            instantiate_enimy(1);
        }


        if (TYPE2)
        {
            instantiate_enimy(2);
        }


        if (TYPE3)
        {
            instantiate_enimy(3);
        }

        StartCoroutine(level_complet_checker());
    }

    public List<GameObject> instantiate_enimyS(GameObject enimy_game_object, int ins_count,Transform[] position_to_instantiate)
    {
        for(int i = 1;i<=ins_count;i++)
        {
            cloned_enimy_list.Add(Instantiate(enimy_game_object, position_to_instantiate[Random.Range(0, position_to_instantiate_enimy.Length)].position, Quaternion.identity));

        }
        return cloned_enimy_list;
    }

    public void instantiate_enimy(int enimy_type_number)
    {

        cloned_enimy_list = instantiate_enimyS(
                                                Enimy_prefabs[enimy_type_number],
                                                instantation_count,
                                                position_to_instantiate_enimy
                                              //position_to_instantiate_enimy[Random.Range(0,position_to_instantiate_enimy.Length)]
                                              );

    }

    public IEnumerator level_complet_checker()
    {
        yield return new WaitForSeconds(2);
        if(cloned_enimy_list.Count == 0)
        {
            scene_changer.SetActive(true);
        }

        yield return new WaitForSeconds(1);
        StartCoroutine(level_complet_checker());
    }
}





