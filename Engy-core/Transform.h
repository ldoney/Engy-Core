#pragma once
#include "vector.h"
namespace Engy {
	namespace Graphics {
		class Transform {
			private:
				
			public:
				Vector position, scale;
				Transform();
				void translate(Vector v);
				void translate(double x, double y);
		};
	}
}