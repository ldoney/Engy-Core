#include "MyGame.h"
#include <iostream>
#include <GLFW\glfw3.h>
#include <ctime>
int main()
{
	if (!glfwInit())
	{
		std::cout << "Failiure in initializing glfw" << std::endl;
		glfwTerminate();
		return 0;
	}
	std::cout << "Success in initializing glfw" << std::endl;

	using namespace Engy;
	using namespace Game;

	MyGame g = MyGame();
	g.Start();
	glfwMakeContextCurrent((*RunnableGame::INSTANCE).getWindow());
	while (!(*RunnableGame::INSTANCE).isClosed())
	{
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		g.Update(1);
		(*RunnableGame::INSTANCE).update();
	}
	glfwDestroyWindow((*RunnableGame::INSTANCE).getWindow());
	glfwTerminate();
	return 0;
}