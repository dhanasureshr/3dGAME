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
	public bool isplayer;
	#endregion

	#region IMPORTANT GAME LOGIC METHODS
	// hear i am initilizing the default values
	private health current_character_health_script_ref;

	private void Start()
	{
		if (isplayer)
		{
			current_character_health_script_ref = gameObject.GetComponent<health>();
		}
		else
		{
			current_character_health_script_ref = gameObject.GetComponent<enimy_manager>().E__manager_ref_health;
			applible_damage = gameObject.GetComponent<enimy_manager>().enimy_properties.APPLIBLE_DAMAGE;
		}
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

	//public float GetHealth()
	//{
	//	return health;
	//}

	public float  GetHealth()
	{
		float ui_capible_health_value;
		ui_capible_health_value = calculat_character_health_for_health_BAR(health);
		return ui_capible_health_value;
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

	public float calculat_character_health_for_health_BAR(float health_value) // this code is used to convert health vlaue to ui usable value
	{
		health_value /= 100.0f;

		if (health_value < 0.0f)
		{
			health_value = 0.0f;
		}

		return health_value;
	}

	#endregion

}
