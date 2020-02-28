using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gamemanager : ExtendedCustomMonoBehavior,IListener
{
	public bool isinputallowed = false;
	public bool isgamestarted = false;
	public bool isgameended = false;
	public bool isplayerdead = false;
	public bool isenimydead  = false;
	public bool Game_paused;
	private bool is_paused;


	private  basegamecontroller base_game_controller_ref;


	private static gamemanager instance;


	void Awake()
	{
		makesingleton();

	}

	public void Start()
	{
		event_manager.Instance.AddListener(EVENT_TYPE.GAME_INIT, this);
		event_manager.Instance.AddListener(EVENT_TYPE.GAME_PAUSED, this);
		event_manager.Instance.AddListener(EVENT_TYPE.GAME_RESUMED, this);

		base_game_controller_ref = gameObject.GetComponent<basegamecontroller>();

		if (Application.isPlaying)
		{
			event_manager.Instance.PostNotification(EVENT_TYPE.GAME_INIT, this);
		}
	}


	public bool ispaused
	{

		get
		{

			return is_paused;
		}
		set
		{
			is_paused = value;
			if (is_paused)
			{
				Time.timeScale = 0.0f;
				event_manager.Instance.PostNotification(EVENT_TYPE.GAME_PAUSED, this, is_paused);
			}
			else
			{
				Time.timeScale = 1.0f;
				event_manager.Instance.PostNotification(EVENT_TYPE.GAME_RESUMED, this, is_paused);
			}
		}

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

	public void OnEvent(EVENT_TYPE Event_Type, Component Sender, object Param = null)
	{
		switch(Event_Type)
		{
			case EVENT_TYPE.GAME_INIT:
				isgamestarted = true;
				base_game_controller_ref.StartGame();
				break;


			case EVENT_TYPE.GAME_PAUSED:
				Game_paused = true;
				break;


			case EVENT_TYPE.GAME_RESUMED:
				Game_paused = false;
				break;
		}
		
		
	}
}
