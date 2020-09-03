using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;
using UnityEngine.ResourceManagement.AsyncOperations;

public class rocket_controller : MonoBehaviour
{
    public Animator rocket_animator;

    public static int rocket_fire = Animator.StringToHash("lauch_rocket");
    public float rocketforce = 100.0f;


    //addressable assrt code;
    private GameObject rocket_bomb;
    public AssetReference rocket_bomb_prefab;
    public Transform rocketspanpoint;


    public void Start()
    {
        rocket_animator = gameObject.GetComponent<Animator>();

    }

    public void PLAY_PLAYER_ROCKET_FIRE_ANIMATION()
    {
        rocket_animator.SetTrigger(rocket_fire);
    }

    public void Fire_Rocket()
    {
        // GameObject rocket = Instantiate(rocket_prefab, rocketspanpoint.transform.position,transform.rotation);
        //  rocket.GetComponent<Rigidbody>().velocity = rocketspanpoint.forward * rocketforce;

        
        //addressable assert code
        rocket_bomb_prefab.InstantiateAsync(rocketspanpoint.transform.position, transform.rotation).Completed += rocket_loaded;


        



    }

    private void rocket_loaded(UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle<GameObject> obj)
    {
        // In a production environment, you should add exception handling to catch scenarios such as a null result.
        rocket_bomb = obj.Result;
        if (obj.Status == AsyncOperationStatus.Succeeded)
        {
            rocket_bomb.GetComponent<Rigidbody>().velocity = rocketspanpoint.forward * rocketforce;

        }
    }




}
