using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gamemanager : ExtendedCustomMonoBehavior,IListener
{
	/// <summary>
	/// this is the main game manager script in which it knows about every dynamic objcts reference is stored hear 
	/// in order to provide that reference to the another scripts 
	/// some of the references it stores:-------------------
	/// 1) array of fighting petrol points
	/// 2) array of scene petrol points
	/// 3) No enimy types in the scene
	/// 4) main player reference
	/// 5) player Health bar
	/// 6) player Strength bar
	/// 7) enimy Health bar
	/// 
	/// This game manager also take cares about instantating the deferent enimyes at run time 
	/// by defing some properties at level start because  the game manager has full control over the game from start to end 
	/// by taking this as an advantage I came to know that every enimy type has reference to  this game manager 
	/// 
	/// before starting a level I will set some properties that are specific to that level 
	/// depending up on that properites our game manager is going to spawan enimyes
	/// 
	/// at the same time our game manager is also has the reference to the health_booster prefabes,
	/// strength_booster prefabes and Ammo_prefabs
	/// 
	/// when it comes to Ammos it needs to be instantiated at the place of enimy _current_death position
	/// 
	/// 
	/// ==========================================================================================================================================
	/// ------------------------------------------------------------------------------------------------------------------------------------------
	/// MAIN IMPORTANT THING IS WE SHOULD ALSO DEFINE WHICH AMMO PREFAB SHOULD PRESANT AT CURRENT LEVLE SO WE SHOULD DEFINE THIS CONDITION ALSO IN 
	/// LEVEL PROPERTIES
	/// BUT health_booster,strength_booster,score_boosters are common for every level
	/// -------------------------------------------------------------------------------------------------------------------------------------------
	/// ===========================================================================================================================================
	/// 
	/// 
	/// </summary>
    #region global variables to INTIMATE OTHER SCRIPTS
   [HideInInspector] public bool isinputallowed = false;
   [HideInInspector] public bool isgamestarted = false;
   [HideInInspector] public bool isgameended = false;
   [HideInInspector] public bool isplayerdead = false;
   [HideInInspector] public bool isgamestoped = false;
   [HideInInspector] public bool isenimydead  = false;
   [HideInInspector] public bool Game_paused;
   [HideInInspector] private bool is_paused;
	#endregion


	#region local variables to communicate  other scripts with the game manager
	[Inject(InjectFrom.Anywhere)]
	public basegamecontroller base_game_controller_ref;

	public static gamemanager instance;
	
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


		//base_game_controller_ref = gameObject.GetComponent<basegamecontroller>();

		if (Application.isPlaying)
		{
			event_manager.Instance.PostNotification(EVENT_TYPE.GAME_INIT, this);
		}

	}


	#endregion

	private void Update()
	{
		

	}

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
