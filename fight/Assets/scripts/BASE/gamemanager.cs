using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gamemanager : MonoBehaviour
{
	public bool isinputallowed = true;
	public bool isgamestarted = false;
	public bool isgameended = false;
	public bool isplayerdead = false;
	public bool isenimydead  = false;
	public bool ispaused = false;



	private static gamemanager instance;


	void Awake()
	{
		makesingleton();

	}

	void makesingleton()
	{
		if(instance != null)
		{
			Destroy(this);
		}else
		{
			instance = this;
			DontDestroyOnLoad(this);
		}


	}

}
