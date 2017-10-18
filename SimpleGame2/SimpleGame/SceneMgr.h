#pragma once

#define MAX_OBJECTS_COUNT 50


class SceneMgr
{
public:
	void Update();


	SceneMgr() {
		Object *m_objects[MAX_OBJECTS_COUNT];
	}
	
	
};
