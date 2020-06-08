using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class game_pause_script : MonoBehaviour
{


    public void pause_toggle_button_clicked()
    {
        
        gamemanager.instance.ispaused = true;
        

    }

}
