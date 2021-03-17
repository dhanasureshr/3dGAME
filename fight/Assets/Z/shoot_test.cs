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


    public void Update()
    {
        refposition = t.worldpositionfromscreenpoint();

        if(ts.f)
        {
          var obj =  GameObject.Instantiate(ff,refposition,Quaternion.identity);
          obj.transform.Translate(transform.right * Time.deltaTime,Space.World);
        }

    }
}
