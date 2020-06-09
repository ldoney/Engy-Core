#pragma once
#include "vector.h"
#include "Matrix.h"
namespace Engy {
	namespace Math {
		class MathF
		{
		public:
			static Engy::Graphics::Vector applyMatrixToVector(Engy::Math::Matrix m, Engy::Graphics::Vector v);
		};
	}
}

