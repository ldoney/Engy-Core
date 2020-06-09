#include "Window.h"
#include "RunnableGame.h"
#include <GLFW\glfw3.h>
#include <iostream>
namespace Engy {
	namespace Graphics {
		using namespace Game;
		Window::Window(const char *name, int width, int height)
		{
			m_width = width;
			m_height = height;
			m_name = name;
			init();
		}
		void Window::updateVideoMode(Window* window, const GLFWvidmode* mode)
		{
			glfwWindowHint(GLFW_RED_BITS, mode->redBits);
			glfwWindowHint(GLFW_GREEN_BITS, mode->greenBits);
			glfwWindowHint(GLFW_BLUE_BITS, mode->blueBits);
			glfwWindowHint(GLFW_REFRESH_RATE, mode->refreshRate);
			
			glfwSetWindowMonitor(window->getWindow(), glfwGetWindowMonitor(window->getWindow()), 0, 0, mode->width, mode->height, mode->refreshRate);
		}
		Window::~Window()
		{

		}
		bool Window::isClosed() const
		{
			return glfwWindowShouldClose(m_window);
		}
		void window_size_callback(GLFWwindow* window, int width, int height)
		{
			const GLFWvidmode* mode = glfwGetVideoMode(glfwGetPrimaryMonitor());
			glfwWindowHint(GLFW_RED_BITS, mode->redBits);
			glfwWindowHint(GLFW_GREEN_BITS, mode->greenBits);
			glfwWindowHint(GLFW_BLUE_BITS, mode->blueBits);
			glfwWindowHint(GLFW_REFRESH_RATE, mode->refreshRate);

			glfwSetWindowMonitor(window, glfwGetWindowMonitor(window), 0, 0, mode->width, mode->height, mode->refreshRate);
		}
		void Window::init()
		{
			m_window = glfwCreateWindow(m_width, m_height, m_name, NULL, NULL);
			if (!m_window)
			{
				std::cout << "Failed to start window!" << std::endl;
			}else
			{ 
				std::cout << "Window started successfully!" << std::endl;
			}
			glfwMakeContextCurrent(m_window);
			updateVideoMode(this, glfwGetVideoMode(glfwGetPrimaryMonitor()));
			glfwSetWindowSizeCallback(m_window, window_size_callback);
		}
		
		GLFWwindow* Window::getWindow()
		{
			return m_window;
		}
		void Window::update()
		{
			glfwSwapBuffers(m_window);
			glfwPollEvents();
		}

	}
}