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

    bool isConnecting;



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
           isConnecting =  PhotonNetwork.ConnectUsingSettings();
            PhotonNetwork.GameVersion  = gameVersion;

        }
    }



    #region  MonoBehaviourPunCallbacks callbacks
    public override void OnConnectedToMaster()
    {
        if(isConnecting)
        {
            Debug.Log("PUN Basics Tutorial/Launcher: OnConnectedToMaster() was called by PUN");
            PhotonNetwork.JoinRandomRoom();
            isConnecting = false;
        }
    }
    public override void OnDisconnected(DisconnectCause cause)
    {
        isConnecting = false;

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
        if(PhotonNetwork.CurrentRoom.PlayerCount == 1)
        {
            Debug.Log("We load the 'Room for 1' ");

            PhotonNetwork.LoadLevel(1);
        }
        
    }

    #endregion
}
