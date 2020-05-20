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
    public RotationConstraint t;
    public ConstraintSource st;
    public GameObject enimy;
    public float weight { get => throw new System.NotImplementedException(); set => throw new System.NotImplementedException(); }
    public bool constraintActive { get => throw new System.NotImplementedException(); set => throw new System.NotImplementedException(); }
    public bool locked { get => throw new System.NotImplementedException(); set => throw new System.NotImplementedException(); }

    public int sourceCount => throw new System.NotImplementedException();

    private void Awake()
    {
        player_health_bar_image_ref = GameObject.FindWithTag(tags.player_health_ui_tag).GetComponent<Image>();
        player_strength_bar_image_ref = GameObject.FindWithTag(tags.Player_strength_ui_tag).GetComponent<Image>();
    }

    private void Start()
    {
        player_health_script_ref = GetComponent<health>();
        st.sourceTransform = enimy.GetComponent<Transform>();
        t = gameObject.GetComponent<RotationConstraint>();

        Debug.Log(t.sourceCount);
        t.SetSource(1,st);
    }


   public void Display_player_health(float health_value)
    {
        health_value /= 100.0f;

        if(health_value < 0.0f)
        {
            health_value = 0.0f;
        }

        player_health_bar_image_ref.fillAmount = health_value;
    }

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
}
