using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class enimy_manager :ExtendedCustomMonoBehavior
{
    /// <summary>
    /// This is the enimy manager script which take cares about managing the health of the enimy
    /// this is the main script which take cares about providing the enimy data for the game paly
    /// like enimy_healht,etc;
    /// by considering this script as a base for enimy to provide data to remaining modules
    /// </summary>
    public baseusermanager Enimy_base_user_manager;
    public int ENIMY_HEALTH;
    private void Start()
    {
        Enimy_base_user_manager = gameObject.GetComponent<baseusermanager>();
    }
    private void Update()
    {
        ENIMY_HEALTH = Enimy_base_user_manager.GetHealth();


    }
}
