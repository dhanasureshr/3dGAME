using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExtendedCustomMonoBehavior : MonoBehaviour
{
	public Transform myTransform;
	public GameObject myGo;
	public Rigidbody myBody;
	public bool didInit;
	public bool canControl;
	public int iD;
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
