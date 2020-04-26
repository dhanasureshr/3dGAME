using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playermanager : ExtendedCustomMonoBehavior
{
    /// <summary>
    /// this is the player manager script which take cares about managing the player data 
    /// this is the main script which take cares about providing the player data to game play
    /// like player health,etc;
    /// by considering this script as a base for player to provide data to the another moudle like player UI
    /// </summary>
    public baseusermanager Player_base_user_manager;
    public int PLAYER_HEALTH;

    private void Start()
    {
        Player_base_user_manager = this.GetComponent<baseusermanager>();
        
    }

    public void Update()
    {
        PLAYER_HEALTH = Player_base_user_manager.GetHealth();

         Debug.Log("player health"+PLAYER_HEALTH);
        
    }



}
