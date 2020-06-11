using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spear : MonoBehaviour, IInventoryItem
{
    
    public tuch_inpu t;
    public string Name
    {
        get
        {
            return "spear";
        }
    }

    public Sprite _Image;
    public Sprite Image
    {
        get
        {
            return _Image;
        }
    }

    public void OnPickup()
    {
        gameObject.SetActive(false);
    }

    public void OnDrop()
    {
        Debug.Log("iteam droped");
        RaycastHit hit = new RaycastHit();
        //Ray ray = Camera.main.ScreenPointToRay(t.touch.position);
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray,out hit,1000))
        {
            gameObject.SetActive(true);
            gameObject.transform.position = hit.point;
        }
    }

    void Update()
    {

        Debug.Log(" running ed");
    }
}
