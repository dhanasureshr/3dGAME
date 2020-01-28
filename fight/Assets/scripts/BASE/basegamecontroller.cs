using System.Collections;
using System.Collections.Generic;
using UnityEngine;
public class basegamecontroller : MonoBehaviour
{
	bool Paused;
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
		//this deals about the starting the game
	}


	public virtual void RestartGameButtonPressed()
	{
		//this deals about restarting the same level
	}



	public bool paused
	{

		get
		{

			return Paused;
		}
		set
		{
			Paused = value;
			if(Paused)
			{
				Time.timeScale = 0.0f;

			}
			else
			{
				Time.timeScale = 1.0f;
			}
		}

	}

	public virtual void GameEnded()
	{
		// this deals about the endig of the game
	}
}
