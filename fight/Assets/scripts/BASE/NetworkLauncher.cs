using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

namespace com.dhanasoftwares
{
    public class NetworkLauncher : MonoBehaviourPunCallbacks
    {
        string gameVersion = "1";

        [SerializeField]
        private byte maxPlayersPerRoom = 4;

        bool isConnecting;

        void Awake()
        {
            PhotonNetwork.AutomaticallySyncScene = true;
        }

        public void Connect()
        {
            if(PhotonNetwork.IsConnected)
            {
                PhotonNetwork.JoinRandomRoom();

            }
            else
            {
                isConnecting = PhotonNetwork.ConnectUsingSettings();
                PhotonNetwork.GameVersion = gameVersion;
            }


        }

        #region  MonoBehaviourPunCallbacks callbacks
        public override void OnConnectedToMaster()
        {
            if(isConnecting)
            {
                PhotonNetwork.JoinRandomRoom();
                isConnecting = false;

            }
        }

        public override void OnDisconnected(DisconnectCause cause)
        {
            isConnecting = false;
            Debug.LogWarningFormat("ONDisconnected() was called by PUN with reason {0} ",cause);

        }

        public override void OnJoinRandomFailed(short returnCode, string message)
        {
            PhotonNetwork.CreateRoom(null,new RoomOptions{MaxPlayers =  maxPlayersPerRoom});

        }

        public override void OnJoinedRoom()
        {
            if(PhotonNetwork.CurrentRoom.PlayerCount == 1)
            {
                PhotonNetwork.LoadLevel(1);

            }
        }

        #endregion
    }
}

