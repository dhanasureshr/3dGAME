#define USE_INTERPOLATION

//
// By Anomalous Underdog, 2011
//
// Based on code made by Forest Johnson (Yoggy) and xyber
//

using UnityEngine;
using System.Collections;
using System.Collections.Generic;


public class MeleeWeaponTrail : MonoBehaviour
{

	#region refectored update varables
	float theDistanceSqr;
	bool make;
	Vector3 l1;
	Vector3 l2;
	Vector3[] tipPoints;
	Vector3[] basePoints;
	List<Vector3> smoothTipList;
	List<Vector3> smoothBaseList;
	float firstTime;
	float secondTime;
	#endregion

	[SerializeField]
	bool _emit = true;
	public bool Emit { set{_emit = value;} }

	bool _use = true;
	public bool Use { set{_use = value;} }

	[SerializeField]
	float _emitTime = 0.0f;

	[SerializeField]
	Material _material;

	[SerializeField]
	float _lifeTime = 1.0f;

	[SerializeField]
	Color[] _colors;

	[SerializeField]
	float[] _sizes;

	[SerializeField]
	float _minVertexDistance = 0.1f;
	[SerializeField]
	float _maxVertexDistance = 10.0f;

	float _minVertexDistanceSqr = 0.0f;
	float _maxVertexDistanceSqr = 0.0f;

	[SerializeField]
	float _maxAngle = 3.00f;

	[SerializeField]
	bool _autoDestruct = false;

#if USE_INTERPOLATION
	[SerializeField]
	int subdivisions = 4;
#endif

	[SerializeField]
	Transform _base;
	[SerializeField]
	Transform _tip;

	List<Point> _points = new List<Point>();
#if USE_INTERPOLATION
	List<Point> _smoothedPoints = new List<Point>();
#endif
	GameObject _trailObject;
	Mesh _trailMesh;
	Vector3 _lastPosition;

	[System.Serializable]
	public class Point
	{
		public float timeCreated = 0.0f;
		public Vector3 basePosition;
		public Vector3 tipPosition;
	}


	Point p;

	IEnumerable<Vector3> smoothTip;
	IEnumerable<Vector3> smoothBase;
	int idx;
	Point sp;

	List<Point> pointsToUse;

	Vector3[] newVertices;
	Vector2[] newUV;
	int[] newTriangles;
	Color[] newColors;

	
	float time;
	Color color;

	float colorTime;
	float min;
	float max;
	float lerp;

	float size;
	float sizeTime;

	Vector3 lineDirection;
	float uvRatio;

	List<Point> remove;
	void Start()
	{
		_lastPosition = transform.position;
		_trailObject = new GameObject("Trail");
		_trailObject.transform.parent = null;
		_trailObject.transform.position = Vector3.zero;
		_trailObject.transform.rotation = Quaternion.identity;
		_trailObject.transform.localScale = Vector3.one;
		_trailObject.AddComponent(typeof(MeshFilter));
		_trailObject.AddComponent(typeof(MeshRenderer));
		_trailObject.GetComponent<Renderer>().material = _material;

		_trailMesh = new Mesh();
		_trailMesh.name = name + "TrailMesh";
		_trailObject.GetComponent<MeshFilter>().mesh = _trailMesh;

		_minVertexDistanceSqr = _minVertexDistance * _minVertexDistance;
		_maxVertexDistanceSqr = _maxVertexDistance * _maxVertexDistance;


		//changing some update declerations to start to retify GARBACE COLLECTOR problem



	}

	void OnDisable()
	{
		Destroy(_trailObject);
	}

