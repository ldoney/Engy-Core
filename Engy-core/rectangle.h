#pragma once
#include <GLFW\glfw3.h>
#include "vector.h"
#include "Shape2d.h"
#include <array>


namespace Engy {
	namespace Graphics {
		class Rectangle : public Shape2D {
		public:
			Rectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
		};
	}
}