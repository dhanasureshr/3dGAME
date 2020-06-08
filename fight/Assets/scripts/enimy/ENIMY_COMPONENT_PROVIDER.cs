using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ENIMY_COMPONENT_PROVIDER : ExtendedCustomMonoBehavior
{
    [Header("ENIMY HEALTH UI PREFABES AND IMAGSE")]
    public GameObject Enimy_health_bar_Game_object;
    public GameObject E_health_bar_fg;
    public Image E_health_bar_image;

    [Inject(InjectFrom.Anywhere)]
    public Emimy_instantiator enimy_instantiator; // this depends on instantiator_for_enimy gameobject


    [Space(15)]
    [Header("CURRENT FIGHTING PETROL POINTS")]
    public GameObject[] Current_fighting_petrol_points;

    [Space(15)]
    [Header("CURRENT SCENE PETROL POINTS")]
    public GameObject[] Current_scene_petorl_points;

   
    
    public void Start()
    {
        Enimy_health_bar_Game_object = GameObject.FindWithTag(tags.enimy_health_bg_tag);
        E_health_bar_fg = GameObject.FindWithTag(tags.enimy_health_fg_tag);
        E_health_bar_image = E_health_bar_fg.GetComponent<Image>();

        Enimy_health_bar_Game_object.SetActive(false);

        Current_fighting_petrol_points = GameObject.FindGameObjectsWithTag(tags.p1);
        Current_scene_petorl_points = GameObject.FindGameObjectsWithTag(tags.p2);
        
    }
}
