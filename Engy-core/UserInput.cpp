#include "UserInput.h"
#include "Window.h"
#include <iostream>
#include <GLFW\glfw3.h>
namespace Engy {
	namespace Game {
		using namespace Graphics;

		bool UserInput::m_Keys[MAX_KEYS] = { false };
		bool UserInput::m_MouseButtons[MAX_BUTTONS] = { false };
		void key_callback(GLFWwindow* window, int key, int scancode, int action, int mode)
		{
			if (key < MAX_KEYS)
			{
				if (action == GLFW_PRESS)
				{
					UserInput::setKey(key, true);
				}
				else if(action == GLFW_RELEASE)
				{
					UserInput::setKey(key, false);
				}
			}
		}

		void mouse_callback(GLFWwindow* window, double xpos, double ypos)
		{
		}
		bool UserInput::getKey(int key)
		{
			return m_Keys[key];
		}
		void UserInput::setKey(int key, bool value)
		{
			m_Keys[key] = value;
		}
		bool UserInput::getMouseButton(int button)
		{
			return m_MouseButtons[button];
		}
		void UserInput::setMouseButton(int button, bool value)
		{
			m_MouseButtons[button] = value;
		}

		void UserInput::init(Window* w) {
			glfwSetCursorPosCallback(w->getWindow(), mouse_callback);
			glfwSetKeyCallback(w->getWindow(), key_callback);
		}
		
	}
}