using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fighting_collider : ExtendedCustomMonoBehavior//, IListener 
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
   ///////////////////////////////// public float damage = 2f;
    public bool is_Player, is_Enemy;
    public bool nock_down_the_enimy;
    public GameObject hit_Fx;

    //[HideInInspector]
    //public GameObject PLAYER;
    //public GameObject ENIMY;
                      
    ////this is for the game logic events using event manager
    //private void Start()
    //{
    //    event_manager.Instance.AddListener(EVENT_TYPE.HEALTH_CHANAGE, this);
    //    event_manager.Instance.AddListener(EVENT_TYPE.NOCK_ENIMY, this);
    //    PLAYER = GameObject.Find("full_player");
    //}

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

                // event_manager.Instance.PostNotification(EVENT_TYPE.HEALTH_CHANAGE, this, 2);


                //raise an event to randomely play hit animation on enimy
                Vector3 hit_pos = hit[0].transform.position;
                hit_pos = hit_pos + new Vector3(0.0f, 0.5f, 0.0f);
                //Instantiate(hit_Fx, hit_pos, Quaternion.identity);

                if (gameObject.CompareTag(tags.player_left_leg_tag))
                {
                    Debug.Log("enimy_nock_down");
                    // event_manager.Instance.PostNotification(EVENT_TYPE.NOCK_ENIMY, this);
                    ////////////////// hit[0].GetComponentInParent<health>().ApplyDamage(damage, true);
                    
                    hit[0].GetComponentInParent<baseusermanager>().apply_damage_on_enimy_with_nock_down();
                    Instantiate(hit_Fx, hit_pos, Quaternion.identity);
                }
                else
                {
                    if (Random.Range(0, 9) > 1)
                    {
                        ///////////////// hit[0].GetComponentInParent<health>().ApplyDamage(damage, false);

                        hit[0].GetComponentInParent<baseusermanager>().apply_damage_on_enimy_with_gethit();
                        Instantiate(hit_Fx, hit_pos, Quaternion.identity);
                    }
                }
            }
            
            if(is_Enemy)
            {
                //    //if above condition is false that means enimy is hutting the player 
                //    /// hear we came to know that enimy is hiting the player
                //    /// we have to raise an event to update the player health

                //    // there will be no hit animations on enimy
                //  // event_manager.instance.postnotification(event_type.health_chanage, this, 2);

                if (Random.Range(0, 3) > 0)
                {
                    ///////////////////////////// hit[0].GetComponentInParent<health>().ApplyDamage(damage, false);
                   // if(Random.Range(0,5)>0)
                   // {
                        hit[0].GetComponentInParent<PLAYER_ANIMATION_HELPER>().PLAY_PLAYER_GET_HIT(Random.Range(0,4));
                    //}
                    hit[0].GetComponentInParent<baseusermanager>().apply_damage_on_player();
                }
            }

           


            
        }
    }

    //public void onevent(event_type event_type, component sender, object param)
    //{
    //    switch(event_type)
    //    {
    //        case event_type.health_chanage:
    //            if(sender.gameobject.getcomponent<fighting_collider>().is_player)
    //            {
    //                //now reduce the enimy health
    //                //debug.log("appling damage to the enimy");
    //                //baseusermanager enimy_health_reducer = sender.gameobject.getcomponentinparent<baseusermanager>();
    //                 baseusermanager enimy_health_reducer = enimy.gameobject.getcomponent<baseusermanager>();
    //                if (random.range(0, 3) == 1)
    //                {
    //                    enimy_animation_helper enimy_animation_helper_ref = enimy.gameobject.getcomponent<enimy_animation_helper>();
    //                    enimy_animation_helper_ref.play_enimy_get_hit();
    //                }
    //                 enimy_health_reducer.reducehealth((int)param);

                    
                   
                    
    //            }

    //            if(sender.gameobject.getcomponent<fighting_collider>().is_enemy)
    //            {
    //                // now reduce the palyer health
    //                //debug.log("appling damage to the player");
    //                //baseusermanager player_health_reducer = sender.gameobject.getcomponentinparent<baseusermanager>();
    //                baseusermanager player_health_reducer = player.getcomponent<baseusermanager>();
    //                player_health_reducer.reducehealth((int)param);
                  
                    
    //            }
    //            break;


    //        case event_type.nock_enimy:

    //            enimy_animation_helper enimy_animation_helper_ref_for_nock_down = enimy.gameobject.getcomponent<enimy_animation_helper>();
    //            enimy_animation_helper_ref_for_nock_down.play_enimy_nock_down();
    //            enimy_movement enimy_movement_ref_for_nock_down = enimy.gameobject.getcomponent<enimy_movement>();
    //            enimy_movement_ref_for_nock_down.stopcoroutine("start_enimy_movement");
    //            enimy_movement_ref_for_nock_down.stopcoroutine("enimy_fighting");
    //            debug.log(enimy.name);

                

    //            break;
    //    }
    //}
}
