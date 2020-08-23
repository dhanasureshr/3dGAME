using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VFX;
public class circle_vfx : MonoBehaviour
{
    
    public VisualEffect tss;

    int event_id = Shader.PropertyToID("entered");
    int stop_id = Shader.PropertyToID("exit");
   public void Start()
    {
        tss = gameObject.GetComponent<VisualEffect>();
 
    }

    private void Update()
    {
        if(Input.GetKeyDown(KeyCode.Space))
        {
        }
    }


    private void OnTriggerEnter(Collider other)
    {
        if(other.CompareTag(tags.full_player_tag))
        {

            tss.SendEvent(event_id);
        }

    }

    private void OnTriggerExit(Collider other)
    {
        if (other.CompareTag(tags.full_player_tag))
        {
            tss.SendEvent(stop_id);
        }

    }

}
