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
    public float radius = 0.5f;
    public float damage = 2f;
    public bool is_Player, is_Enemy;

    public GameObject hit_Fx;


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


                if (gameObject.CompareTag(tags.player_left_hand_tag)||
                    gameObject.CompareTag(tags.player_right_leg_tag))
                {
                    //raise an event to nock down the player
                }

                //raise an event to randomely play hit animation on enimy
                

            }
            else
            {
                //if above condition is false that means enimy is hutting the player 
                /// hear we came to know that enimy is hiting the player
                /// we have to raise an event to update the player health
                
                // there will be no hit animations on enimy


            }

           


            
        }
    }

    public void OnEvent(EVENT_TYPE Event_Type, Component Sender, object Param = null)
    {
        throw new System.NotImplementedException();
    }
}
