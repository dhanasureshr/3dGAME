using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ui_prefabs_provider_to_gamemanager : ExtendedCustomMonoBehavior
{

	

 	[Space(15)]
	[Header("GAME_UI_PANAL_PREFABS")]
	[Tooltip("Game lost panal prefab")] public GameObject Game_lost_panal_prefab;
	[Tooltip("Game resum panal prefab")] public GameObject Game_resume_panal_prefab;

	[Space(15)]
	[Header("GAME ACTION PANAL PREFABES")]
	[Tooltip("Game fightng panal prefab")] public GameObject Game_fighting_panal;
	[Tooltip("Game gun panal prefab")] public GameObject Game_gun_panal;

}
