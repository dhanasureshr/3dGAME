using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ENIMY_COMPONENT_PROVIDER : MonoBehaviour
{
    [Header("ENIMY HEALTH UI PREFABES AND IMAGSE")]
    public GameObject Enimy_health_bar_Game_object;
    public Image E_health_bar_image;

    public void Start()
    {
        Enimy_health_bar_Game_object = GameObject.FindWithTag(tags.enimy_health_bg_tag);
        
    }
}
