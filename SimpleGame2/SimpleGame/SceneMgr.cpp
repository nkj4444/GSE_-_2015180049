#include "stdafx.h"
#include "SceneMgr.h"
#include "Object.h"
#include "Renderer.h"

#include "Dependencies\glew.h"
#include "Dependencies\freeglut.h"






void SceneMgr::RenderScene() {
	//오브젝트 배치
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glClearColor(0.0f, 0.3f, 0.3f, 1.0f);


	
	for (int i=0; i < MAX_OBJECTS_COUNT; i++) {
		//m_object[i] = new Object(0, 0, 0, 4, 1, 0, 1, 1);
	
		//m_Renderer->DrawSolidRect(rand()% 501 -251, rand()& 501 - 251, rand() & 501 - 251, 4, 1, 0, 1, 1);
	
		//m_Renderer->DrawSolidRect(m_object[i]->x,m_object->y,m_object->z,m_object->size,m_object->r,m_object->g,m_object->b,m_object->elapsedTime);
	}
	

	glutSwapBuffers();
}
