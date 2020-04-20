using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gamemanager : ExtendedCustomMonoBehavior,IListener
{
    #region global variables to INTIMATE OTHER SCRIPTS
    public bool isinputallowed = false;
	public bool isgamestarted = false;
	public bool isgameended = false;
	public bool isplayerdead = false;
	public bool isgamestoped = false;
	public bool isenimydead  = false;
	public bool Game_paused;
	private bool is_paused;

	#endregion


	#region local variables to communicate  other scripts with the game manager

	private basegamecontroller base_game_controller_ref;
	private static gamemanager instance;
	
    #endregion


    #region make singletons
    void Awake()
	{
		makesingleton();

	}


	void makesingleton()
	{
		if (instance != null)
		{
			Destroy(this);
		}
		else
		{
			instance = this;
			DontDestroyOnLoad(this);
		}


	}

    #endregion


    #region start to add event listeners and to post GAME_INIT notification
    public void Start()
	{
		event_manager.Instance.AddListener(EVENT_TYPE.GAME_INIT, this);
		event_manager.Instance.AddListener(EVENT_TYPE.GAME_PAUSED, this);
		event_manager.Instance.AddListener(EVENT_TYPE.GAME_RESUMED, this);
		event_manager.Instance.AddListener(EVENT_TYPE.GAME_STOPED, this);


		base_game_controller_ref = gameObject.GetComponent<basegamecontroller>();

		if (Application.isPlaying)
		{
			event_manager.Instance.PostNotification(EVENT_TYPE.GAME_INIT, this);
		}
	}


    #endregion


    #region Application quite detection to post GAME_STOPED notification

    void OnApplicationQuit()
	{


		event_manager.Instance.PostNotification(EVENT_TYPE.GAME_STOPED, this);
	}


    #endregion


    #region code to set and get the ispaused variable and to post notifications accordingly

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

	#endregion


	#region OnEvent IListener Interface method implementation

	public void OnEvent(EVENT_TYPE Event_Type, Component Sender, object Param = null)
	{
		switch(Event_Type)
		{
			case EVENT_TYPE.GAME_INIT:
				isgamestarted = true;
				base_game_controller_ref.StartGame_Handler_Method();
				break;


			case EVENT_TYPE.GAME_PAUSED:
				Game_paused = true;
				base_game_controller_ref.GamePaused_Handler_Method();
				break;


			case EVENT_TYPE.GAME_RESUMED:
				Game_paused = false;
				base_game_controller_ref.GameResumed_Handler_Method();
				break;

			case EVENT_TYPE.GAME_STOPED:
				base_game_controller_ref.GameStoped_Handler_Method();
				break;

		}
		
		
	}

#endregion



}
