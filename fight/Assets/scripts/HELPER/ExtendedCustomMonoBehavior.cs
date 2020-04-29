using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExtendedCustomMonoBehavior : MonoBehaviour
{
	// this extended coustom monobehavior is used in all scripts 
	// those who need the monobehaviour
	[HideInInspector]
	public Transform myTransform;
	[HideInInspector]
	public GameObject myGo;
	[HideInInspector]
	public Rigidbody myBody;
	[HideInInspector]
	public bool didInit;
	[HideInInspector]
	public bool canControl;
	[HideInInspector]
	public int iD;
	[HideInInspector]
	public CharacterController charactercontroller;

	[System.NonSerialized]
	public Transform tempTR;

	[System.NonSerialized]
	public Vector3 tempVEC;

	public virtual void SetId(int anId)
	{
		iD = anId;
	}


}
