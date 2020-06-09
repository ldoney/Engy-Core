#pragma once
#include "Window.h"
#include "UserInput.h"
#include "Object.h"
#include <vector>
#define GLFW_INCLUDE_NONE

namespace Engy {
	namespace Game {
		using namespace Graphics;

		class RunnableGame {
			protected:
				std::vector<Object> objects;
			public:
				static Window *INSTANCE;
				static UserInput *INPUT;
				RunnableGame(void);
				void Start();
				void Update(double dt);
		};
	}
}