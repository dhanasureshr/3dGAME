using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class shoot_test : MonoBehaviour
{
    [Inject(InjectFrom.Anywhere)]
    public shoot.BASE_FIRE t;

    [Inject(InjectFrom.Anywhere)]
    public INPUT_MANAGER_FOR_PLAYER ts;

    private Vector3 refposition;

    [SerializeField]
    private GameObject ff;

    private float firerate = 30f;

    private float nexttimetofire = 0.0f;



    public void Update()
    {
        if(ts.f && Time.time >= nexttimetofire)
        {
          refposition = t.worldpositionfromscreenpoint();
          var obj =  GameObject.Instantiate(ff,refposition,Quaternion.identity);
          obj.transform.Translate(transform.right * Time.deltaTime,Space.World);
          GameObject.Destroy(obj,5.0f);
          nexttimetofire = Time.time + 1f/firerate;
          Debug.Log(nexttimetofire);
        
        }
    }
}
