using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class baseusermanager : ExtendedCustomMonoBehavior
{
    #region local variables 
    private int score;
	private int highscore;
	private  int level;
	private  int health;
	private bool isfinished;

    #endregion

    #region IMPORTANT GAME LOGIC METHODS
    // hear i am initilizing the default values
    public virtual void GetDefaultData()
	{
		score = 0;
		level  = 1;
		health = 100;
		highscore = 0;
		isfinished = false;
	}

    public int GetLevel()
	{
		return level;
	}
	     
	public void SetLevel(int num)
	{
		level = num;
	}

	public int GetHighScore()
	{
		return highscore;
	}

	public int GetScore()
	{
		return score;
	}

	public virtual void AddScore(int num)
	{
		score += num;
	}


	public void LostScore(int num)
	{
		score -= num;
	}

	public void SetScore(int num)
	{
		score = num;
	}

	public int GetHealth()
	{
		return health;
	}

	public void AddHealth(int num)
	{
		health += num;
	}

	public void ReduceHealth(int num)
	{
		health -= num;
	}

	public void SetHealth(int num)
	{
		health += num;
	}

	public bool GetIsFinished()
	{
		return isfinished;
	}

	public void SetIsFinished(bool aval)
	{
		isfinished = aval;
	}

	

	#endregion

}
