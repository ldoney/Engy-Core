#include "RunnableGame.h"
#include "UserInput.h"
#include "vector.h"
#include "line.h"
#include <GLFW\glfw3.h>
#include "Window.h"
#include <iostream>
namespace Engy {
	namespace Game {
		Window *RunnableGame::INSTANCE;
		RunnableGame::RunnableGame(void)
		{
			using namespace Engy;
			using namespace Game;
			using namespace Graphics;

			RunnableGame::INSTANCE = new Window("TEST", 680, 680);
			UserInput::init(RunnableGame::INSTANCE);
			objects = std::vector<Object>();
			std::cout << "Game initialized"  << std::endl;
		}
		void RunnableGame::Start()
		{
			std::cout << "Starting Game!" << std::endl;
		}
		void RunnableGame::Update(double dt)
		{
			std::cout << "Running Game Update!" << std::endl;
		}
	}
}
