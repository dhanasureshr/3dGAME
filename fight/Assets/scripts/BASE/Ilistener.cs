using System.Collections;
using UnityEngine;

public enum Event_Type 
{
	GAME_INTI,
	GAME_ENDED,
	ENIMY_DEAD,
	PLAYER_DEAD,
	ENIMY_SCORE_CHANAGED,
	PLAYER_SCORE_CHANAGED,
	PLAYER_HEALTH_CHANGED,
	ENIMY_HEALTH_CHANAGED,
};

public interface Ilistener
{
	void OnEvent(Event_Type event_type, Component sender, Object parm  = null);
}




