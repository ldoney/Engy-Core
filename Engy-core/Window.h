#pragma once
#include <GLFW\glfw3.h>
namespace Engy {
	namespace Graphics {
		class Window
		{
			private:
				int m_width, m_height;
				const char *m_name;
				GLFWwindow *m_window;
			public:
				Window(const char *name, int width, int height);
				~Window();
				void update();
				void init();
				static void updateVideoMode(Window* window, const GLFWvidmode* mode);
				GLFWwindow* getWindow();
				bool isClosed() const;
		};
	}
}