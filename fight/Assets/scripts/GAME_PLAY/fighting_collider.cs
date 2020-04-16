using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fighting_collider : ExtendedCustomMonoBehavior, IListener 
{

    /// <summary>
    /// In this script  we should consider the main components iike 
    /// detecting the fighting collisions 
    /// raising the apporiate events to reduce the health of the player and the enimy
    /// and also to play the practicle effects while fighting 
    /// and also we will detect weather we hava to nockdown the enimy or not 
    /// MAINLY THIS SCRIPT SHOULD BE ATTATCHED TO THE PLAYER AND THE ENIMY
    /// if is_player is true means player is hitting enimy
    /// else vise versa 
    /// at the same time 
    /// </summary>
    [TextArea]
    public string doc = "this script should be attatched to the player and enimy  collision points";

    public LayerMask collisionLayer;
    public float radius = 0.005f;
    public float damage = 2f;
    public bool is_Player, is_Enemy;
    public GameObject PLAYER, ENIMY;
    public bool nock_down_the_enimy;
   // public GameObject hit_Fx;


    //this is for the game logic events using event manager
    private void Start()
    {
        event_manager.Instance.AddListener(EVENT_TYPE.HEALTH_CHANAGE, this);
    }

    private void Update()
    {
        DetectCollision();
    }
    void DetectCollision()
    {
        Collider[] hit = Physics.OverlapSphere(transform.position, radius, collisionLayer);

        if(hit.Length > 0)
        {

            gameObject.SetActive(false);
           
            if (is_Player)
            {
                // hear is_player means player is hiting the enimy
                /// hear we came to know that player is hiting enimy
                /// now we hava to raise an event to update the enimy health

                event_manager.Instance.PostNotification(EVENT_TYPE.HEALTH_CHANAGE, this, 2);

                if (gameObject.CompareTag(tags.player_left_hand_tag)||
                    gameObject.CompareTag(tags.player_right_leg_tag))
                {
                    Debug.Log("enimy_nock_down");
                    
                }
                
                
           

                //raise an event to randomely play hit animation on enimy
                Vector3 hit_pos = hit[0].transform.position;
               // Instantiate(hit_Fx, hit_pos, Quaternion.identity);

            }
            else
            {
                //if above condition is false that means enimy is hutting the player 
                /// hear we came to know that enimy is hiting the player
                /// we have to raise an event to update the player health

                // there will be no hit animations on enimy
                event_manager.Instance.PostNotification(EVENT_TYPE.HEALTH_CHANAGE, this, 2);

            }

           


            
        }
    }

    public void OnEvent(EVENT_TYPE Event_Type, Component Sender, object Param)
    {
        switch(Event_Type)
        {
            case EVENT_TYPE.HEALTH_CHANAGE:
                if(Sender.gameObject.GetComponent<fighting_collider>().is_Player)
                {
                    //now reduce the enimy health
                    //Debug.Log("APPLING DAMAGE TO THE ENIMY");
                    //baseusermanager enimy_health_reducer = Sender.gameObject.GetComponentInParent<baseusermanager>();
                     baseusermanager enimy_health_reducer = ENIMY.GetComponent<baseusermanager>();
                     enimy_health_reducer.ReduceHealth((int)Param);
                   // Debug.Log("enimy_current_health"+enimy_health_reducer.GetHealth());
                    
                }

                if(Sender.gameObject.GetComponent<fighting_collider>().is_Enemy)
                {
                    // now reduce the palyer health
                    //Debug.Log("APPLING DAMAGE TO THE PLAYER");
                    //baseusermanager player_health_reducer = Sender.gameObject.GetComponentInParent<baseusermanager>();
                    baseusermanager player_health_reducer = PLAYER.GetComponent<baseusermanager>();
                    player_health_reducer.ReduceHealth((int)Param);
                   // Debug.Log("player_current_health" + player_health_reducer.GetHealth());
                    
                }
                break;
        }
    }
}
