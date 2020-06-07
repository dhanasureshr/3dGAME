using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class game_objects_prefabes_provider_to_gamemanager : MonoBehaviour
{
	[Space(15)]
	[Header("PLAYER_PREFABES")]
	[Tooltip("full_palyer prefab")] public GameObject full_player_prefab;

	[Space(15)]
	[Header("FIGHTING_WAYPOINT_PREFABES")]
	[Tooltip("fighting_petrol_points")] public GameObject[] fighting_petrol_points_prefabes;

	[Space(15)]
	[Header("SCENE_WAYPONT_PREFABES")]
	[Tooltip("scene_petrol_points")] public GameObject[] scene_petrol_points_prefabes;

	[Space(15)]
	[Header("ENIMY_PREFABES")]
	[Tooltip("enimy type 1 prefab container")] public GameObject enimy_prefab1;


	public GameObject health_booster;

}
