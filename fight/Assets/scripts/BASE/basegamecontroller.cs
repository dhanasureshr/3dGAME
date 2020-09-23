using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class basegamecontroller : ExtendedCustomMonoBehavior
{
	#region globlal variables to get communacated with other scripts

	[Inject(InjectFrom.Anywhere)]
	public event_manager event_manager_ref;

	[Inject(InjectFrom.Anywhere)]
	public CANVAS_COMPONENT_PROVIDER canvas_component_provider;
	
	[Inject(InjectFrom.Anywhere)]
	public game_objects_prefabes_provider_to_gamemanager game_object_prefabes_provider;


	#endregion

	#region local  variables  fro testing baseenimymanager
	//[Inject(InjectFrom.Anywhere)]
	//public baseenimymanager base_enimy_manager;

	//public List<GameObject> active_enimyes;

	//public Transform pos_to_instantiate_eimy;
	#endregion

	#region global variables to instantiate prefabes at the position of dead enimy
	//public Transform Position_to_instantiate_player_booster_or_Atz;
	#endregion

    #region MAIN GAME HANDLING METHODS
    public virtual void PlayerLostLife_Handler_Method()
	{ 
	
		
		Debug.Log("player_lost_life___---from the basegamecontroller");
		Enable_object_in_hirichery(canvas_component_provider.GAME_LOST_PANAL);
		Disable_object_in_hirichery(canvas_component_provider.MAIN_GAME_CANVAS);
		
	}

	public virtual void SpawnPlayer_Handler_Method()
	{
		// this deals about the loading the player

	}

	public virtual void ReSpawnPlayer_Handler_Method()
	{
		// this deals about the reloading the player

	}

	public virtual void StartGame_Handler_Method()
	{
		
		event_manager_ref.RemoveRedundancies();

	
	}

	public virtual void RestartGameButtonPressed_Handler_Method()
	{
		//this deals about restarting the same level
		event_manager_ref.RemoveRedundancies();
	}

	public virtual void GameEnded_Handler_Method()
	{
		// this deals about the endig of the game 
	}

	public virtual void GameStoped_Handler_Method()
	{
		// this deals about the code for handling the game when the game is stoped forcably
	}

	public virtual void GamePaused_Handler_Method()
	{

		Enable_object_in_hirichery(canvas_component_provider.GAME_RESUME_PANAL);
	}

	public virtual void GameResumed_Handler_Method()
	{
		// this delas about game controlls when the game is resumed
		Disable_object_in_hirichery(canvas_component_provider.GAME_RESUME_PANAL);
	}


	#region OBJECT DISABLERS AND ENABLERS
	public virtual void Enable_object_in_hirichery(GameObject ref_gameobject_to_activate_in_hirichey)
	{
		ref_gameobject_to_activate_in_hirichey.SetActive(true);
	}

	public virtual void Disable_object_in_hirichery(GameObject ref_gameobject_to_deactivate_in_hirichey)
	{
		ref_gameobject_to_deactivate_in_hirichey.SetActive(false);
	}

	public virtual void Enable_MULTIPLE_object_in_hirichery(GameObject[] ref_gameobject_to_activate_in_hirichey)
	{
		foreach (GameObject item in ref_gameobject_to_activate_in_hirichey)
		{

			item.SetActive(true);
		}
	}

	public virtual void Disable_MULTIPLE_object_in_hirichery(GameObject[] ref_gameobject_to_deactivate_in_hirichey)
	{

		foreach (GameObject item in ref_gameobject_to_deactivate_in_hirichey)
		{

			item.SetActive(false);
		}
	}
	#endregion


	#endregion

	public void player_supplyers_spanner(Transform position_to_spane)
	{
		Instantiate(game_object_prefabes_provider.health_booster, position_to_spane.position, Quaternion.identity);
	
	}

}
