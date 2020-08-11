using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class oil_barrel_explode_script : MonoBehaviour
{
    public Transform destroyed_barrel;
    public Transform explode_vfx;

   // public rocket t;



    private void OnCollisionEnter(Collision collision)
    {
        Instantiate(destroyed_barrel, transform.position, transform.rotation);
        Destroy(gameObject);
        gamemanager.instance.explosion_magager_script_from_game_manager.explosino_receiver(gameObject.transform.position);
        gamemanager.instance.explosion_magager_script_from_game_manager.explode = true;


        RaycastHit checkGround;
        if (Physics.Raycast(transform.position, Vector3.down, out checkGround, 50))
        {
            //hear instantiating the fire explosion prefab;
            Instantiate(explode_vfx, checkGround.point, Quaternion.FromToRotation(Vector3.forward, checkGround.normal));

        }
    }
}
