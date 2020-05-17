using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class baseusermanager : ExtendedCustomMonoBehavior
{
    #region local variables 
    private int score;
	private int highscore;
	private  int level;
	private bool isfinished;
	public float health = 100;
	public float applible_damage = 0.0f;
	#endregion

	#region IMPORTANT GAME LOGIC METHODS
	// hear i am initilizing the default values
	private health current_character_health_script_ref;

	private void Start()
	{
		current_character_health_script_ref = gameObject.GetComponent<health>();
	}


	public void apply_damage_on_enimy_with_nock_down()
	{
		current_character_health_script_ref.ApplyDamage(applible_damage,true);
	}

	public void apply_damage_on_enimy_with_gethit()
	{
		current_character_health_script_ref.ApplyDamage(applible_damage, false);
	}

	public void apply_damage_on_player()
	{
		current_character_health_script_ref.ApplyDamage(applible_damage, false);
	}






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

	public float GetHealth()
	{
		return health;
	}

	public void AddHealth(float num)
	{
		health += num;
	}

	public void ReduceHealth(float num)
	{
		health -= num;
	}

	public void SetHealth(float num)
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
