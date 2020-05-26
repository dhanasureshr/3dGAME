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
    private float radius = 1.157126f;
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
    #region player rotation constraint 
    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "ENIMY")
        {
            Debug.Log("ENIMY_ENTERED");
            
            t.enabled = true;
            st.sourceTransform = other.gameObject.GetComponentInParent<Transform>();
            targeted_enimy_ref = st.sourceTransform.GetComponentInParent<Transform>();
            targeted_enimy_movement_script_ref = targeted_enimy_ref.gameObject.GetComponentInParent<enimy_movement>();
            disable_enimy_rot_colider = targeted_enimy_movement_script_ref.GetComponent<health>().disable_enimy_Rotation_collider;
            st.weight = 1.0f;
            if(!disable_enimy_rot_colider)
            { 

                if (t.sourceCount > 0)
                {

                    t.RemoveSource(0);
                    
                }
                t.AddSource(st);
                t.SetSource(0, st);
            }
        }
        
    }

    private void OnTriggerStay(Collider other)
    {
        ///hear we can remove the player rotation constraint scorce when enimy dead

        if (other.tag == "ENIMY")
        {
            st.weight = 1.0f;
            if (targeted_enimy_movement_script_ref != null)
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
            transform.gameObject.GetComponentInParent<PLAYER_ANIMATION_HELPER>().PLAY_PLAYER_SHOLDER_DUTE();
            targeted_enimy_ref.gameObject.GetComponentInParent<enimy_animation_helper>().PLAY_ENIMY_SHOLDER_DUTE();
        }
    }

    public void Disable_enimy_movement_before_dute_animation()
    {
        targeted_enimy_movement_script_ref.enimy_nav_mesh_agent.enabled = false;
    }

    public void Enable_player_collider_layer()
    {
        this.transform.gameObject.layer = 10;
    }

    public void Disable_player_collider_layer()
    {
        this.transform.gameObject.layer = 0;
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

