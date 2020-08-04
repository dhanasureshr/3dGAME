using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Emimy_instantiator : ExtendedCustomMonoBehavior
{
    //public  GameObject enimy_prefab_to_instantiate;

    public GameObject[] Enimy_prefabs;

    public int instantation_count;

    private Transform position_to_instantiate_enimy;

    public List<GameObject> cloned_enimy_list;

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
    }

    public List<GameObject> instantiate_enimyS(GameObject enimy_game_object, int ins_count,Transform position_to_instantiate)
    {
        for(int i = 1;i<=ins_count;i++)
        {
            cloned_enimy_list.Add(Instantiate(enimy_game_object, position_to_instantiate.position, Quaternion.identity));

        }
        return cloned_enimy_list;
    }

    public void instantiate_enimy(int enimy_type_number)
    {
        cloned_enimy_list = instantiate_enimyS(Enimy_prefabs[enimy_type_number], instantation_count, gameObject.transform);

    }


}





