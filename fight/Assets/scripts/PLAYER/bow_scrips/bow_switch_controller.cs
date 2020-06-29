using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bow_switch_controller : InventoryItemBase
{
    [Inject(InjectFrom.Anywhere)]
    public game_action_swithcer game_action_switcher_script;

    public override void OnUse()
    {
        base.OnUse();
        game_action_switcher_script.ARCHARY_MODE();
    }
}
