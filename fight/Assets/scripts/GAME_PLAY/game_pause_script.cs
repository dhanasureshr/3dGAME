using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class game_pause_script : MonoBehaviour
{
    [Inject(InjectFrom.Anywhere)]
    public gamemanager game_manager_ref;


    public void pause_toggle_button_clicked()
    {
        
        game_manager_ref.ispaused = true;
        

    }

}
