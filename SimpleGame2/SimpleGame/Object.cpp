#include "stdafx.h"
#include "Object.h"


void  Object::Update() {

	elapsedTime = 0.1;
	if (x >= 250) {
		x = -250;
	}

	x += 5;

}
