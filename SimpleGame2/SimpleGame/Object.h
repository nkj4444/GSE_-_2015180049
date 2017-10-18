#pragma once
class Object
{
public:
public:
	float x, y, z;
	float size;
	float r, g, b, a;
	void Update();
	double elapsedTime;

	Object() {
		x = 0;
		y = 0;
		z = 0;
		size = 40;
		r = 1;
		g = 1;
		b = 1;
		a = 1;
	}
	Object(float _x, float _y, float _z, float _size, float _r, float _g, float _b, float _a) {
		x = _x;
		y = _y;
		z = _z;
		size = _size;
		r = _r;
		g = _g;
		b = _b;
		a = _a;
	}
	
};

