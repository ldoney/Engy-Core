#include "MathF.h"
#include <cmath>
#include "vector.h"
#include "Matrix.h"

namespace Engy {
	namespace Math {
		Engy::Graphics::Vector MathF::applyMatrixToVector(Engy::Math::Matrix m, Engy::Graphics::Vector v) {
			Matrix vAsMatrix = Matrix::VectAsMat(v);
			Matrix vTransformed = Matrix::Multiply(m, vAsMatrix);
			return Engy::Graphics::Vector(vTransformed.getColumn(0));
		}
	}
}