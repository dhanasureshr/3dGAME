using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class inventory : ExtendedCustomMonoBehavior
{

    private const int SLOTS = 4;
    private List<IInventoryItem> MItems = new List<IInventoryItem>();

    public event EventHandler<InventoryEventArgs> ItemAdded;

    public event EventHandler<InventoryEventArgs> ItemRemoved;


    public void AddItem(IInventoryItem item)
    {
        if(MItems.Count < SLOTS)
        {
            Collider collider = (item as MonoBehaviour).GetComponent<Collider>();

            if(collider.enabled)
            {
                collider.enabled = false;
                MItems.Add(item);

                item.OnPickup();
                
                if(ItemAdded != null)
                {
                    ItemAdded(this, new InventoryEventArgs(item));
                }

            }
        }
    }

    public void RemoveItem(IInventoryItem item)
    {
        if(MItems.Contains(item))
        {
            MItems.Remove(item);
            item.OnDrop();

            Collider collider = (item as MonoBehaviour).GetComponent<Collider>();
            if(collider != null)
            {
                collider.enabled = true;
            }
            
            if(ItemRemoved != null)
            {
                ItemRemoved(this, new InventoryEventArgs(item));
            }
        }
    }
}
