using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Animations;
public class playermanager : ExtendedCustomMonoBehavior,IConstraint
{
    /// <summary>
    /// this is the player manager script which take cares about managing the player data 
    /// this is the main script which take cares about providing the player data to game play
    /// like player health,etc;
    /// by considering this script as a base for player to provide data to the another moudle like player UI
    /// </summary>

    private health player_health_script_ref;
    private Image player_health_bar_image_ref;
    private Image player_strength_bar_image_ref;

    #region Rotation constraint variables
    public RotationConstraint t;
    public ConstraintSource st;
    public LayerMask test_layer_mask;
    
    //private float radius = 1.157126f;
    public float weight { get => throw new System.NotImplementedException(); set => throw new System.NotImplementedException(); }
    public bool constraintActive { get => throw new System.NotImplementedException(); set => throw new System.NotImplementedException(); }
    public bool locked { get => throw new System.NotImplementedException(); set => throw new System.NotImplementedException(); }
    public int sourceCount => throw new System.NotImplementedException();
    #endregion

    #region initilizing methods
    private void Awake()
    {
        player_health_bar_image_ref = GameObject.FindWithTag(tags.player_health_ui_tag).GetComponent<Image>();
        player_strength_bar_image_ref = GameObject.FindWithTag(tags.Player_strength_ui_tag).GetComponent<Image>();
    }

    private void Start()
    {
        player_health_script_ref = GetComponent<health>();
        t = gameObject.GetComponent<RotationConstraint>();
        t.enabled = false;
        t.weight = 1.0f;
        t.rotationOffset = new Vector3(0, 180, 0);
    }

    #endregion

    #region player ui display methods
//this is the code to display the player health
    public void Display_player_health(float health_value)
    {
        health_value /= 100.0f;

        if(health_value < 0.0f)
        {
            health_value = 0.0f;
        }

        player_health_bar_image_ref.fillAmount = health_value;
    }
    #endregion


    #region palyer dute variables
    private Transform targeted_enimy_ref;
    private enimy_movement targeted_enimy_movement_script_ref;
    private bool disable_enimy_rot_colider;
    #endregion
    
    ///<summery>
    /// this is the code to rotate the player towords the enimy when the enimy enters in to the fight range
    /// and also this code will help to set the rotation cosstraint sorces at run time when the enimy with in range
    ///</summery>
    
