#pragma once
#include "RunnableGame.h"
namespace Engy {
	namespace Game {
		class MyGame : public RunnableGame {
			public:
				void Update(double dt);
				void Start();
		};
	}
}