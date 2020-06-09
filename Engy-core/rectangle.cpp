#include "rectangle.h"
#include "vector.h"
#include <GLFW\glfw3.h>
#include <array>
namespace Engy {
	namespace Graphics {
		Rectangle::Rectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
			: Shape2D(GL_QUADS, std::vector<Vector> {Vector(x1,y1), Vector(x2,y2), Vector(x3, y3), Vector(x4, y4)})
		{
		}
	}
}