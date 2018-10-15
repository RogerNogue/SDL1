#ifndef __ModuleFirstTriangle_H__
#define __ModuleFirstTriangle_H__

#include "Globals.h"
#include "Module.h"
#include "GL/glew.h"
class ModuleFirstTriangle :	public Module
{
public:
	ModuleFirstTriangle();
	~ModuleFirstTriangle();

	bool Init();
	update_status PostUpdate();

	//variables
	GLuint vbo;
};


#endif // __ModuleFirstTriangle_H__