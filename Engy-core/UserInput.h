#pragma once

#include "Window.h"

#define MAX_KEYS 1024
#define MAX_BUTTONS 512
namespace Engy {
	namespace Game {
		using namespace Graphics;
		class UserInput
		{
			private:
				static bool m_Keys[MAX_KEYS];
				static bool m_MouseButtons[MAX_BUTTONS];
			public:
				static void init(Window* w);
				static bool getKey(int key);
				static void setKey(int key, bool value);
				static bool getMouseButton(int button);
				static void setMouseButton(int button, bool value);
		};
	}
}