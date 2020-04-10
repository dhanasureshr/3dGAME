using System.Collections;
using System.Collections.Generic;
//----------------------------------------
//singleton EventManager to send events to listeners
// works with IListener implementations

using UnityEngine;

public class event_manager : ExtendedCustomMonoBehavior
{
	#region C# properties
	public static event_manager Instance
	{
		get {return instance;}
		set{}

	}
    #endregion


    #region variables
	// Notifications Manager instance (singleton design pattern)
    private static event_manager instance = null;

	//Array of listener (all objects registered for events
	private Dictionary<EVENT_TYPE,List<IListener>> Listeners = new Dictionary<EVENT_TYPE,List<IListener>>();

    #endregion
    
	
	#region methods
	// call the star-up to initilize
    void Awake()
	{
		
		//if no instance exists, then assign this instance
		if(instance == null)
		{
			instance = this;
			DontDestroyOnLoad(gameObject);
		}
		else
		{
			DestroyImmediate(this);
		}

	}
	//--------------------------------------------------------------
	/// <summary>
	/// Functions to add  listeners to array of listeners
	/// </summary>
	/// <param name="Event_Type">Event to listen for </param>
	/// <param name="Listener">Object to listen for event</param>
	public void AddListener(EVENT_TYPE Event_Type,IListener Listener)
	{
		// List of listener for this event
		List<IListener> ListenList = null;

		// check existing event type key. if exists, add to

		if(Listeners.TryGetValue(Event_Type,out ListenList))
		{
			//List exists so add new item
			ListenList.Add(Listener);
			return;
		}

		//otherwise create new list as dictionary key
		ListenList  = new List<IListener>();
		ListenList.Add(Listener);
		Listeners.Add(Event_Type, ListenList);
	}
	//---------------------------------------------------
	/// <summary>
	/// Functions to post event to listeners
	/// </summary>
	/// <param name="Event_Type">Event to invoke</param>
	/// <param name="Sender">object invoking event</param>
	/// <param name="Param">optional arguments</param>
	// this is the code to post the notification
	public void PostNotification(EVENT_TYPE Event_Type,Component Sender,object Param = null)
	{
		//Notify all listeners of an event

		//List of listener for this event only
		List<IListener> ListenList  = null;

		// if no event exists then exit
		if(!Listeners.TryGetValue(Event_Type,out ListenList))
		{
			return;
		}


		//Entry exists. Now notify appropriate listeners
		for(int i = 0;i<ListenList.Count;i++)
		{
			if(!ListenList[i].Equals(null))
			{
				ListenList[i].OnEvent(Event_Type,Sender,Param);
			}

		}
	}

	//------------------------------------------------------------------------------
		//Remove event from dictionary, including all listeners
		// this is the code to remove the event form the dictionary including listeners

	public void RemoveEvent(EVENT_TYPE Event_Type)
	{
		//Remove entry from dictionary
		Listeners.Remove(Event_Type);
	}
	//----------------------------------------------------------------
	//Remov all redundant entries form the dictionary
	public void RemoveRedundancies()
	{
		//Creat new Dictionary
		Dictionary<EVENT_TYPE,List<IListener>> TmpListeners = new Dictionary<EVENT_TYPE,List<IListener>>();


		

		//Cycle through all dicionary entries
		foreach(KeyValuePair<EVENT_TYPE,List<IListener>> Item in Listeners)
		{
			//Cycles all listeners, remove null objects
			for(int i = Item.Value.Count-1 ;i>=0;i--)
			{
				//If null then remove iteam
				if(Item.Value[i].Equals(null))
					Item.Value.RemoveAt(i);
			}

			//If items remain in list, then add to tmp dictionary
			if(Item.Value.Count > 0)
				TmpListeners.Add(Item.Key,Item.Value);

		}
		//Replace Listeners object with new dictionary
		Listeners = TmpListeners;
	}



    #endregion
}





