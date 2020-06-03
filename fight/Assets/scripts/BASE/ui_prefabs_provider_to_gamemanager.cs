using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ui_prefabs_provider_to_gamemanager : ExtendedCustomMonoBehavior
{
	[TextArea]
	public  string objt1 = "ui_bar prefabes are hear";
	[Tooltip("Enimy health bar prefab")] public GameObject Enimy_health_bar_prefab; // enimy_health bar to activate and deactivate accordingely;
	[Tooltip("Enimy health bar fillable image")] public Image E_health_bar_image;
	
	[Space(15)]
	[Tooltip("Player health bar prefab")] public GameObject Player_health_bar_prefab;
	[Tooltip("Enimy health bar fillable image")] public Image P_health_bar_image;

	[Space(15)]
	[Tooltip("Player strength bar prefab")] public GameObject player_stenght_bar_prefab;
	[Tooltip("player strength bar fillable image")] public Image P_strength_bar_image;


 	[Space(15)]
	[TextArea]
	public  string objt2 = "main game panal prefabes are hear";
	[Tooltip("Game lost panal prefab")] public GameObject Game_lost_panal_prefab;
	[Tooltip("Game resum panal prefab")] public GameObject Game_resume_panal_prefab;

}
