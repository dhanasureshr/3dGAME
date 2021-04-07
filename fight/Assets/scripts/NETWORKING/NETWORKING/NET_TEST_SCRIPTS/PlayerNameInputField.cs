using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using Photon.Realtime;

namespace com.dhanasoftwares
{
    

    [RequireComponent(typeof(InputField))]
    public class PlayerNameInputField : MonoBehaviour
    {
        const string PlayerNamePrefKey = "PlayerName";

        void Start()
        {
            string defaultName = string.Empty;

            InputField _inputField = this.GetComponent<InputField>();
            
            if(_inputField != null)
            {
                if(PlayerPrefs.HasKey(PlayerNamePrefKey))
                {
                    defaultName = PlayerPrefs.GetString(PlayerNamePrefKey);
                    _inputField.text = defaultName;
                }
            }

            PhotonNetwork.NickName = defaultName;
        }

        public void SetPlayerName(string value)
        {
            if(string.IsNullOrEmpty(value))
            {
                Debug.LogError("player Name is null or empty");
                return;

            }

            PhotonNetwork.NickName = value;

            PlayerPrefs.SetString(PlayerNamePrefKey,value);
        }

    }

}