#include "line.h"
#include "vector.h"
#include <array>
namespace Engy {
	namespace Graphics {
		Line::Line(double x1, double y1, double x2, double y2)
			: Shape2D(GL_LINE, std::vector<Vector>{Vector(x1,y1), Vector(x2, y2)})
		{

		}
	}
}