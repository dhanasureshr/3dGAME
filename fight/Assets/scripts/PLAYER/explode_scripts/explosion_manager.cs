using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class explosion_manager : MonoBehaviour
{
    float randomTime;

    public bool explode = false;

    public float minTime = 0.05f;
    public float maxTime = 0.25f;

    [Header("Explosion options")]
    public float explosioionRadius = 12.5f;

    public float explosionForce = 40.0f; //actual value 4000

    public Vector3 position_explode;



    private void Update()
    {
        randomTime = Random.Range(minTime, maxTime);

        

        if (explode == true)
        {
            
            StartCoroutine(Explode(position_explode));
        }
    }

    public void explosino_receiver(Vector3 pose)
    {
        position_explode = pose;
    }


    public IEnumerator Explode(Vector3 positio_explode)
    {
        explode = false;

        yield return new WaitForSeconds(randomTime);

        // if you have demolished objects means you can instantiate here 

        //Explosion Force
        Vector3 explosionPos = positio_explode;
        Collider[] colliders = Physics.OverlapSphere(explosionPos, explosioionRadius);
        foreach (Collider hit in colliders)
        {
            if (hit.GetComponent<Rigidbody>())
            {
                Rigidbody rb = hit.GetComponent<Rigidbody>();

                rb.AddExplosionForce(explosionForce * 50, explosionPos, explosioionRadius);

            }

            if (hit.transform.CompareTag(tags.full_enimy_tag))
            {
                hit.transform.gameObject.GetComponentInParent<baseusermanager>().apply_damage_on_enimy_with_gethit(100);
            }

            if (hit.transform.CompareTag(tags.full_player_tag))
            {
                hit.transform.gameObject.GetComponentInParent<baseusermanager>().apply_damage_on_player(5);
            }
        }


    }
}
