using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Animations;
public class playermanager : ExtendedCustomMonoBehavior,IConstraint
{
    /// <summary>
    /// this is the player manager script which take cares about managing the player data 
    /// this is the main script which take cares about providing the player data to game play
    /// like player health,etc;
    /// by considering this script as a base for player to provide data to the another moudle like player UI
    /// </summary>

        
    #region inventory variables
    [Inject(InjectFrom.Anywhere)]
    public Inventory Inventory;
    private InteractableItemBase mIntractItem = null;
    private InventoryItemBase mCurrentItem = null;
   // [Inject(InjectFrom.Anywhere)]
   // public HUD Hud;

    #endregion

    #region variables
    [Inject(InjectFrom.Anywhere)]
    public basegamecontroller base_game_controller_to_provide_asserts;

    private health player_health_script_ref;
    [Inject(InjectFrom.Anywhere)]
    public baseusermanager base_user_manger_for_player_strength_calculation;

    #region chang the below applible damage code to set it on opponent
    public float AApplible_damage = 2.0f;
    #endregion

    #region player component provider variables
    public GameObject player_components_from_current_scene;
    [HideInInspector] public PLAYER_COMPONENT_PROVIDER player_component_provider;
    #endregion


    #region Rotation constraint variables
    public RotationConstraint t;
    public ConstraintSource st;
    public LayerMask test_layer_mask;

    //private float radius = 1.157126f;
    public float weight { get => throw new System.NotImplementedException(); set => throw new System.NotImplementedException(); }
    public bool constraintActive { get => throw new System.NotImplementedException(); set => throw new System.NotImplementedException(); }
    public bool locked { get => throw new System.NotImplementedException(); set => throw new System.NotImplementedException(); }
    public int sourceCount => throw new System.NotImplementedException();
    #endregion

    public float player_strength = 100.0f;

    #endregion

    #region initilizing methods start


    private void Start()
    {
        player_components_from_current_scene = GameObject.FindWithTag(tags.player_component_provider_tag);
        player_component_provider = player_components_from_current_scene.GetComponent<PLAYER_COMPONENT_PROVIDER>();

        player_health_script_ref = GetComponent<health>();
        t = gameObject.GetComponent<RotationConstraint>();
        t.enabled = false;
        t.weight = 1.0f;
        t.rotationOffset = new Vector3(0, 180, 0);

        StartCoroutine("Playerstrength_calculator"); // player strength calculator coroutine

        #region inventory initilization
        Inventory.ItemUsed += Inventory_ItemUsed;
        Inventory.ItemRemoved += Inventory_ItemRemoved;
        #endregion

    }

    #endregion


    #region Inventory event methods

    private void Inventory_ItemRemoved(object sender,InventoryEventArgs e)
    {
        InventoryItemBase item = e.Item;

        GameObject goItem = (item as MonoBehaviour).gameObject;
        goItem.SetActive(true);
        goItem.transform.parent = null;

        if (item == mCurrentItem)
            mCurrentItem = null;
    }

    private void SetItemActive(InventoryItemBase item,bool active)
    {
        GameObject currentItem = (item as MonoBehaviour).gameObject;
        currentItem.SetActive(active);
       // currentItem.transform.parent = active ? Hand.transform : null;
    }
    private void Inventory_ItemUsed(object sender,InventoryEventArgs e)
    {
        if(e.Item.ItemType != EItemType.Consumable)
        {
           // SetItemActive(mCurrentItem, false);
        }

        InventoryItemBase item = e.Item;

      //  SetItemActive(item, true);
        mCurrentItem = e.Item;
    }


    #endregion

    #region player ui display methods
    //this is the code to display the player health
    public void Display_player_health(float health_value)
    {
        
        player_component_provider.P_health_bar_image.fillAmount = health_value;
    }

    public void Display_player_strength(float strength_value)
    {
        player_component_provider.P_strength_bar_image.fillAmount = strength_value;
    }

    public IEnumerator Playerstrength_calculator()
    {
        
        yield return new WaitForSeconds(2);
        float current_strength_value = player_strength - 0.20f;
        Display_player_strength(base_user_manger_for_player_strength_calculation.calculat_character_health_for_health_BAR(current_strength_value));
        player_strength = current_strength_value;
        StartCoroutine("Playerstrength_calculator");
    }
    #endregion

    #region palyer dute variables
    private Transform targeted_enimy_ref;
    private enimy_movement targeted_enimy_movement_script_ref;
    private bool disable_enimy_rot_colider;
    #endregion

    /// <summary>
    /// this is the code to rotate the player towords the enimy when the enimy enters in to the fight range
    /// and also this code will help to set the rotation cosstraint sorces at run time when the enimy with in range
    /// /</summary>


