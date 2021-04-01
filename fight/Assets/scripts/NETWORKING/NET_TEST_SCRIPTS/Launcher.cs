using UnityEngine;
using Photon.Pun;
using Photon.Realtime;

public class Launcher : MonoBehaviourPunCallbacks
{
    string gameVersion = "1";
    [SerializeField]
    private byte maxPlayersPerRoom = 4;

    [SerializeField]
    private GameObject controlPanel;

    [SerializeField]
    private GameObject progressLabel;


    void Awake()
    {
        PhotonNetwork.AutomaticallySyncScene = true;

    }

    void Start()
    {
        progressLabel.SetActive(false);
        controlPanel.SetActive(true);
    }

    public void Connect()
    {

        progressLabel.SetActive(true);
        controlPanel.SetActive(false);
        if(PhotonNetwork.IsConnected)
        {
            PhotonNetwork.JoinRandomRoom();

        }
        else
        {
            PhotonNetwork.ConnectUsingSettings();
            PhotonNetwork.GameVersion  = gameVersion;

        }
    }



    #region  MonoBehaviourPunCallbacks callbacks
    public override void OnConnectedToMaster()
    {
        Debug.Log("PUN Basics Tutorial/Launcher: OnConnectedToMaster() was called by PUN");
    }
    public override void OnDisconnected(DisconnectCause cause)
    {
        progressLabel.SetActive(false);
        controlPanel.SetActive(true);
        Debug.LogWarningFormat("PNU Basics Tutorial/Lanuncer: ONDisconnected() was called by PUN with reason {0}",cause);
    }

    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        Debug.Log("PUN Basics Tutorial/Launcher: ONJoinRandomFailed() was Called by PUN. No random room available ,so create one. \n Calling: PhotonNetwork.CreateRoom");


        PhotonNetwork.CreateRoom(null,new RoomOptions{MaxPlayers = maxPlayersPerRoom});


    }

    public override void OnJoinedRoom()
    {
        Debug.Log("PNU Basics Tutorials/Launcher: OnJoinedRoom() called by PUN. Now this client is in a room ");

    }

    #endregion
}
