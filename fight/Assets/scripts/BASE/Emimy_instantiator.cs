using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Emimy_instantiator : ExtendedCustomMonoBehavior
{
    public  GameObject enimy_prefab_to_instantiate;
    
    public int instantation_count;

    private Transform position_to_instantiate_enimy;

    private int initial_count = 0;

    public List<GameObject> cloned_enimy_list;

    public void Start()
    {
        cloned_enimy_list = instantiate_enimy(enimy_prefab_to_instantiate, instantation_count, gameObject.transform);
    }


    public List<GameObject> instantiate_enimy(GameObject enimy_game_object, int ins_count,Transform position_to_instantiate)
    {
        for(int i = 1;i<=ins_count;i++)
        {
            cloned_enimy_list.Add(Instantiate(enimy_game_object, position_to_instantiate.position, Quaternion.identity));

        }
        return cloned_enimy_list;
    }
}
