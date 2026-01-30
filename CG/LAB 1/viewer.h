// viewer.hpp
// Viewer class to manage the OpenGL camera position and
// mouse interaction. 
//
// Left mouse button: trackball
// Middle mouse button: dolly
// Right mouse button: translate
//

#ifndef VIEWER_H
#define VIEWER_H

#include "vec3.h"

// ---------- Viewer ----------------------------------------------------

class Viewer {

public:

  Viewer();

  void PositionCamera(const Vec3 &center, double maxDist);

  void SetupView();

  void DoMouseControl();

  void OnSize();
  void OnMouse(int button, int state, int x, int y);
  void OnMouseMotion(int x, int y);

  void ReViewport(int x, int y);

protected:

  // Width and height of OpenGL window.
  int _xPixels;
  int _yPixels;


  float _fov;            // field of view (in degrees)
  float _near_plane;     // near plane
  float _far_plane;      // far plane

  // Manipulation variables

  double _origin[3];     // camera origin
  double _trans[3];      // camera translation

  int _lastMTrans[3];    // last camera translation
  int _lastMTB[2];       // last trackball click location

  float _quat[4];        // quaternion (for trackball)

  double _scale;         // dolly scale

  bool _left;            // left button is active?
  bool _middle;          // middle button is active?
  bool _right;           // right button is active?

};

#endif
