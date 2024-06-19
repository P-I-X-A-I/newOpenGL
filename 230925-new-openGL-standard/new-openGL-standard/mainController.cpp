#include "framework.h"

#include "mainController.h"


mainController::mainController()
{
	printf("mainController init\n");

	// init obj
	win_obj = new WindowGUI_Manager_Class();

	// init opengl
	gl_simple::init_simple_OpenGL(win_obj->dummyWnd);
}

mainController::~mainController()
{

}