    #region player rotation constraint 

    

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "ENIMY") // to check weather enimy is entered or not
        {

            
            t.enabled = true; // now i enabled the rotation constraint when entered into the fighting range
            
            st.sourceTransform = other.gameObject.GetComponentInParent<Transform>(); // placing enimy transform and placing 
                                                                                     // in constraint sorce
                                                                                     
            st.weight = 1.0f; //appling wait to the sorce transform now player will rotate towords enimy
            
            targeted_enimy_ref = st.sourceTransform.GetComponentInParent<Transform>(); // getting exact enimy transform 
                                                                                       // from the setted constraint sorce
                                                                                       
            targeted_enimy_movement_script_ref = targeted_enimy_ref.gameObject.GetComponentInParent<enimy_movement>();//getting the enimy 
                                                                                        // movement script from the targeted_enimy_ref 
            disable_enimy_rot_colider = targeted_enimy_movement_script_ref.GetComponent<health>().disable_enimy_Rotation_collider;// a 
                                                                // bool variable to determine whether to disable enimy rotation collider 
                                                                      
            if(!disable_enimy_rot_colider) // if  disable_enimy_rot_colider is false 
            { 

                if (t.sourceCount > 0) // if rotation constraint sorce count grater than 0 then this will execute
                {

                    t.RemoveSource(0); // this will remove all the sorces form the Rotation constraint
                    
                }
                t.AddSource(st); // this will creat a sorce container on the Rotation constraint
                t.SetSource(0, st); // this will set the current enimy sorce transform to the Rotation constraint at index 0
            }
        }

        //inventory code;////////////////////////////////////////////////////////////////////////////////
        TryIntraction(other);
        IntractWithItem();

    } // end of ontriggerenter method


    /*
    
    private void OnTriggerStay(Collider other) 
    {
        ///hear we can remove the player rotation constraint scorce when enimy dead

        if (other.tag == "ENIMY") // check whether the enimy entered or not
        {

            st.weight = 1.0f; // now player will rotate towords enimy

            if (targeted_enimy_movement_script_ref != null) // if there is a enimy_movement script 
            {
                if (disable_enimy_rot_colider) //(targeted_enimy_movement_script_ref.GetComponent<health>().disable_enimy_Rotation_collider)
                {
                    if (t.sourceCount >= 0)
                    {
                        if (t.enabled == true)
                            t.enabled = false;

                        st.sourceTransform = null;
                        targeted_enimy_ref = null;
                        targeted_enimy_movement_script_ref = null;
                        return;
                    }
                }
            }

            
        }
    }

    */


    private void OnTriggerExit(Collider other)
    {
        if (other.tag == "ENIMY")
        {

            t.enabled = false;
            if (t.sourceCount > 0)
            {
                t.RemoveSource(0);
            }
            if (targeted_enimy_movement_script_ref != null)
            {
                if(disable_enimy_rot_colider) //(targeted_enimy_movement_script_ref.GetComponent<health>().disable_enimy_Rotation_collider)
                {
                    if (t.sourceCount > 0)
                        t.RemoveSource(0);
                }
            }

            st.sourceTransform = null;
            targeted_enimy_ref = null;
            targeted_enimy_movement_script_ref = null;
        }

        //inventory code;///////////////////////////////////////////////////////////
        InteractableItemBase item = other.GetComponent<InteractableItemBase>();
        if(item != null)
        {
            mIntractItem = null;
        }
    }
    #endregion

    #region player and current enimy dute animation
    
    public void PLAY_DUTE_ANIMATIONS1()
    {
        if (targeted_enimy_movement_script_ref != null)
        {
            targeted_enimy_movement_script_ref.GetComponent<health>().disable_enimy_Rotation_collider = true;
        }
        if (targeted_enimy_movement_script_ref != null)
        {
            Disable_enimy_movement_before_dute_animation();
        }

        
        if (targeted_enimy_ref != null)
        {
            play_dute(Random.Range(0,2));
        }
    }
    void play_dute(int n)
    {
        if(n ==0)
        {
            transform.gameObject.GetComponentInParent<PLAYER_ANIMATION_HELPER>().PLAY_PLAYER_SHOLDER_DUTE();
            targeted_enimy_ref.gameObject.GetComponentInParent<enimy_animation_helper>().PLAY_ENIMY_SHOLDER_DUTE();
        }
        if(n == 1)
        {

            transform.gameObject.GetComponentInParent<PLAYER_ANIMATION_HELPER>().PLAY_PLAYER_HELL_DUTE();
            targeted_enimy_ref.gameObject.GetComponentInParent<enimy_animation_helper>().PLAY_ENIMY_HELL_DUTE();
        }
    }
    public void Disable_enimy_movement_before_dute_animation()
    {
        targeted_enimy_movement_script_ref.enimy_nav_mesh_agent.enabled = false;
    }

    public void Enable_player_collider_layer()
    {
        transform.gameObject.layer = 10;
    }

    public void Disable_player_collider_layer()
    {
        transform.gameObject.layer = 0;
        StartCoroutine(player_dute_condition_controller());
    }
    
    public IEnumerator player_dute_condition_controller()
    {
        yield return new WaitForSeconds(2.45f);
        Enable_player_collider_layer();
        yield break;
    }

    #endregion

    #region player rotation constraint override metods
    public int AddSource(ConstraintSource source)
    {
        throw new System.NotImplementedException();
    }

    public void RemoveSource(int index)
    {
        throw new System.NotImplementedException();
    }

    public ConstraintSource GetSource(int index)
    {
        throw new System.NotImplementedException();
    }

    public void SetSource(int index, ConstraintSource source)
    {
        
        throw new System.NotImplementedException();
    }

    public void GetSources(List<ConstraintSource> sources)
    {
        throw new System.NotImplementedException();
    }

    public void SetSources(List<ConstraintSource> sources)
    {
        throw new System.NotImplementedException();
    }
    #endregion


    #region Inventory intraction methods
    private void TryIntraction(Collider other)
    {
        InteractableItemBase item = other.GetComponent<InteractableItemBase>();
        if(item != null)
        {
            if(item.CanInteract(other))
            {
                mIntractItem = item;

            }
        }
    }

    public InventoryItemBase GetCurrentItem()
    {
        return mCurrentItem;
    }
    public void IntractWithItem()
    {

        if (mIntractItem != null)
        {
            
            mIntractItem.OnInteract();
            if(mIntractItem is InventoryItemBase)
            {
                InventoryItemBase inventoryItem = mIntractItem as InventoryItemBase;
                Inventory.AddItem(inventoryItem);
                inventoryItem.OnPickup();
                
                if(inventoryItem.UseItemAfterPickup)
                {
                    Inventory.UseItem(inventoryItem);
                }
                mIntractItem = null;
            }
        }
    }

    #endregion


}//player manager class

