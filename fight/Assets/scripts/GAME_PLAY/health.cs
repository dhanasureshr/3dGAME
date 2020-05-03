using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class health : MonoBehaviour
{

    public float character_health = 100.0f;

   // [Inject(InjectFrom.Anywhere)]
    public enimy_movement enimy_movement_ref_for_enimyanimations;
    private bool characted_died;
    public bool is_player;

    public void Start()
    {
        enimy_movement_ref_for_enimyanimations = GetComponentInParent<enimy_movement>();
    }
    public void ApplyDamage(float damage,bool KnockDown)
    {
        if(characted_died)
        {
            return;
        }



        character_health -= damage;

        if (character_health <= 0.0f)
        {
            character_health -= damage;
            characted_died = true;

            if(is_player)
            {
                // deactivate the enimy movement scripts
            }
            return;

        }

        if(!is_player)
        {
            if(KnockDown)
            {
                if(Random.Range(0,1)>=0)
                {
                    //playnockdown
                    enimy_movement_ref_for_enimyanimations.enimy_animation_helper_ref.PLAY_ENIMY_NOCK_DOWN();
                    enimy_movement_ref_for_enimyanimations.StopCoroutine("start_enimy_movement");
                    enimy_movement_ref_for_enimyanimations.StopCoroutine("enimy_fighting");

                }
            }else
            {
                if(Random.Range(0,3)>1)
                {
                    //play hit
                    enimy_movement_ref_for_enimyanimations.enimy_animation_helper_ref.PLAY_ENIMY_GET_HIT();
                }
            }
        }
    }
}
