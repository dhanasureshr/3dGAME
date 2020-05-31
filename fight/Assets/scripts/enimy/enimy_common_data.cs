using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName ="Enimy_Data",menuName ="Enimy/CommonData",order =1)]
public class enimy_common_data : ScriptableObject
{
    public float APPLIBLE_DAMAGE;
    
    public float SENEPETROL_DISTANCE;
    public float CHASE_DISTANCE;
    public float FIGHTING_PETROL_DISTANCE;
    public float ATTACK_DISTANCE;
    public float STOPING_DISTANCE_REF;

    public bool NEAR_ATTACKER;
    public bool FAR_ATTACKER;

    public RuntimeAnimatorController[] R_A__CONTROLLERS_ENIMY;

}
