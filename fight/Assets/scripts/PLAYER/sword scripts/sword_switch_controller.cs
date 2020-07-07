using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class sword_switch_controller : InventoryItemBase
{
    // this script take cares about switching from player mechaniam fighting mode to palyer sword fighting mode;

    [Inject(InjectFrom.Anywhere)]
    public main_ui_component_provider t;

    public override void OnUse()
    {
        base.OnUse();

        t.game_action_swither_script.SWARD_MODE();
    }

}
