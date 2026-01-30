// viewer.cpp
// Viewer class to manage the OpenGL camera position and
// mouse interaction. 
//
// Left mouse button: trackball
// Middle mouse button: dolly
// Right mouse button: translate
//
// Author: Bob Sumner (sumnerb@inf.ethz.ch) 4 May 2006

// windows
#ifdef WIN32
#include <windows.h>
#endif

// opengl
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

#include <math.h>

#include "viewer.h"
#include "trackball.h"
#include "trackball.c"

// ---------- Viewer::Viewer --------------------------------------------

Viewer::Viewer() {

  // Initialize some variables.

  _xPixels = 100;
  _yPixels = 100;
  
  _fov        =   45.0f;
  _near_plane =    0.1f;
  _far_plane  = 1000.0f;

  _origin[0] = 0.0;
  _origin[1] = 0.0;
  _origin[2] = 0.0;

  _trans[0] = 0.0;
  _trans[1] = 0.0;
  _trans[2] = 0.0;

  trackball(_quat, 0.0, 0.0, 0.0, 0.0);

  _left = false;
  _middle = false;
  _right = false;
}

void Viewer::PositionCamera(const Vec3 &center, double maxDist) {

  // center: center of object to be viewed
  // maxDist: size of the object to be viewed

  _origin[0] = center[0];
  _origin[1] = center[1];
  _origin[2] = center[2];

  _trans[0]  = 0.0;
  _trans[1]  = 0.0;
  _trans[2]  = -3.0*maxDist;

  _scale     = 1.5*maxDist;

  _near_plane = 0.001*maxDist;
  _far_plane  = 100*maxDist;

}

// ---------- Viewer::ReViewport ----------------------------------------

void Viewer::ReViewport(int x, int y) {

  // Recompute the OpenGL projection matrix when the window is resized.

  _xPixels = x;
  _yPixels = y;

  glViewport(0, 0, _xPixels, _yPixels);

  float ar = (float) _yPixels / (float) _xPixels;
  float right = tanf(_fov*3.14159f / 180.0f / 2.0f) * _near_plane;

  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  
  if (ar < 1.0) 
    glFrustum(-right/ar, right/ar, -right, right, _near_plane, _far_plane);
  else 
    glFrustum(-right, right, -right*ar, right*ar, _near_plane, _far_plane);
}

// ---------- Viewer::DoMouseControl ------------------------------------

void Viewer::DoMouseControl() {

  // Issue the OpenGL transformation commands for the mouse interaction.

  float m[4][4];
  build_rotmatrix(m, _quat);

  glTranslated(_trans[0], _trans[1], _trans[2]);
  glMultMatrixf(&m[0][0]);
  glTranslated(-_origin[0], -_origin[1], -_origin[2]);
}

// ---------- Viewer::OnMouse -------------------------------------------

void Viewer::OnMouse(int button, int state, int x, int y) {

  // Called on mouse down and mouse up events.  Initialize
  // data for trackball, dolly, and tranlation depending on which
  // button was clicked.

  _left   = false;
  _middle = false;
  _right  = false;

  bool down = (state == GLUT_DOWN); 

  if (down) {
    
    _left   = (button == GLUT_LEFT_BUTTON);
    _middle = (button == GLUT_MIDDLE_BUTTON);
    _right  = (button == GLUT_RIGHT_BUTTON);
    
    // trackball
    if (_left) {
      _lastMTB[0] = x;
      _lastMTB[1] = y;
    }
    
    // dolly
    if (_middle) {
      _lastMTrans[2] = y;
    }

    // translate
    if (_right) {
      _lastMTrans[0] = x;
      _lastMTrans[1] = y;
    }

  }
}

// ---------- Viewer::OnMouseMotion -------------------------------------

void Viewer::OnMouseMotion(int x, int y) {

  // Called when the mouse is moved (while clicked) in the window.
  // Update the mouse interaction data.

  if (_left) {
    // Trackball
    float spin_quat[4];
    trackball(spin_quat, 
	      (2.0*_lastMTB[0] - _xPixels) / (0.75*_xPixels),
	      (_yPixels - 2.0*_lastMTB[1]) / (0.75*_yPixels),
	      (2.0*x - _xPixels)           / (0.75*_xPixels),
	      (_yPixels - 2.0*y)           / (0.75*_yPixels));
    add_quats(spin_quat, _quat, _quat);
    _lastMTB[0] = x;
    _lastMTB[1] = y;
  }

  if (_middle) {
    // Dolly
    double dz = 1.5*_scale * (double) -(_lastMTrans[2] - y) / (double) _yPixels;
    
    _trans[2] += dz;
    _lastMTrans[2] = y;
  }

  if (_right) {
    // Translate
    double dx = 1.25*_scale * (double) -(_lastMTrans[0] - x) / (double) _xPixels;
    double dy = 1.25*_scale * (double)  (_lastMTrans[1] - y) / (double) _yPixels;
    
    _trans[0] += dx;
    _trans[1] += dy;
    
    _lastMTrans[0] = x;
    _lastMTrans[1] = y;
  }
}
