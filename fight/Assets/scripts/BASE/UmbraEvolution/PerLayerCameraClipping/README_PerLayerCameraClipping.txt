Per-Layer Camera Culling v2.0.0
--------------------------------

-DESCRIPTION-

This asset is intented to let users easily 
set up different culling planes for each
layer in their project using distance based culling. This can save resources
in situations where occlusion culling is not 
appropriate and when there are large distance
disparities between objects.

--------------------------------

-SETUP-

The package is pretty easy to implement. 
All you have to do is grab the script 
"ManualCameraClipping" from
Assets/UmbraEvolution/PerLayerCameraClipping/Scripts and drop it
onto the camera that you want to use it on.

--------------------------------

-How-To Guide-

1) Set a default clipping distance.
2) Set the custom culling distances you want for 
   each layer (they are labled in real
   time for you)
3) Now, when you edit the default distance,
   any layers that have custom values will
   not be affected unless you change their
   values to match up with the default or
   hit the "Reset All to Default button at the bottom
4) You can use the "Distance Multiplier" to easily modify all
   of the clipping values at runtime depending on the
   performance benchmarks you need to hit, or the hardware
   your game is running on.
5) Try using the "Show Gizmo" checkbox to get a visual of where
   the culling will start.
6) Don't worry about messing around with any of the values
   at runtime with your own script - they're all checked,
   validated, and overwritten if necessary to make sure
   that the tool is getting valid numbers.