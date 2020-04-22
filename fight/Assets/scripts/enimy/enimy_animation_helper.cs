using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enimy_animation_helper : MonoBehaviour
{
    public enimy_movement enimy_movement_reference;
    public Animator enimy_animator_ref;
    public Renderer enimy_rendrer;
    Vector2 smoothDeltaPosition = Vector2.zero;
    Vector2 velocity = Vector2.zero;
    private static int enimy_run = Animator.StringToHash("move");
    private static int enimy_fight = Animator.StringToHash("fight");
    private static int enimy_get_hit = Animator.StringToHash("get_hit");
    private static int enimy_fall_down = Animator.StringToHash("death");
    public LookAt lookAt;
    private void Start()
    {
        enimy_movement_reference = GetComponent<enimy_movement>();
        enimy_animator_ref = GetComponent<Animator>();
        enimy_rendrer = GetComponentInChildren<SkinnedMeshRenderer>();
        enimy_movement_reference.enimy_nav_mesh_agent.updatePosition = false;
        lookAt = GetComponent<LookAt>();
    }

    #region enimy_fighting_functions
    

    public void PLAY_ENIMY_FIGHT()
    {
        enimy_animator_ref.SetBool(enimy_fight, true);
    }

    public void EXIT_ENIMY_FIGHT()
    {
        enimy_animator_ref.SetBool(enimy_fight, false);
    }
    public void PLAY_ENIMY_GET_HIT()
    {
        enimy_animator_ref.SetBool(enimy_get_hit, true);

    }
    public void EXIT_ENIMY_GET_HIT()
    {
        enimy_animator_ref.SetBool(enimy_get_hit, false);
    }
    public void PLAY_ENIMY_FALL_DOWN()
    {
        enimy_animator_ref.SetTrigger(enimy_fall_down);
    }
    #endregion

    private void Update()
    {
            //enimy blend tree movement
            Vector3 worldDeltaPosition = enimy_movement_reference.enimy_nav_mesh_agent.nextPosition - transform.position;

            // Map 'worldDeltaPosition' to local space
            float dx = Vector3.Dot(transform.right, worldDeltaPosition);
            float dy = Vector3.Dot(transform.forward, worldDeltaPosition);
            Vector2 deltaPosition = new Vector2(dx, dy);

            // Low-pass filter the deltaMove
            float smooth = Mathf.Min(1.0f, Time.deltaTime / 0.15f);
            smoothDeltaPosition = Vector2.Lerp(smoothDeltaPosition, deltaPosition, smooth);

            // Update velocity if time advances
            if (Time.deltaTime > 1e-5f)
                velocity = smoothDeltaPosition / Time.deltaTime;

            bool shouldMove = velocity.magnitude > 0.5f && enimy_movement_reference.enimy_nav_mesh_agent.remainingDistance > enimy_movement_reference.enimy_nav_mesh_agent.radius;

            // Update animation parameters
            enimy_animator_ref.SetBool(enimy_run, shouldMove);
            enimy_animator_ref.SetFloat("x", velocity.x);
            enimy_animator_ref.SetFloat("y", velocity.y);
            GetComponent<LookAt>().lookAtTargetPosition = enimy_movement_reference.enimy_nav_mesh_agent.steeringTarget + transform.forward;

            if (lookAt)
                lookAt.lookAtTargetPosition = enimy_movement_reference.enimy_nav_mesh_agent.steeringTarget + transform.forward;



    }

    void OnAnimatorMove()
    {
        transform.position = enimy_movement_reference.enimy_nav_mesh_agent.nextPosition;
    }
}