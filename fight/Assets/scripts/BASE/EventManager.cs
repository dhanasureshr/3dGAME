using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EventManager : MonoBehaviour
{
	public static EventManager Instance
	{
		get{
			return instance;
		}
		set
		{
			
		}
	}

	private static EventManager instance  = null;
	void Awake()
	{
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


	private Dictionary<Event_Type,List<Ilistener>> Listeners = new Dictionary<Event_Type,List<Ilistener>>();

	// this is the code to add the listener 
	public void AddListener(Event_Type event_type,Ilistener Listener)
	{
		List<Ilistener> ListenList = null;
		if(Listeners.TryGetValue(event_type,out ListenList))
		{
			ListenList.Add(Listener);
			return;
		}

		ListenList = new List<Ilistener>();
		ListenList.Add(Listener);
		Listeners.Add(event_type,ListenList);
	}


 // this is the code to post the notification 

	public void PostNotification(Event_Type event_type,Component sender,Object parm = null)
	{
		List<Ilistener> ListenList  = null;
		if(!Listeners.TryGetValue(event_type,out ListenList))
		{
			return;
		}

		for(int i  = 0;i<ListenList.Count;i++)
		{
			if(!ListenList[i].Equals(null))
			{
				ListenList[i].OnEvent(event_type,sender,parm);
			}
		}

	}

	// this is the code to remove event from the list
	public void RemoveEvent(Event_Type event_type)
	{
		Listeners.Remove(event_type);
	}


	// this is the code to remov the redences

	public void RemoveRedancies()
	{
		Dictionary<Event_Type,List<Ilistener>> TmpListeners = new Dictionary<Event_Type,List<Ilistener>>();

		foreach(KeyValuePair<Event_Type,List<Ilistener>> Item in Listeners)
		{

			for(int i = Item.Value.Count -1 ;i >= 0;i--)
			{
				Item.Value.RemoveAt(i);
			}
		

		if(Item.Value.Count > 0)
		{
			TmpListeners.Add(Item.Key,Item.Value);
		}
		}
		Listeners = TmpListeners;
	}


	// this is the code to remove the code at onlevel was loaded
	void OnLevelWasLoaded()
	{
		RemoveRedancies();
	}


}
