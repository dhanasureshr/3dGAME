using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace com.dhanasoftwares.cameramanager
{
    public class Camera_Mangaer : MonoBehaviour
    {
        /// <summery>
        /// this is the main script to managet the player camera work flow 
        ///----------------------------------------CAMERA_MANAGER ALGORITHAM---------------------------------------
        /// now to make the camer to follow  the player we should first create a cenimachine camera in the scene
        /// and some free look Cameras 
        /// now we create a Camera_Manager script get the reference of  the free look camera script
        /// now this script is going to find the player object and stores the reference of the palyer target and looktarget
        /// and it also stores all the available free look camrea in the scene and assignes the target and looktarget to them 
        /// and this script also manages the transaction between 3rd person to 1st person mode
        /// and also this is responsible to manage the wepon cameras like zooming aiming etc
        /// </summery>

        [SerializeField]
        private GameObject ThirdPersoFreeLookCamera;
        [SerializeField]
        private Cinemachine.CinemachineFreeLook Tps_virtual_camera;
        [SerializeField]
        private GameObject Networked_Player_transform;
        [SerializeField]
        private GameObject Networked_Player_Look_transform;



        private void Start()
        {
            this.transform.SetParent(null);
            ThirdPersoFreeLookCamera = GameObject.FindGameObjectWithTag(tags.thirdpersocamera);
            Networked_Player_transform  = GameObject.FindGameObjectWithTag(tags.full_player_tag);
            Networked_Player_Look_transform = GameObject.FindGameObjectWithTag(tags.Player_Look_target);


            Tps_virtual_camera = ThirdPersoFreeLookCamera.GetComponent<Cinemachine.CinemachineFreeLook>();
            
            Tps_virtual_camera.m_Follow = Networked_Player_transform.transform;
            Tps_virtual_camera.m_LookAt = Networked_Player_Look_transform.transform;
        }

    }//------->BY DHANA SURESH -----------> dhanasoftwares@email.com

}
