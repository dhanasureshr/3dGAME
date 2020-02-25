using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class event_tester : MonoBehaviour, IListener
{
    private int _health;
    private void Start()
    {
        event_manager.Instance.AddListener(EVENT_TYPE.HEALTH_CHANAGE,this);
    }

    public void OnEvent(EVENT_TYPE Event_Type, Component Sender, object Param = null)
    {
        switch(Event_Type)
        {
            case EVENT_TYPE.HEALTH_CHANAGE:
                HEALTH_CHANAGE(Sender, (int)Param);
                break;
        }
        //throw new System.NotImplementedException();
    }

    public int Health
    {
        get { return _health; }
        set
        {
            //clamp health between 0 - 100
            _health = Mathf.Clamp(value, 0, 100);

            event_manager.Instance.PostNotification(EVENT_TYPE.HEALTH_CHANAGE, this, _health);
        }
    }


    private void Update()
    {
        if(Input.GetKeyDown(KeyCode.A))
        {
            Health += 10;
        }
    }
    void HEALTH_CHANAGE(Component s,int val)
    {
        print("health chanage event occured");
        print(s);
        print(val);
    }
}

