#include "stdafx.h"
#include "SceneMgr.h"
#include "Object.h"
#include "Renderer.h"
#include "ctime"
#include "Dependencies\glew.h"
#include "Dependencies\freeglut.h"




	

void SceneMgr::ObjectMaking() {
	//오브젝트 배치
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   std::srand((unsigned int)time(NULL));//랜덤시드생성
	
	for (int i=0; i < MAX_OBJECTS_COUNT; i++) {
		int randomx = rand() % 500 - 250;
		int randomy = rand() % 500 - 250;
		m_object[i] = new Object(randomx, randomy, 0, 4, 1, 0, 1, 1);//랜덤한위치에 오브젝트들 생성
	}
	
	//rand() % M + N을 하면 N~(M+N-1)
	glutSwapBuffers();
}



void SceneMgr::DrawObject()
{
	

	int randomx = rand() % 500 - 250;
	int randomy = rand() % 500 - 250;

	for (int i = 0; i < MAX_OBJECTS_COUNT; i++)
	{
			m_Renderer->DrawSolidRect(m_object[i]->x,m_object[i]->y,m_object[i]->z,m_object[i]->size,m_object[i]->r,m_object[i]->g,m_object[i]->b,m_object[i]->a);
		
		
	}
}


void SceneMgr::UpdateAll() {
	for (int i = 0; i < MAX_OBJECTS_COUNT; i++) {
		m_object[i] -> Update();
	}

}
