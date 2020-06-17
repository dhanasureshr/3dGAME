using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gun_switch_controller : InventoryItemBase
{
    [Inject(InjectFrom.Anywhere)]
    public game_action_swithcer game_action_swither_script;

    
    public override void OnUse()
    {
        base.OnUse();

        game_action_swither_script.GUN_MODE();
        
        Debug.Log("switched gun mode");
    }

    private void Update()
    {
        transform.Rotate(0, 10 * Time.deltaTime, 0);
    }

}
