using UnityEngine;
using UnityEngine.InputSystem;

public class INPUT_MANAGER_FOR_PLAYER : ExtendedCustomMonoBehavior
{
    public Vector3 moveVec;

    public Vector3 lookVec;

    public bool jump;

    public void OnFire()
    {
        Debug.Log("player is fireing dhana from new input system ok");
    }


    public void OnMove(InputValue input)
    {
        Vector2 inputvac = input.Get<Vector2>();

        moveVec = new Vector3(inputvac.x,0,inputvac.y);
    }



    public void OnLook(InputValue input)
    {
        Vector2 inputvac = input.Get<Vector2>();

        lookVec = new Vector3(inputvac.x,0,inputvac.y);

    }

   public void OnJump()
   {
       jump = true;
   }


}