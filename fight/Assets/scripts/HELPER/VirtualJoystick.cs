using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using System.Collections;

public class VirtualJoystick : ExtendedCustomMonoBehavior, IDragHandler, IPointerUpHandler, IPointerDownHandler
{
	// hear this is the main script to comminucate with the main funcitons of the joystick controller


	// this are the variable references for the joystick image input images to control

    public Image bgImg, jsImg;
	public Vector3 InputDirection;
	public bool isfingeronjoystick = false;

	 

    private void Start()
    {
        bgImg = GetComponent<Image>();
        jsImg = GetComponentsInChildren<Image>()[1];
        InputDirection = Vector3.zero;
		 
    }

    //EventSystems interfaces
    public virtual void OnDrag(PointerEventData ped)
    {



        Vector2 pos = Vector2.zero;
        if (RectTransformUtility.ScreenPointToLocalPointInRectangle
            (   bgImg.rectTransform,
                ped.position,
                ped.pressEventCamera,
                out pos))
        {
            pos.x = (pos.x / bgImg.rectTransform.sizeDelta.x);
            pos.y = (pos.y / bgImg.rectTransform.sizeDelta.y);


			// this is the area for calculating the x and y values 

            float x = (bgImg.rectTransform.pivot.x == 1) ? pos.x * 2 + 1 : pos.x * 2 - 1;
            float y = (bgImg.rectTransform.pivot.y == 1) ? pos.y * 2 + 1 : pos.y * 2 - 1;

            InputDirection = new Vector3(x, 0, y);
            InputDirection = (InputDirection.magnitude > 1) ? InputDirection.normalized : InputDirection;
            jsImg.rectTransform.anchoredPosition = new Vector3(InputDirection.x * (bgImg.rectTransform.sizeDelta.y / 3.5f), InputDirection.z * (bgImg.rectTransform.sizeDelta.x / 3.5f),0.0f);
        }
    }

	// this method is used to find and set the values about the player is using the joystick or not 
	// if the player is using the joystick then this method is called 
    public virtual void OnPointerDown(PointerEventData ped)
    {


		isfingeronjoystick = true;



    }

    public virtual void OnPointerDrag(PointerEventData ped)
    {
      //  OnDrag(ped);


    }
    // this method is going to decide weather the player is using the joystick or not 
    // if the  player is using the joystick for that purpes this method is used
    public virtual void OnPointerUp(PointerEventData ped)
    {


		isfingeronjoystick = false;



        InputDirection = Vector3.zero;
        jsImg.rectTransform.anchoredPosition = Vector3.zero;
	 
    }
}
