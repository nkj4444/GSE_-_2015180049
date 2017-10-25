#pragma once

#define MAX_OBJECTS_COUNT 50
#include "Renderer.h"
#include "Object.h"

#include "Dependencies\glew.h"
#include "Dependencies\freeglut.h"



class SceneMgr
{
private:
	Renderer *m_Renderer = NULL;
	Object m_object[];

public:
	void Update();
	void RenderScene();


	SceneMgr() {
		Object *m_objects[MAX_OBJECTS_COUNT];
		
		
	}
	SceneMgr(int _W,int _H) {


		m_Renderer = new Renderer(_W, _H);

		

	}
	
	
};
