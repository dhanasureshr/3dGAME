using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class camera_swiper_raw_image : ExtendedCustomMonoBehavior, IDragHandler, IPointerUpHandler, IPointerDownHandler
{

    public static camera_swiper_raw_image instance;
    

    public float rotx = 0.0f;
    public float roty = 0.0f;

    private float rotSpeed = 0.5f;
    private float dir = -1;

    


    public Vector2 init_pos;

    public bool isfingerON_custom_swipe_input_image = false;
    
    void Start()
    {
        instance = this;
        
    }


    //event handler code
    public void OnDrag(PointerEventData eventData)
    {
        
      
        float deltax = init_pos.x - eventData.position.x;
        float deltay = init_pos.y - eventData.position.y;

        rotx -= deltay * Time.deltaTime * rotSpeed * dir;
        roty += deltax * Time.deltaTime * rotSpeed * dir;

        rotx = Mathf.Clamp(rotx, -20f, 20f);
       // roty = Mathf.Clamp(roty, -360f, 360f);
       // pos = new Vector3(roty, rotx, 0); // new Vector3(rotx,roty,0);
        

       // Debug.Log(pos);
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        init_pos = eventData.position;
        isfingerON_custom_swipe_input_image = true;
    }

    public void OnPointerUp(PointerEventData eventData)
    {

        isfingerON_custom_swipe_input_image = false;
        init_pos = new Vector2(0.0f, 0.0f);
    }



}
