using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class camera_swiper_raw_image : ExtendedCustomMonoBehavior, IDragHandler, IPointerUpHandler, IPointerDownHandler
{

    public static camera_swiper_raw_image instance;
    private Touch initTouch = new Touch();

    public float rotx = 0.0f;
    public float roty = 0.0f;

    private float rotSpeed = 0.5f;
    private float dir = -1;

    public Vector3 pos;


    public Vector2 init_pos;

    public bool isfingerON_custom_swipe_input_image = false;
    
    void Start()
    {
        instance = this;
        
    }


    private  void fixedUpdate()
    {
        
        foreach(Touch touch in Input.touches)
        {
            if(touch.phase == TouchPhase.Began)
            {
                initTouch = touch;

            }
            else if(touch.phase == TouchPhase.Moved)
            {
                float deltax = initTouch.position.x - touch.position.x;
                float deltay = initTouch.position.y - touch.position.y;

                rotx -= deltay * Time.deltaTime * rotSpeed * dir;
                roty += deltax * Time.deltaTime * rotSpeed * dir;

                rotx = Mathf.Clamp(rotx, -20f, 20f);
                roty = Mathf.Clamp(roty, -20f, 20f);
                pos = new Vector3(rotx, roty, 0);
                Debug.Log($"{ pos} form touch image");
            }
            else if(touch.phase == TouchPhase.Ended)
            {
                initTouch = new Touch();
            }
        }
    }

   

    //event handler code
    public void OnDrag(PointerEventData eventData)
    {
        Debug.Log("Dragged on custom image");
      
        float deltax = init_pos.x - eventData.position.x;
        float deltay = init_pos.y - eventData.position.y;

        rotx -= deltay * Time.deltaTime * rotSpeed * dir;
        roty += deltax * Time.deltaTime * rotSpeed * dir;

        rotx = Mathf.Clamp(rotx, -20f, 20f);
        roty = Mathf.Clamp(roty, -360f, 360f);
        pos = new Vector3(rotx, roty, 0);

        Debug.Log(pos);
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        Debug.Log("  ");
        init_pos = eventData.position;
        isfingerON_custom_swipe_input_image = true;
    }

    public void OnPointerUp(PointerEventData eventData)
    {

        Debug.Log("  ");
        isfingerON_custom_swipe_input_image = false;
        init_pos = new Vector2(0.0f, 0.0f);

    }



}
