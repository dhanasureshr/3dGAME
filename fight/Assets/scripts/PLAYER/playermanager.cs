using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class playermanager : ExtendedCustomMonoBehavior
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

    private void Awake()
    {
        player_health_bar_image_ref = GameObject.FindWithTag(tags.player_health_ui_tag).GetComponent<Image>();
        player_strength_bar_image_ref = GameObject.FindWithTag(tags.Player_strength_ui_tag).GetComponent<Image>();
    }

    private void Start()
    {
        player_health_script_ref = GetComponent<health>();

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


}
