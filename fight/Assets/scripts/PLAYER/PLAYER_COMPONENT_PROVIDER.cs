using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PLAYER_COMPONENT_PROVIDER : ExtendedCustomMonoBehavior
{
    [Header("PLAYER HEALTH UI PREFABES AND IMAGES")]
    public GameObject player_health_bar_gameobject;
    public GameObject P_health_bar_fg;
    public Image P_health_bar_image;


    public GameObject player_strength_bar_gameobject;
    public GameObject P_strength_bar_fg;
    public Image P_strength_bar_image;

    public void Start()
    {
        player_health_bar_gameobject = GameObject.FindWithTag(tags.player_health_bg_tag);
        P_health_bar_fg = GameObject.FindWithTag(tags.player_health_fg_tag);
        P_health_bar_image = P_health_bar_fg.GetComponent<Image>(); // player health bar reference ends

        player_strength_bar_gameobject = GameObject.FindWithTag(tags.Player_strength_bg_tag);
        P_strength_bar_fg = GameObject.FindWithTag(tags.Player_strength_fg_tag);
        P_strength_bar_image = P_strength_bar_fg.GetComponent<Image>();// enimy health bar reference ends

    }

}
