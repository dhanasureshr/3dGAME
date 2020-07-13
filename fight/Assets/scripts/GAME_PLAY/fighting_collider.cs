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
    public bool is_Player, is_Enemy;
    public bool nock_down_the_enimy;
    public GameObject[] hit_Fx;

    #region changin the applible damage code to set it on opponent
    [Inject(InjectFrom.Anywhere)]
    public enimy_manager enimy_manageer_ref_for_applible_damage;
    #endregion

    private Collider[] hit;

    private Vector3 hit_pos;

    private playermanager player_hit_impact_on_enimy;

    private float enimy_hit_impact_on_player;

    private Vector3 hit_effect_pos_added = new Vector3(0.0f, 0.5f, 0.0f);

    private void Start()
    {
       if(is_Player)
        {
            player_hit_impact_on_enimy = gameObject.GetComponentInParent<playermanager>();
        }

       if(is_Enemy)
        {
            enimy_hit_impact_on_player = gameObject.GetComponentInParent<enimy_manager>().enimy_properties.APPLIBLE_DAMAGE;
        }
    }

    private void Update()
    {
        hit = Physics.OverlapSphere(transform.position, radius, collisionLayer);
        if(hit.Length > 0)
        {
            if(hit[0].CompareTag(tags.full_player_tag)|| hit[0].CompareTag(tags.full_enimy_tag))
            {
                DetectCollision();
            }
            
        }
        
    }

    void DetectCollision()
    {
        //hit = Physics.OverlapSphere(transform.position, radius, collisionLayer);

       // if(hit.Length > 0)
      //  {
            

            gameObject.SetActive(false);
           
            if (is_Player)
            {
                // hear is_player means player is hiting the enimy
                /// hear we came to know that player is hiting enimy
                /// now we hava to raise an event to update the enimy health


                //raise an event to randomely play hit animation on enimy
                hit_pos = hit[0].transform.position;
                hit_pos = hit_pos + hit_effect_pos_added;
             

                #region changin the applible damage code to set it on opponent
                
               ///////////////////////////////changed to rectify gc problem///////////////////////////float player_hit_impact_on_enimy = gameObject.GetComponentInParent<playermanager>().AApplible_damage;// hear we take the player 
                                                                     // applible damage and apply it to enimy to subtract it  from enimy health
                #endregion

                if (gameObject.CompareTag(tags.player_left_leg_tag))
                {
                   // Debug.Log("enimy_nock_down");
                   
                    hit[0].GetComponentInParent<baseusermanager>().apply_damage_on_enimy_with_nock_down(player_hit_impact_on_enimy.AApplible_damage);
                    
                    Instantiate(hit_Fx[0], hit_pos, Quaternion.identity);
                }
                else
                {
                    if (Random.Range(0, 9) > 1)
                    {
                        hit[0].GetComponentInParent<baseusermanager>().apply_damage_on_enimy_with_gethit(player_hit_impact_on_enimy.AApplible_damage);
                        if (player_hit_impact_on_enimy.SWORD_MODE)
                        {
                            Instantiate(hit_Fx[1], hit_pos, Quaternion.identity);
                        }
                        else if(player_hit_impact_on_enimy.MAGIC_MODE)
                        {
                            Instantiate(hit_Fx[2], hit_pos, Quaternion.identity);
                        }
                        else
                        {
                            Instantiate(hit_Fx[0], hit_pos, Quaternion.identity);
                        }
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

               //////////////////////////changed to retify gc problem////////////////////////////////// float enimy_hit_impact_on_player = gameObject.GetComponentInParent<enimy_manager>().enimy_properties.APPLIBLE_DAMAGE;// hear we take
                                                               // the enimy applible damage and apply it to player to subtract it  from player health

                if (Random.Range(0, 3) > 0)
                {
                    
                    hit[0].GetComponentInParent<PLAYER_ANIMATION_HELPER>().PLAY_PLAYER_GET_HIT(Random.Range(0,4));
                    hit[0].GetComponentInParent<baseusermanager>().apply_damage_on_player(enimy_hit_impact_on_player);
                }
            }

           


            
        //}
    }


}