	void Update()
	{
		if (!_use)
		{
			return;
		}

		if (_emit && _emitTime != 0)
		{
			_emitTime -= Time.deltaTime;
			if (_emitTime == 0) _emitTime = -1;
			if (_emitTime < 0) _emit = false;
		}

		if (!_emit && _points.Count == 0 && _autoDestruct)
		{
			Destroy(_trailObject);
			Destroy(gameObject);
		}

		// early out if there is no camera
		//if (!Camera.main) return; // updated this you can uncoment it makes problem  dhana

		// if we have moved enough, create a new vertex and make sure we rebuild the mesh
		theDistanceSqr = (_lastPosition - transform.position).sqrMagnitude;
		if (_emit)
		{
			if (theDistanceSqr > _minVertexDistanceSqr)
			{
			    make = false;
				if (_points.Count < 3)
				{
					make = true;
				}
				else
				{
				    l1 = _points[_points.Count - 2].tipPosition - _points[_points.Count - 3].tipPosition;
				    l2 = _points[_points.Count - 1].tipPosition - _points[_points.Count - 2].tipPosition;
					if (Vector3.Angle(l1, l2) > _maxAngle || theDistanceSqr > _maxVertexDistanceSqr) make = true;
				}

				if (make)
				{
					p = new Point();
					p.basePosition = _base.position;
					p.tipPosition = _tip.position;
					p.timeCreated = Time.time;
					_points.Add(p);
					_lastPosition = transform.position;


#if USE_INTERPOLATION
					if (_points.Count == 1)
					{
						_smoothedPoints.Add(p);
					}
					else if (_points.Count > 1)
					{
						// add 1+subdivisions for every possible pair in the _points
						for (int n = 0; n < 1+subdivisions; ++n)
							_smoothedPoints.Add(p);
					}

					// we use 4 control points for the smoothing
					if (_points.Count >= 4)
					{
					    tipPoints = new Vector3[4];
						tipPoints[0] = _points[_points.Count - 4].tipPosition;
						tipPoints[1] = _points[_points.Count - 3].tipPosition;
						tipPoints[2] = _points[_points.Count - 2].tipPosition;
						tipPoints[3] = _points[_points.Count - 1].tipPosition;

						//IEnumerable<Vector3> smoothTip = Interpolate.NewBezier(Interpolate.Ease(Interpolate.EaseType.Linear), tipPoints, subdivisions);
					    smoothTip = Interpolate.NewCatmullRom(tipPoints, subdivisions, false);

					    basePoints = new Vector3[4];
						basePoints[0] = _points[_points.Count - 4].basePosition;
						basePoints[1] = _points[_points.Count - 3].basePosition;
						basePoints[2] = _points[_points.Count - 2].basePosition;
						basePoints[3] = _points[_points.Count - 1].basePosition;

						//IEnumerable<Vector3> smoothBase = Interpolate.NewBezier(Interpolate.Ease(Interpolate.EaseType.Linear), basePoints, subdivisions);
					    smoothBase = Interpolate.NewCatmullRom(basePoints, subdivisions, false);

					   smoothTipList = new List<Vector3>(smoothTip);
					   smoothBaseList = new List<Vector3>(smoothBase);

						firstTime = _points[_points.Count - 4].timeCreated;
						secondTime = _points[_points.Count - 1].timeCreated;

						//Debug.Log(" smoothTipList.Count: " + smoothTipList.Count);

						for (int n = 0; n < smoothTipList.Count; ++n)
						{

						    idx = _smoothedPoints.Count - (smoothTipList.Count-n);
							// there are moments when the _smoothedPoints are lesser
							// than what is required, when elements from it are removed
							if (idx > -1 && idx < _smoothedPoints.Count)
							{
								sp = new Point();
								sp.basePosition = smoothBaseList[n];
								sp.tipPosition = smoothTipList[n];
								sp.timeCreated = Mathf.Lerp(firstTime, secondTime, (float)n/smoothTipList.Count);
								_smoothedPoints[idx] = sp;
							}
							//else
							//{
							//	Debug.LogError(idx + "/" + _smoothedPoints.Count);
							//}
						}
					}
#endif
				}
				else
				{
					_points[_points.Count - 1].basePosition = _base.position;
					_points[_points.Count - 1].tipPosition = _tip.position;
					//_points[_points.Count - 1].timeCreated = Time.time;

#if USE_INTERPOLATION
					_smoothedPoints[_smoothedPoints.Count - 1].basePosition = _base.position;
					_smoothedPoints[_smoothedPoints.Count - 1].tipPosition = _tip.position;
#endif
				}
			}
			else
			{
				if (_points.Count > 0)
				{
					_points[_points.Count - 1].basePosition = _base.position;
					_points[_points.Count - 1].tipPosition = _tip.position;
					//_points[_points.Count - 1].timeCreated = Time.time;
				}

#if USE_INTERPOLATION
				if (_smoothedPoints.Count > 0)
				{
					_smoothedPoints[_smoothedPoints.Count - 1].basePosition = _base.position;
					_smoothedPoints[_smoothedPoints.Count - 1].tipPosition = _tip.position;
				}
#endif
			}
		}



		RemoveOldPoints(_points);
		if (_points.Count == 0)
		{
			_trailMesh.Clear();
		}

#if USE_INTERPOLATION
		RemoveOldPoints(_smoothedPoints);
		if (_smoothedPoints.Count == 0)
		{
			_trailMesh.Clear();
		}
#endif


#if USE_INTERPOLATION
		pointsToUse = _smoothedPoints;
#else
	    pointsToUse = _points;
#endif

		if (pointsToUse.Count > 1)
		{
			newVertices = new Vector3[pointsToUse.Count * 2];
			newUV = new Vector2[pointsToUse.Count * 2];
			newTriangles = new int[(pointsToUse.Count - 1) * 6];
			newColors = new Color[pointsToUse.Count * 2];

			for (int n = 0; n < pointsToUse.Count; ++n)
			{
			    p = pointsToUse[n];
			    time = (Time.time - p.timeCreated) / _lifeTime;
			   
			    color = Color.Lerp(Color.white, Color.clear, time);
				if (_colors != null && _colors.Length > 0)
				{
					colorTime = time * (_colors.Length - 1);
					min = Mathf.Floor(colorTime);
					max = Mathf.Clamp(Mathf.Ceil(colorTime), 1, _colors.Length - 1);
					lerp = Mathf.InverseLerp(min, max, colorTime);
					if (min >= _colors.Length) min = _colors.Length - 1; if (min < 0) min = 0;
					if (max >= _colors.Length) max = _colors.Length - 1; if (max < 0) max = 0;
					color = Color.Lerp(_colors[(int)min], _colors[(int)max], lerp);
				}

				size = 0f;
				if (_sizes != null && _sizes.Length > 0)
				{
				     sizeTime = time * (_sizes.Length - 1);
				     min = Mathf.Floor(sizeTime);
				     max = Mathf.Clamp(Mathf.Ceil(sizeTime), 1, _sizes.Length - 1);
				     lerp = Mathf.InverseLerp(min, max, sizeTime);
					if (min >= _sizes.Length) min = _sizes.Length - 1; if (min < 0) min = 0;
					if (max >= _sizes.Length) max = _sizes.Length - 1; if (max < 0) max = 0;
					size = Mathf.Lerp(_sizes[(int)min], _sizes[(int)max], lerp);
				}

				lineDirection = p.tipPosition - p.basePosition;

				newVertices[n * 2] = p.basePosition - (lineDirection * (size * 0.5f));
				newVertices[(n * 2) + 1] = p.tipPosition + (lineDirection * (size * 0.5f));

				newColors[n * 2] = newColors[(n * 2) + 1] = color;

			    uvRatio = (float)n/pointsToUse.Count;
				newUV[n * 2] = new Vector2(uvRatio, 0);
				newUV[(n * 2) + 1] = new Vector2(uvRatio, 1);

				if (n > 0)
				{
					newTriangles[(n - 1) * 6] = (n * 2) - 2;
					newTriangles[((n - 1) * 6) + 1] = (n * 2) - 1;
					newTriangles[((n - 1) * 6) + 2] = n * 2;

					newTriangles[((n - 1) * 6) + 3] = (n * 2) + 1;
					newTriangles[((n - 1) * 6) + 4] = n * 2;
					newTriangles[((n - 1) * 6) + 5] = (n * 2) - 1;
				}
			}

			_trailMesh.Clear();
			_trailMesh.vertices = newVertices;
			_trailMesh.colors = newColors;
			_trailMesh.uv = newUV;
			_trailMesh.triangles = newTriangles;
		}
	}

    #region old points remover
    void RemoveOldPoints(List<Point> pointList)
	{
		remove = new List<Point>();
		foreach ( Point p in pointList)
		{
			// cull old points first
			if (Time.time - p.timeCreated > _lifeTime)
			{
				remove.Add(p);
			}
		}
		foreach (Point p in remove)
		{
			pointList.Remove(p);
		}
	}
    #endregion
}
