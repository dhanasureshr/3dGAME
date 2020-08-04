 using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class playerjoymovement : ExtendedCustomMonoBehavior
{
	private Vector3 rightFootPosition, leftFootPosition, leftFootIkPosition, rightFootIkPosition;
	private Quaternion leftFootIkRotation, rightFootIkRotation;
	private float lastPelvisPositionY, lastRightFootPositionY, lastLeftFootPositionY;

	[Header("Feet Frounder")]
	public bool enabelFeetIk = true;
	[Range(0, 2)] [SerializeField] private float heightFromGroundRaycast = 1.14f;
	[Range(0, 2)] [SerializeField] private float raycastDownDistance = 1.5f;
	[SerializeField] private LayerMask environmentLayer;
	[SerializeField] private float pelvisOffset = 0f;
	[Range(0, 1)] [SerializeField] private float pelvisUpAndDownSpeed = 0.28f;
	[Range(0, 1)] [SerializeField] private float feetToIkPositionSpeed = 0.5f;

	public string leftFootAnimVariableName = "LeftFootCureve";

	public string rightFootAnimVariableName = "RightFootCurve";

	public bool userProIkFeature = false;

	public bool showSolverDebug = true;




	// this is paramaters section
	#region player movement paramaters
	// this are for the player movement with joustick without animations
	[Inject(InjectFrom.Anywhere)]
	public PLAYER_CAMERA_FOLLOW player_camera_follow_script;

	[TextArea]
	public string var = "should be attatched to the player";
	public float speed;
	[HideInInspector] public Vector3 MoveDirection = Vector3.zero;
	//public VirtualJoystick joystickinputforplayermovement;///
	[Inject(InjectFrom.Anywhere)]
	public VirtualJoystick virtual_joystick_access;

	[HideInInspector] public float h_joy;
	[HideInInspector] public float y_joy;
	[HideInInspector] private CharacterController playercharactercontroller;
	
	private float plyer_rot_x;
	public float rotate_speed = 5.0f;
	private Vector3 playerrotatevector = Vector3.zero;
	//[HideInInspector] public Transform camera_pos;

	#endregion

	#region player_movement animation paramaters
	// these are animation paramaters for player basic movement
	[HideInInspector] private Animator player_animator;
	private static int horthash = Animator.StringToHash("X");
	private static int verthash = Animator.StringToHash("Y");
	#endregion
	// this is for game functions
	#region start for player coimponent references
	private void Start()
	{
		playercharactercontroller = GetComponent<CharacterController>();

		///////////////////////////////////////////////player_animator = GetComponentInChildren<Animator>();

		player_animator = GetComponent<Animator>();


		//Debug.Log(player_animator.GetLayerName(1));
		//camera_pos = player_camera_follow_script.gameObject.GetComponent<Transform>();
	}
	#endregion

	#region player movement updater

	private void Update()
	{
		/// this code is for the player movement with camera at back
		/// --------------------------------------------------------
		h_joy = virtual_joystick_access.InputDirection.x;
		y_joy = virtual_joystick_access.InputDirection.z;

		if(h_joy > 0.8 || y_joy > 0.8 || h_joy > -0.8 || y_joy > -0.8)
		{
			speed = 8f;
		}
		else
		{
			speed = 2f;
		}

		
		float yStore = MoveDirection.y;
		MoveDirection = new Vector3(h_joy, 0, y_joy);
		MoveDirection = transform.TransformDirection(MoveDirection);
		////////////////MoveDirection = Camera.main.transform.TransformDirection(MoveDirection);
		/////===========================================================
		MoveDirection = MoveDirection * speed;
		MoveDirection += Physics.gravity;
		playercharactercontroller.Move(MoveDirection * Time.deltaTime);
		///-----------------------------------------------------------
		player_animator.SetFloat(horthash, h_joy, 0.1f, Time.deltaTime);
		player_animator.SetFloat(verthash, y_joy, 0.1f, Time.deltaTime);

		
	}

	#endregion



	#region  FeetGrounding

	private void FixedUpdate()
	{
		if (enabelFeetIk == false) { return; }
		if (player_animator == null) { return; }

		AdjustFeetTarget(ref rightFootPosition, HumanBodyBones.RightFoot);
		AdjustFeetTarget(ref leftFootPosition, HumanBodyBones.LeftFoot);

		FeetPositiononSolver(rightFootPosition, ref rightFootIkPosition, ref rightFootIkRotation);
		FeetPositiononSolver(leftFootPosition, ref leftFootIkPosition, ref leftFootIkRotation);

	}

	private void OnAnimatorIK(int layerIndex)
	{
		if (enabelFeetIk == false) { return; }
		if (player_animator == null) { return; }

		MovePelvisHeight();

		// right foot

		player_animator.SetIKPositionWeight(AvatarIKGoal.RightFoot, 1);

		if (userProIkFeature)
		{
			player_animator.SetIKRotationWeight(AvatarIKGoal.RightFoot, player_animator.GetFloat(rightFootAnimVariableName));

		}

		MoveFeetToIkPoint(AvatarIKGoal.RightFoot, rightFootIkPosition, rightFootIkRotation, ref lastRightFootPositionY);



		//left  foot

		player_animator.SetIKPositionWeight(AvatarIKGoal.LeftFoot, 1);

		if (userProIkFeature)
		{
			player_animator.SetIKRotationWeight(AvatarIKGoal.LeftFoot, player_animator.GetFloat(leftFootAnimVariableName));

		}

		MoveFeetToIkPoint(AvatarIKGoal.LeftFoot, leftFootIkPosition, leftFootIkRotation, ref lastLeftFootPositionY);

	}

	#endregion


	#region FeetGroundingMethods


	void MoveFeetToIkPoint(AvatarIKGoal foot, Vector3 positionIkHolder, Quaternion rotationIkHolder, ref float lastFootPositionY)
	{
		Vector3 targetIkPosition = player_animator.GetIKPosition(foot);

		if (positionIkHolder != Vector3.zero)
		{
			targetIkPosition = transform.InverseTransformPoint(targetIkPosition);
			positionIkHolder = transform.InverseTransformPoint(positionIkHolder);

			float yVariable = Mathf.Lerp(lastFootPositionY, positionIkHolder.y, feetToIkPositionSpeed);
			targetIkPosition.y += yVariable;

			lastFootPositionY = yVariable;

			targetIkPosition = transform.TransformPoint(targetIkPosition);

			player_animator.SetIKRotation(foot, rotationIkHolder);
		}

		player_animator.SetIKPosition(foot, targetIkPosition);
	}

	private void MovePelvisHeight()
	{
		if (rightFootIkPosition == Vector3.zero || leftFootIkPosition == Vector3.zero || lastPelvisPositionY == 0)
		{
			lastPelvisPositionY = player_animator.bodyPosition.y;
			return;
		}

		float lOffsetPosition = leftFootIkPosition.y - transform.position.y;
		float rOffsetPosition = rightFootIkPosition.y - transform.position.y;

		float totalOffset = (lOffsetPosition < rOffsetPosition) ? lOffsetPosition : rOffsetPosition;

		Vector3 newPelvisPosition = player_animator.bodyPosition + Vector3.up * totalOffset;
		newPelvisPosition.y = Mathf.Lerp(lastPelvisPositionY, newPelvisPosition.y, pelvisUpAndDownSpeed);
		player_animator.bodyPosition = newPelvisPosition;
		lastPelvisPositionY = player_animator.bodyPosition.y;

	}

	private void FeetPositiononSolver(Vector3 fromSkyPosition,ref Vector3 feetIkPositions,ref Quaternion feetIKRotations)
	{
		RaycastHit feetOUtHit;

		if(showSolverDebug)
		{
			Debug.DrawLine(fromSkyPosition, fromSkyPosition + Vector3.down * (raycastDownDistance + heightFromGroundRaycast), Color.yellow);
			
		}


		if(Physics.Raycast(fromSkyPosition,Vector3.down,out feetOUtHit,raycastDownDistance + heightFromGroundRaycast,environmentLayer))
		{
			feetIkPositions = fromSkyPosition;
			feetIkPositions.y = feetOUtHit.point.y + pelvisOffset;
			feetIKRotations = Quaternion.FromToRotation(Vector3.up, feetOUtHit.normal) * transform.rotation;

			return;
		}

		feetIkPositions = Vector3.zero;
	}

	private void AdjustFeetTarget(ref Vector3 feetPositions,HumanBodyBones foot)
	{
		feetPositions = player_animator.GetBoneTransform(foot).position;
		feetPositions.y = transform.position.y + heightFromGroundRaycast;

	}


	#endregion



}