    #region player rotation constraint 
    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "ENIMY") // to check weather enimy is entered or not
        {
            Debug.Log("ENIMY_ENTERED");
            
            t.enabled = true; // now i enabled the rotation constraint when entered into the fighting range
            
            st.sourceTransform = other.gameObject.GetComponentInParent<Transform>(); // placing enimy transform and placing 
                                                                                     // in constraint sorce
                                                                                     
            st.weight = 1.0f; //appling wait to the sorce transform now player will rotate towords enimy
            
            targeted_enimy_ref = st.sourceTransform.GetComponentInParent<Transform>(); // getting exact enimy transform 
                                                                                       // from the setted constraint sorce
                                                                                       
            targeted_enimy_movement_script_ref = targeted_enimy_ref.gameObject.GetComponentInParent<enimy_movement>();//getting the enimy 
                                                                                        // movement script from the targeted_enimy_ref 
            disable_enimy_rot_colider = targeted_enimy_movement_script_ref.GetComponent<health>().disable_enimy_Rotation_collider;// a 
                                                                // bool variable to determine whether to disable enimy rotation collider 
                                                                      
            if(!disable_enimy_rot_colider) // if  disable_enimy_rot_colider is false 
            { 

                if (t.sourceCount > 0) // if rotation constraint sorce count grater than 0 then this will execute
                {

                    t.RemoveSource(0); // this will remove all the sorces form the Rotation constraint
                    
                }
                t.AddSource(st); // this will creat a sorce container on the Rotation constraint
                t.SetSource(0, st); // this will set the current enimy sorce transform to the Rotation constraint at index 0
            }
        }
        
    } // end of ontriggerenter method

    private void OnTriggerStay(Collider other) 
    {
        ///hear we can remove the player rotation constraint scorce when enimy dead

        if (other.tag == "ENIMY") // check whether the enimy entered or not
        {

            st.weight = 1.0f; // now player will rotate towords enimy
            
            if (targeted_enimy_movement_script_ref != null) // if there is a enimy_movement script 
            {
                if (targeted_enimy_movement_script_ref.GetComponent<health>().disable_enimy_Rotation_collider)
                {
                    if (t.sourceCount >= 0)
                    {
                        if (t.enabled == true)
                            t.enabled = false;

                        st.sourceTransform = null;
                        targeted_enimy_ref = null;
                        targeted_enimy_movement_script_ref = null;
                        return;
                    }
                }
            }
        }

    }

    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "ENIMY")
        {

            t.enabled = false;
            if (t.sourceCount > 0)
            {
                t.RemoveSource(0);
            }
            if (targeted_enimy_movement_script_ref != null)
            {
                if (targeted_enimy_movement_script_ref.GetComponent<health>().disable_enimy_Rotation_collider)
                {
                    if (t.sourceCount > 0)
                        t.RemoveSource(0);
                }
            }

            st.sourceTransform = null;
            targeted_enimy_ref = null;
            targeted_enimy_movement_script_ref = null;
        }
    }
    #endregion

    #region player and current enimy dute animation
    
    public void PLAY_DUTE_ANIMATIONS1()
    {
        if (targeted_enimy_movement_script_ref != null)
        {
            targeted_enimy_movement_script_ref.GetComponent<health>().disable_enimy_Rotation_collider = true;
        }
        if (targeted_enimy_movement_script_ref != null)
        {
            Disable_enimy_movement_before_dute_animation();
        }

        
        if (targeted_enimy_ref != null)
        {
            play_dute(Random.Range(0,2));

            //transform.gameobject.getcomponentinparent<player_animation_helper>().play_player_sholder_dute();
            //targeted_enimy_ref.gameobject.getcomponentinparent<enimy_animation_helper>().play_enimy_sholder_dute();

            //transform.gameObject.GetComponentInParent<PLAYER_ANIMATION_HELPER>().PLAY_PLAYER_HELL_DUTE();
            //targeted_enimy_ref.gameObject.GetComponentInParent<enimy_animation_helper>().PLAY_ENIMY_HELL_DUTE();
        }
    }
    void play_dute(int n)
    {
        if(n ==0)
        {
            transform.gameObject.GetComponentInParent<PLAYER_ANIMATION_HELPER>().PLAY_PLAYER_SHOLDER_DUTE();
            targeted_enimy_ref.gameObject.GetComponentInParent<enimy_animation_helper>().PLAY_ENIMY_SHOLDER_DUTE();
        }
        if(n == 1)
        {

            transform.gameObject.GetComponentInParent<PLAYER_ANIMATION_HELPER>().PLAY_PLAYER_HELL_DUTE();
            targeted_enimy_ref.gameObject.GetComponentInParent<enimy_animation_helper>().PLAY_ENIMY_HELL_DUTE();
        }
    }
    public void Disable_enimy_movement_before_dute_animation()
    {
        targeted_enimy_movement_script_ref.enimy_nav_mesh_agent.enabled = false;
    }

    public void Enable_player_collider_layer()
    {
        transform.gameObject.layer = 10;
    }

    public void Disable_player_collider_layer()
    {
        transform.gameObject.layer = 0;
    }
    public void Setup_player_hand_Ik()
    {

    }

    public void Remove_player_hand_Ik()
    {

    }
    #endregion

    #region player rotation constraint override metods
    public int AddSource(ConstraintSource source)
    {
        throw new System.NotImplementedException();
    }

    public void RemoveSource(int index)
    {
        throw new System.NotImplementedException();
    }

    public ConstraintSource GetSource(int index)
    {
        throw new System.NotImplementedException();
    }

    public void SetSource(int index, ConstraintSource source)
    {
        
        throw new System.NotImplementedException();
    }

    public void GetSources(List<ConstraintSource> sources)
    {
        throw new System.NotImplementedException();
    }

    public void SetSources(List<ConstraintSource> sources)
    {
        throw new System.NotImplementedException();
    }
    #endregion


}//enimy manager class

