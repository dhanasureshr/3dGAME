using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public enum EVENT_TYPE{GAME_INIT,GAME_END,AMMO_EMPTY,HEALTH_CHANAGE,DEAD};

public interface IListener
{
    void OnEvent(EVENT_TYPE Event_Type, Component Sender, object Param = null);

}