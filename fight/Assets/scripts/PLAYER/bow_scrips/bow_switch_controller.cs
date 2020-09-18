using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class bow_switch_controller : InventoryItemBase
{
    

    [Inject(InjectFrom.Anywhere)]
    public main_ui_component_provider t;
    public override void OnUse()
    {
        base.OnUse();

        t.game_action_swither_script.ARCHARY_MODE();

        if(t.game_action_swither_script.canvas_component_access.main_ui_script_components.player_archary_ui_controller_method_script.aim_arrow_shoot == false)
        {
        }
           
    }


}
