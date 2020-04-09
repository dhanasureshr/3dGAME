using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fighting_collider : MonoBehaviour
{
    [TextArea]
    public string doc = "this script should be attatched to the player and enimy  collision points";

    public LayerMask collisionLayer;
    public float radius = 0.5f;
    public float damage = 2f;

    public bool is_Player, is_Enemy;

    //public GameObject hit_Fx;
    private void Update()
    {
        DetectCollision();
    }
    void DetectCollision()
    {
        Collider[] hit = Physics.OverlapSphere(transform.position, radius, collisionLayer);

        if(hit.Length > 0)
        {
            // we are hiting something
           
            
                gameObject.SetActive(false);
            
        }
    }

}
