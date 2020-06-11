using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class itemdraghandler : MonoBehaviour,IDragHandler,IEndDragHandler
{
    [Inject(InjectFrom.Anywhere)]
    public tuch_inpu t;

  
    [SerializeField] public IInventoryItem Item { get; set; }

    

    public void OnDrag(PointerEventData eventData)
    {
        // transform.position = t.touch.position;
        transform.position = Input.mousePosition;
    }

    public void OnEndDrag(PointerEventData eventData)
    {
        transform.localPosition = Vector3.zero;
    }

    
}
