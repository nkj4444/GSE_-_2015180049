#include "stdafx.h"
#include "Object.h"


	int x_incline = 1;
	int y_incline = 2;


void Object::Update() {
	
	elapsedTime = 3;


	if (x > 250) {
		x_incline = -x_incline;
	}
	if (y > 250 ) {
		y_incline = -y_incline;
	}
	if (x < -250) {
		x_incline = -x_incline;
	}
	if (y < -250) {
		y_incline = -y_incline;
	}

	x = x + x_incline;
	y = y + y_incline;
	
}
