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


	public bool is_tps_mode_on = true;

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


	float angle;
	Quaternion targetrotation;

	private float pitch = 0.0f, raw = 0.0f;
	public float rotatspeed = 30.0f;
	public int invertpitch = 1;


	#endregion

	#region player_movement animation paramaters
	// these are animation paramaters for player basic movement
	[HideInInspector] private Animator player_animator;
	private static int horthash = Animator.StringToHash("X");
	private static int verthash = Animator.StringToHash("Y");



	public AndroidInput t;
	#endregion



	[Inject(InjectFrom.Anywhere)]

	public INPUT_MANAGER_FOR_PLAYER multiplat_form_input_manager;
	

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
		if(gamemanager.instance.isinputallowed)
		{

		

			/// this code is for the player movement with camera at back
			/// --------------------------------------------------------
			h_joy = virtual_joystick_access.InputDirection.x;
			y_joy = virtual_joystick_access.InputDirection.z;

			if (Input.touchCount == 1)
			{
				Touch toucho = Input.GetTouch(0);
				if (toucho.phase == TouchPhase.Moved)
				{
					
					
						//player_target.Rotate(0.0f, tuch_inpu.touch_input_manager.swiping_value, 0.0f);
						pitch -= Input.GetTouch(0).deltaPosition.y * rotatspeed * invertpitch * Time.deltaTime;
						raw += Input.GetTouch(0).deltaPosition.x * rotatspeed * invertpitch * Time.deltaTime;

						pitch = Mathf.Clamp(pitch, -80, 80);

					targetrotation = Quaternion.Euler(0, raw, 0);


				}
			}

		
		    //player_target.transform.eulerAngles = new Vector3(pitch, raw, 0.0f);


			if (h_joy > 0.8 || y_joy > 0.8 || h_joy > -0.8 || y_joy > -0.8)
			{
				speed = 8f;
			}
			else
			{
				speed = 2f;
			}


			float yStore = MoveDirection.y;
			//MoveDirection = new Vector3(h_joy,0, y_joy); // 2021/02/18 desable for new input mangager input test
			MoveDirection = multiplat_form_input_manager.moveVec;

		   																							//MoveDirection = transform.TransformDirection(MoveDirection);
		
			
			MoveDirection = Camera.main.transform.TransformDirection(MoveDirection); 
			

			//if (is_tps_mode_on && virtual_joystick_access.isfingeronjoystick) 2021/02/18 desable for new input mangager input test
			
			if(is_tps_mode_on)
			{

				//transform.rotation = Quaternion.LookRotation(MoveDirection.normalized); // testing purpus disabled

				//angle = Mathf.Atan2(h_joy, y_joy);2021/02/18 desable for new input mangager input test
				angle = Mathf.Atan2(multiplat_form_input_manager.moveVec.x,multiplat_form_input_manager.moveVec.z);
				angle = Mathf.Rad2Deg * angle;
				

				angle += Camera.main.transform.eulerAngles.y;

				targetrotation = Quaternion.Euler(0, angle, 0);


			
				if (player_camera_follow_script._wepon_tps_camera_ != true )
				{

					transform.rotation = Quaternion.Slerp(transform.rotation, targetrotation, speed * Time.deltaTime);
				}


				if (player_camera_follow_script._wepon_tps_camera_ == true && camera_swiper_raw_image.instance.isfingerON_custom_swipe_input_image)//&&tuch_inpu.touch_input_manager.swiping
				{

					targetrotation = Quaternion.Euler(0, camera_swiper_raw_image.instance.roty, 0);

					transform.rotation = Quaternion.Slerp(transform.rotation, targetrotation, speed * Time.deltaTime); // 10

				}

			}
			else
			{



				if (player_camera_follow_script._wepon_tps_camera_ == true && camera_swiper_raw_image.instance.isfingerON_custom_swipe_input_image)//&&tuch_inpu.touch_input_manager.swiping
				{
					transform.rotation = Quaternion.Slerp(transform.rotation, targetrotation, speed * Time.deltaTime); // 10
				}
				

				
			}
			
			
			/////===========================================================
			MoveDirection = MoveDirection * speed;
			MoveDirection += Physics.gravity; 
			/* this is the line of code where the gravity is applying to the player
			   if you want to make the player to jump smoothly disable the gravity 
			   by checking a condition and make the gravity negative 
			*/
			playercharactercontroller.Move(MoveDirection * Time.deltaTime);
			///-----------------------------------------------------------

			//player_animator.SetFloat(horthash, h_joy, 0.1f, Time.deltaTime);2021/02/18 desable for new input mangager input test
			//player_animator.SetFloat(verthash, y_joy, 0.1f, Time.deltaTime);2021/02/18 desable for new input mangager input test

			player_animator.SetFloat(horthash, multiplat_form_input_manager.moveVec.x, 0.1f, Time.deltaTime);
			player_animator.SetFloat(verthash, multiplat_form_input_manager.moveVec.z, 0.1f, Time.deltaTime);





			#endregion


			


			#region  FeetGrounding


			if (enabelFeetIk == false) { return; }
			if (player_animator == null) { return; }

			AdjustFeetTarget(ref rightFootPosition, HumanBodyBones.RightFoot);
			AdjustFeetTarget(ref leftFootPosition, HumanBodyBones.LeftFoot);

			FeetPositiononSolver(rightFootPosition, ref rightFootIkPosition, ref rightFootIkRotation);
			FeetPositiononSolver(leftFootPosition, ref leftFootIkPosition, ref leftFootIkRotation);
		}
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



	public float ClampAngle(float angle, float min, float max)
	{
		if (angle < -360f)
		{
			angle += 360f;
		}
		if (angle > 360f)
		{
			angle -= 360f;
		}
		return Mathf.Clamp(angle, min, max);
	}

}