using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class gun_animation_script : MonoBehaviour
{

    [HideInInspector] private Animator gun_animator;

    [Inject(InjectFrom.Anywhere)]
    public playerjoymovement playerjoymovement_for_gun_movement_animation;
    //animation paramater acess code
    private static int horthash = Animator.StringToHash("x");
    private static int verthash = Animator.StringToHash("y");

    private void Start()
    {
        gun_animator = GetComponent<Animator>();
    }

    private void Update()
    {

        gun_animator.SetFloat(horthash, playerjoymovement_for_gun_movement_animation.h_joy, 0.1f, Time.deltaTime);
        gun_animator.SetFloat(verthash, playerjoymovement_for_gun_movement_animation.y_joy, 0.1f, Time.deltaTime);
    }
}
