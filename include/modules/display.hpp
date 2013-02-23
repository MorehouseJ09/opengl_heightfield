#ifndef DISPLAY_HPP
#define DISPLAY_HPP

// require project libraries
#include "classes/height_field.hpp"

// require the proper libraries
#include <stdlib.h>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>
#include <GLUT/glut.h>

// require our global persistent heightfield object
extern HeightField * heightField;	

namespace display {

	// declare a type that is useful for the toggling of what type of display we want
	typedef enum {

		GRAYSCALE,//draw out a grayscale image
		WIREFRAME,//draw out a wireframe -- currently not working
		POINT,//draw out only points
		COLOR,//color used for tests right now
		
	} DisplayType;

	// draw points is useful for drawing the map by simply drawing out elements
	void drawPoints();

	// draw out grayscale gradient for this particular element
	void drawGrayscale();

	// void draw wireframe of the mesh etc
	void drawWireframe();

	//use the color element as a temporary drawing element
	void drawColor();

	//draw a simple test cube for now
	void drawCube();
}

#endif