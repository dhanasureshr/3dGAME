using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class playermanager :ExtendedCustomMonoBehavior
{
   [TextArea]
	public string val ="this script should be attatched to the main player ";

	public GameObject tps_camera_script_reference;

	public GameObject fps_camera_script_regerence;

	public bool fps_cam;



	void Update()
	{

		if (fps_cam)
		{

			tps_camera_script_reference.SetActive(false);
			fps_camera_script_regerence.SetActive(true);
		}
		else
		{
			fps_camera_script_regerence.SetActive(false);
			tps_camera_script_reference.SetActive(true);

		}
	}





}
