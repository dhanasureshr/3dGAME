using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AddressableAssets;

public class expo : MonoBehaviour
{

    private void OnDestroy()
    {
        Addressables.ReleaseInstance(gameObject);
    }
}
