using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HUD : MonoBehaviour
{

    [Inject(InjectFrom.Anywhere)]
    public inventory Inventory;
    void Start()
    {
        Inventory.ItemAdded += InventoryScript_ItemAdded;
        Inventory.ItemRemoved += Inventory_ItemRemoved;
     

    }


    private void InventoryScript_ItemAdded(object sender,InventoryEventArgs e)
    {
        Transform inventoryPanal = transform.Find("inventory_panal");
       
        foreach(Transform slot in inventoryPanal)
        {
            Transform imageTransform = slot.GetChild(0).GetChild(0);
            Image image = imageTransform.GetComponent<Image>();
            itemdraghandler itemDragHandler = imageTransform.GetComponent<itemdraghandler>();




            if (image.sprite == null
                ) 
            {
                image.enabled = true;
                image.sprite = e.Item.Image;


                itemDragHandler.Item = e.Item;
                break;
            }
          
        }
    }

    private void Inventory_ItemRemoved(object sender,InventoryEventArgs e)
    {
        Transform inventoryPanel = transform.Find("inventory_panal");
        foreach(Transform slot in inventoryPanel)
        {
            Transform imageTransform = slot.GetChild(0).GetChild(0);
            Image image = imageTransform.GetComponent<Image>();
            itemdraghandler itemDragHandler = imageTransform.GetComponent<itemdraghandler>();

            if(itemDragHandler.Item.Equals(e.Item))
            {
                image.enabled = false;
                image.sprite = null;
                itemDragHandler.Item = null;
                break;

            }
        }
    }

}
