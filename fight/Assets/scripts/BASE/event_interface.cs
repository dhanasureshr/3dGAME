using System.Collections;
using System.Collections.Generic;
using UnityEngine;




#region EVENT_TYPE enum
public enum EVENT_TYPE
                    {
                            GAME_INIT,
                            GAME_END,
                            HEALTH_CHANAGE,
                            PLAYER_DEAD,
                            GAME_PAUSED,
                            GAME_RESUMED,
                            GAME_STOPED,
                            ENIMY_DEAD,
                            NOCK_ENIMY

                    };
#endregion



#region interface IListener  initilizer

public interface IListener
{
    void OnEvent(EVENT_TYPE Event_Type, Component Sender, object Param = null);

}

#endregion