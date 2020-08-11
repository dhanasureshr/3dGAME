using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class scene_changer : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if(other.transform.CompareTag(tags.full_player_tag))
        {
            gamemanager.instance.gameObject.GetComponent<scenemanager>().GoNextLevel();
        }
    }
}
