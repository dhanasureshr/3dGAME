using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class itemdrophandler : MonoBehaviour, IDropHandler
{
    [Inject(InjectFrom.Anywhere)]
    public tuch_inpu t;

    public IInventoryItem Item { get; set; }
    public void OnDrop(PointerEventData eventData)
    {
        RectTransform invPanal = transform as RectTransform;

        if (!RectTransformUtility.RectangleContainsScreenPoint(invPanal,
           Input.mousePosition //t.touch.position
            ))
        {
            Debug.Log("rrrrrrrrrrrrrrrrrrrrr");
            
        }
    }
}
