using System.Collections;
using UnityEngine.AddressableAssets;
using UnityEngine;

public class rocket : MonoBehaviour
{
    


    private Rigidbody mybody;
    //  private bool hitsomething;
    public float no_collision_destroy_time = 1300.0f;
    public float on_collision_destroy_time = 1300.0f;
    public float arrow_appliable_damage = 10.0f;
    private BoxCollider rocket_collider;
  

    //this code is for rocket explosion
  //  public Transform rocket_explosion_effect_prefab;

    public AssetReference rocket_explosion_effect;


    //float randomTime; 
    //bool explosion_routine_started = false;
    //public bool explode = false;

    //public float minTime = 0.05f;
    //public float maxTime = 0.25f;

    //[Header("Explosion options")]
    //public float explosioionRadius = 12.5f;

    //public float explosionForce = 4000.0f;
    

    private void Start()
    {
        mybody = gameObject.GetComponent<Rigidbody>();
        rocket_collider = gameObject.GetComponent<BoxCollider>();
        StartCoroutine("Destroy_Rocket_bomb_on_no_collision");
    
       
    }


    private void OnCollisionEnter(Collision colision)
    {
        
        gamemanager.instance.explosion_magager_script_from_game_manager.explosino_receiver(gameObject.transform.position);
        gamemanager.instance.explosion_magager_script_from_game_manager.explode = true;
       
        if (colision.transform.CompareTag(tags.full_enimy_tag))
        {
            colision.transform.gameObject.GetComponent<health>().ApplyDamage(arrow_appliable_damage, false);
        }


        RaycastHit checkGround;
        if (Physics.Raycast(transform.position, Vector3.down, out checkGround, 50))
        {
            //  rocket_bomb_prefab.InstantiateAsync(rocketspanpoint.transform.position, transform.rotation).Completed += rocket_loaded;
            //hear instantiating the fire explosion prefab;
            //Instantiate(rocket_explosion_effect_prefab, checkGround.point, Quaternion.FromToRotation(Vector3.forward, checkGround.normal));
            rocket_explosion_effect.InstantiateAsync(checkGround.point, Quaternion.FromToRotation(Vector3.forward, checkGround.normal)); 


        }
        
       StartCoroutine("Destroy_Rocket_bomb_on_collision");
    }

/*
    public IEnumerator Explode()
    {
        yield return new WaitForSeconds(randomTime);

        // if you have demolished objects means you can instantiate here 

        //Explosion Force
        Vector3 explosionPos = transform.position;
        Collider[] colliders = Physics.OverlapSphere(explosionPos, explosioionRadius);
        foreach (Collider hit in colliders)
        {
            if (hit.GetComponent<Rigidbody>())
            {
                Rigidbody rb = hit.GetComponent<Rigidbody>();

                rb.AddExplosionForce(explosionForce * 50, explosionPos, explosioionRadius);

            }
            
            if(hit.transform.CompareTag(tags.full_enimy_tag))
            {
                hit.transform.gameObject.GetComponentInParent<baseusermanager>().apply_damage_on_enimy_with_gethit(100);
            }

            if(hit.transform.CompareTag(tags.full_player_tag))
            {
                hit.transform.gameObject.GetComponentInParent<baseusermanager>().apply_damage_on_player(5);
            }
        }


        RaycastHit checkGround;
        if (Physics.Raycast(transform.position, Vector3.down, out checkGround, 50))
        {
            //hear instantiating the fire explosion prefab;
            Instantiate(rocket_explosion_effect_prefab, checkGround.point, Quaternion.FromToRotation(Vector3.forward,checkGround.normal));

        }
    }
    */


    private IEnumerator Destroy_Rocket_bomb_on_no_collision()
    {
        yield return new WaitForSeconds(no_collision_destroy_time);
        
          Destroy(gameObject);
       // Addressables.ReleaseInstance(gameObject);
       
    }


    private IEnumerator Destroy_Rocket_bomb_on_collision()
    {
        yield return new WaitForSeconds(on_collision_destroy_time);
          Destroy(gameObject);
        //Addressables.ReleaseInstance(gameObject);
    }


}
