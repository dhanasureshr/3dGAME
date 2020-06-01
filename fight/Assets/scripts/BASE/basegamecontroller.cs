using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class basegamecontroller : ExtendedCustomMonoBehavior
{
	#region Local variabels to provide communication with the scripts
	[Inject(InjectFrom.Anywhere)]
	public event_manager event_manager_ref;

	public GameObject GAME_LOST_PANAL;

	public GameObject GAME_RESUME_PANAL;

	public GameObject Enimy_health_bar_prefab; // enimy_health bar to activate and deactivate accordingely;
	public Image E_health_bar_image;
	#endregion

	

	#region MAIN GAME HANDLING METHODS
	public virtual void PlayerLostLife_Handler_Method()
	{
		// this deals about the player death and updating the ui
		Debug.Log("player_lost_life___---from the basegamecontroller");

		GAME_LOST_PANAL.SetActive(true);
		
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
		
		//this deals about the starting the game
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
		GAME_RESUME_PANAL.SetActive(true);
	}

	public virtual void GameResumed_Handler_Method()
	{
		// this delas about game controlls when the game is resumed
		GAME_RESUME_PANAL.SetActive(false);
	}


	public virtual void Enable_enimy_health_bar()
	{
		Enimy_health_bar_prefab.SetActive(true);
	}

	public virtual void Disable_enimy_health_bar()
	{
		Enimy_health_bar_prefab.SetActive(false);
	}
    #endregion

}
