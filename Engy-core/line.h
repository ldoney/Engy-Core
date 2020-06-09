#pragma once
#include <GLFW\glfw3.h>
#include "vector.h"
#include "Shape2d.h"
#include <array>


namespace Engy {
	namespace Graphics {
		class Line: public Shape2D {
			public:
				Line(double x1, double y1, double x2, double y2);
		};
	}
}