using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
using UnityEngine.SceneManagement;

public class Game_Scene_Manager : MonoBehaviour
{
    public static Game_Scene_Manager G_Scene_Manager;

    public GameObject enimy_prfab;
    public int MAXIMUM_NUMBER_OF_ENIMYES_COUNT_IN_CURRENT_SCENE = 50;

    // Depending up on the below value 
    // whether to instantiate the enimy or not is determined here
    // means
    // enimy instantiator co_routing will instatiate enimyes up to the below count
    // if the below count is 0 means then it's time to instantiate new enimyes 
    // on each enimy death the below count should be decreamented
    // at the same time MAXIMUM_NUMBER_OF_ENIMYES_COUNT_IN_CURRENT_SCENE number also should 
    // decrease

    private int Maximum_number_of_active_enimyes_in_scene = 5; 

    public int instantiated_enimyes_count = 0;


    public void Start()
    {
        StartCoroutine("enimy_availibulity_checker");
        
        Debug.Log("enimy_availibulity_checker running ");
    }

 
    private void Update()
    {
       // Debug.Log(MAXIMUM_NUMBER_OF_ENIMYES_COUNT_IN_CURRENT_SCENE);
    }
    
    
    public IEnumerator enimy_availibulity_checker()
    {
        yield return new WaitForSeconds(10);

        if(MAXIMUM_NUMBER_OF_ENIMYES_COUNT_IN_CURRENT_SCENE == 0 && instantiated_enimyes_count == 0)
        {
            Debug.Log("LEVEL COMPLETED DHANA SURESH ");

            
        }
        if(instantiated_enimyes_count == 0 && MAXIMUM_NUMBER_OF_ENIMYES_COUNT_IN_CURRENT_SCENE != 0)
        {
              //; Maximum_number_of_active_enimyes_in_scene;
            Debug.Log("remaining enimyes in scene check:="+MAXIMUM_NUMBER_OF_ENIMYES_COUNT_IN_CURRENT_SCENE);
            StartCoroutine("instantiate_enimy");
        }
        yield return new WaitForSeconds(5);
        StartCoroutine("enimy_availibulity_checker");
    }
    private IEnumerator instantiate_enimy()
    {
        yield return new WaitForSeconds(1);
        if(MAXIMUM_NUMBER_OF_ENIMYES_COUNT_IN_CURRENT_SCENE == 0)
        {
            yield break;
        }
        Instantiate(enimy_prfab,transform.position,Quaternion.identity);
        instantiated_enimyes_count += 1;
        MAXIMUM_NUMBER_OF_ENIMYES_COUNT_IN_CURRENT_SCENE -= 1;
        if(instantiated_enimyes_count == Maximum_number_of_active_enimyes_in_scene)
        {
            yield break;
        }
        yield return new WaitForSeconds(1);
        StartCoroutine("instantiate_enimy");
    }


     void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        StartCoroutine("enimy_availibulity_checker");
    }

}
