using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TimerClass : MonoBehaviour
{
   // this is the timer class
	[TextArea]
	public string val = "TIMER CLASS FOR THE WHOLE PROJECT SHOULD BE ATTATCHED TO GAME MANAGER";
	public bool isTimerRunning = false;
	public float timeElapsed = 0.0f;
	public float currentTime = 0.0f;
	public float lastTime = 0.0f;
	private float timeScaleFactor = 1.1f;
	private string timeString;
	private string hour;
	private string minutes;
	private string seconds;
	private string mills;
	private int aHour;
	private int aMinute;
	private int aSecond;
	private int aMillis;
	private int tmp;
	private int aTime;
	private GameObject callback; 
	// this is the end of the variable decleration

	// this method is used to update the timer 
	private void UpdateTimer()
	{

		timeElapsed = Mathf.Abs(Time.realtimeSinceStartup - lastTime);
		if(isTimerRunning)
		{
			currentTime = timeElapsed * timeScaleFactor;
		}

		lastTime = Time.realtimeSinceStartup;
	}

	// this mehthod is used to start the timer
	public void StartTimer()
	{
		isTimerRunning = true;
		lastTime = Time.realtimeSinceStartup;
	}
	// this method is used to stop the timer

	public void StopTimer()
	{
		isTimerRunning = false;
	}

	// this method is used to reset the timer
	public void ResetTimer()
	{
		timeElapsed = 0.0f;
		currentTime = 0.0f;
		lastTime = Time.realtimeSinceStartup;

	}


	//finally this method is used to get the formated time 
	// this method will return a string of time that can be used in the image text 
	// to display in the scene
	public string GetformatedTime()
	{
		UpdateTimer();
		aMinute = (int)currentTime /60;
		aMinute = aMinute%60;

		aSecond = (int)currentTime%60;
		aMillis =(int)(currentTime *100) %100;

		// now formating the above values into actual string 
		tmp = (int)aSecond;
		seconds  = tmp.ToString();
		if(seconds.Length < 2)
		{
			seconds = "0" + seconds;
		}


		tmp =(int)aMinute;
		minutes= tmp.ToString();

		if(minutes.Length < 2)
		{

			minutes = "0"+minutes;
		}

		tmp=(int)aMillis;
		mills = tmp.ToString();
		if(mills.Length < 2)
		{
			mills = "0"+mills;
		}


		timeString =minutes +":"+seconds+":"+mills;
		return timeString; // returning the time in the format of string
	}


	// this GetTime method is used to get the current time in the form of integer
	// for the purpus of modification
	public int GetTime()
	{

		return (int)(currentTime);
	}
}
