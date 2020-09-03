using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public class Asset_Manager : MonoBehaviour
{

    ///<summary>
    ///this is the base script for loading the entire game resources and asserts during run time 
    ///this script contains generic methods to load and release the asserts at run time
    ///this script is under control of main game manager
    /// </summary>
    public void release_assert(GameObject ref_game_object_to_release)
    {
        
        Addressables.ReleaseInstance(ref_game_object_to_release);
        
        

        
    }

}
