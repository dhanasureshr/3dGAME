using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gun_switch_controller : InventoryItemBase
{
    [Inject(InjectFrom.Anywhere)]
    public game_action_swithcer game_action_swither_script;

    
    public override void OnUse()
    {
        //base.OnUse();
        base.OnPickup();

        game_action_swither_script.GUN_MODE();
        
        
       
    }

}
