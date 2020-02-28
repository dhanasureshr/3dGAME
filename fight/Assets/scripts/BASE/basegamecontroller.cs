using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class basegamecontroller : ExtendedCustomMonoBehavior
{
	
	public bool enimy_is_in_range;
	
	public virtual void PlayerLostLife()
	{
		// this deals about the player death and updating the ui
	}

	public virtual void SpawnPlayer()
	{
		// this deals about the loading the player

	}

	public virtual void ReSpawnPlayer()
	{
		// this deals about the reloading the player

	}

	public virtual void StartGame()
	{
		Debug.Log("Hi dhana suresh game started sucessfully");
		Debug.Log("this starting from the gamemanager script");
		//this deals about the starting the game
	}


	public virtual void RestartGameButtonPressed()
	{
		//this deals about restarting the same level
	}

	public virtual void GameEnded()
	{
		// this deals about the endig of the game
	}

}
