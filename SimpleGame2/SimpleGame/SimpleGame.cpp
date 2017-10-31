/*
Copyright 2017 Lee Taek Hee (Korea Polytech University)

This program is free software: you can redistribute it and/or modify
it under the terms of the What The Hell License. Do it plz.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY.
*/

#include "stdafx.h"
#include <iostream>
#include "Dependencies\glew.h"
#include "Dependencies\freeglut.h"

#include "Object.h"
#include "Renderer.h"
#include "SceneMgr.h"

//Renderer *g_Renderer = NULL;
SceneMgr *g_SceneMgr = NULL;

//Object Ob(0,0,0,20,1,1,1,1);

void RenderScene(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(0.0f, 0.3f, 0.3f, 1.0f);
    //g_SceneMgr->RenderScene();
	// Renderer Test
	//g_Renderer->DrawSolidRect(0, 0, 0, 4, 1, 0, 1, 1);
	
	//g_Renderer->DrawSolidRect(Ob.x, Ob.y, Ob.z, Ob.size, Ob.r, Ob.g, Ob.b, Ob.a);
	g_SceneMgr->UpdateAll();
	g_SceneMgr->DrawObject();
	
	glutSwapBuffers();
}

void Idle(void)
{
	RenderScene();
	
	
	//Ob.Update();
	
	
	
}

void MouseInput(int button, int state, int x, int y)
{

	RenderScene();
}

void KeyInput(unsigned char key, int x, int y)
{
	RenderScene();
}

void SpecialKeyInput(int key, int x, int y)
{
	RenderScene();
}

int main(int argc, char **argv)
{
	// Initialize GL things
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Game Software Engineering KPU");
	
	
    
	glewInit();
	if (glewIsSupported("GL_VERSION_3_0"))
	{
		std::cout << " GLEW Version is 3.0\n ";
	}
	else
	{
		std::cout << "GLEW 3.0 not supported\n ";
	}
    
	// Initialize Renderer
	//g_Renderer = new Renderer(500, 500);
	g_SceneMgr = new SceneMgr(500,500);
	g_SceneMgr->ObjectMaking();// 오브젝트생성
	glutDisplayFunc(RenderScene);
	glutIdleFunc(Idle);
	glutKeyboardFunc(KeyInput);
	glutMouseFunc(MouseInput);
	glutSpecialFunc(SpecialKeyInput);

	glutMainLoop();

	//delete g_Renderer;

    return 0;
}

