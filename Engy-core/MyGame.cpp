#include "MyGame.h"
#include <iostream>
#include "RunnableGame.h"
#include "Window.h"
#include "line.h"
#include "Object.h"
#include "Rectangle.h"
#include "Matrix.h"
namespace Engy {
	namespace Game {
		Rectangle r(0.0, 0.0, 0.5, 0.0, 0.5, 0.5, 0.0, 0.5);
		void MyGame::Start()
		{
			glClearColor(0.5f, 0.5f, 0.5f, 1.0f);
			using namespace Math;
		}
		void MyGame::Update(double dt)
		{
			if (UserInput::getKey(GLFW_KEY_A))
			{
				r.transform.translate(Vector(-0.01 * dt,0));
			}
			if (UserInput::getKey(GLFW_KEY_D))
			{
				r.transform.translate(Vector(0.01 * dt, 0));
			}
			if (UserInput::getKey(GLFW_KEY_W))
			{
				r.transform.translate(Vector(0, 0.01 * dt));
			}
			if (UserInput::getKey(GLFW_KEY_S))
			{
				r.transform.translate(Vector(0, -0.01 * dt));
			}
			r.draw();
		}
	}
}
