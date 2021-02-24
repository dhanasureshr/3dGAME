using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class platform_detection : MonoBehaviour
{
    // this is the script which is going to take care of detecting the platform 
    // in which the game is currently running 
    // by depending up on this detection 
    // the remaining setting that are platfrom specific game settings  is updated  accordingly
    // some of the updatable settings are 
    // 1) player movement input detectioin
    // 2) graphics quality setting ::::-- because diferent platforms have some limitations on hardwares like apk and exe
    // 3) entire game input system
    //  for now these are known to me -------

    #region platform detection variables
    public bool PLATFORM_ANDROID = false;
    public bool PLATFORM_WINDOWS = false;

    public bool PLATFORM_LINUX = false;

    public bool PLATFORM_IOS = false;

    #endregion

    void Start()
    {
        if(Application.platform == RuntimePlatform.Android)
        {
            PLATFORM_ANDROID = true;

        }
        else if(Application.platform == RuntimePlatform.LinuxPlayer)
        {
            PLATFORM_LINUX = true;

        }
        else if(Application.platform == RuntimePlatform.IPhonePlayer)
        {
            PLATFORM_IOS = true;
        }
        else if(Application.platform == RuntimePlatform.WindowsPlayer)
        {
            PLATFORM_WINDOWS =  true;

        }
    
    }


}
