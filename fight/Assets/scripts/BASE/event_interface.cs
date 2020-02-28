using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public enum EVENT_TYPE{GAME_INIT,GAME_END,HEALTH_CHANAGE,PLAYER_DEAD,GAME_PAUSED,GAME_RESUMED};

public interface IListener
{
    void OnEvent(EVENT_TYPE Event_Type, Component Sender, object Param = null);

}