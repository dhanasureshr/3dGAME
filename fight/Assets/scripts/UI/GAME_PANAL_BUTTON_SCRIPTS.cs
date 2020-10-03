using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;


public class GAME_PANAL_BUTTON_SCRIPTS :ExtendedCustomMonoBehavior
{
    /// This is the script to handle the main game panal buttons
    /// like :..........REPLAY,EXIT,BACK,GOTOMENU,SETTINGS,RESUME,PAUSE,PLAY buttons
    /// some buttons related to the scenes(levels of the game)


    [Inject(InjectFrom.Anywhere)]
    public CANVAS_COMPONENT_PROVIDER canvas_component_provider_script;
    public void GAME_PLAY_BUTTON_PRESSED()
    {
    }

    public void GAME_EXIT_BUTTON_PRESSED()
    {
        // this method is to exit the game
        Debug.Log("GAME EXIT BUTTON PRESSED");
        Application.Quit(0);
    }

    public void GAME_PAUSE_BUTTON_PRESSED()
    {
        // this method is to pause the game
        gamemanager.instance.ispaused = true;
        canvas_component_provider_script.Disable_main_canvas_for_pause_and_lost_panels();
    }

    public void GAME_RESUME_BUTTON_PRESSED()
    {
        // this method is to resume the game
        gamemanager.instance.ispaused = false;
        canvas_component_provider_script.Enable_main_canvas_for_pause_and_lost_panels();
    }

    public void GAME_BACK_BUTTON_PRESSED()
    {
        // this method handle the go back conditions
    }

    public void GAME_GOTOMENU_BUTTON_PRESSED()
    {
        // this method hanldes about going to the main in the middle of the game play
        Debug.Log("GAME GO TO MENU BUTTON PRESSED");
    }

    public void GAME_SETTINGS_BUTTON_PRESSED()
    {
        //this method handles to go to settings pannel
    }

    public void GAME_REPLAY_BUTTON_PRESSED()
    {
        // this is to restart the same leve when ever the player lost life
        Debug.Log("GAME_REPLAY_BUTTON_PRESSED");
        gamemanager.instance.isplayerdead = false;
        // this method is to play the current seclected scene 
        int current_level_no_to_restart = gamemanager.instance.gameObject.GetComponent<scenemanager>().Game_level_number;
        gamemanager.instance.gameObject.GetComponent<scenemanager>().LoadLevel(current_level_no_to_restart);
        
        
        
    }

} // GAME_PANAL_BUTTON_SCRIPTS class
