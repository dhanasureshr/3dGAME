using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class playermanager : ExtendedCustomMonoBehavior
{
    /// <summary>
    /// this is the player manager script which take cares about managing the player data 
    /// this is the main script which take cares about providing the player data to game play
    /// like player health,etc;
    /// by considering this script as a base for player to provide data to the another moudle like player UI
    /// </summary>

    private health player_health_script_ref;
    public Image health_bar_imager_ref;

    private void Start()
    {
        player_health_script_ref = GetComponent<health>();
        
    }

    public void Update()
    {
        
    }



}
