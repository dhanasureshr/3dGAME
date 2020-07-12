using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class magic_switch_controller : InventoryItemBase
{

    [Inject(InjectFrom.Anywhere)]
    public main_ui_component_provider t;

    public override void OnUse()
    {
        base.OnUse();

        t.game_action_swither_script.MAGIC_MODE();
    }

}
