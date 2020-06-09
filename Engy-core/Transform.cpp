#include "Transform.h"
namespace Engy {
	namespace Graphics {
		Transform::Transform(): position(Vector(0.0,0.0)), scale(Vector(0.0,0.0))
		{
		}
		void Transform::translate(Vector v)
		{
			position.add(v);
		}
		void Transform::translate(double x, double y)
		{
			position.add(Vector(x,y));
		}
	}
}