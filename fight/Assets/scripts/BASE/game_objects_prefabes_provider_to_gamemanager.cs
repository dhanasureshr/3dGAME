using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class game_objects_prefabes_provider_to_gamemanager : MonoBehaviour
{

	[Space(15)]
	[TextArea]
	public string objt1 = "main game object prefabes are hear";
	[Tooltip("full_palyer prefab")] public GameObject full_player_prefab;

	[Space(15)]
	[Tooltip("fighting_petrol_points")] public GameObject[] fighting_petrol_points_prefabes;

	[Space(15)]
	[Tooltip("scene_petrol_points")] public GameObject[] scene_petrol_points_prefabes;


}
