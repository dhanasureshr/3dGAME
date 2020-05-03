using System.Collections;
using System.Collections.Generic;
using UnityEngine;




#region EVENT_TYPE enum
public enum EVENT_TYPE
                    {
                            GAME_INIT,
                            GAME_END,
                            PLAYER_DEAD,
                            GAME_PAUSED,
                            GAME_RESUMED,
                            GAME_STOPED,
                            ENIMY_DEAD
                      

                    };
#endregion



#region interface IListener  initilizer

public interface IListener
{
    void OnEvent(EVENT_TYPE Event_Type, Component Sender, object Param = null);

}

#endregion