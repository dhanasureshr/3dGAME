using System;
using System.Collections;
using UnityEngine;

using UnityEngine.SceneManagement;

using Photon.Pun;
using Photon.Realtime;

namespace com.dhanasoftwares
{
    

    public class Game_Manager : MonoBehaviourPunCallbacks
    {
        #region Photon callbacks

        public override void OnLeftRoom()
        {
            SceneManager.LoadScene(0);
        }
        #endregion
        public void LeaveRoom()
        {
            PhotonNetwork.LeaveRoom();
        }
    }
}