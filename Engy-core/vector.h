#pragma once
#include <array>
#include <vector>
#include "Matrix.h"

namespace Engy {
	using namespace Engy::Math;
	namespace Graphics {
		class Vector
		{
			private:
				using data_type = double;
				std::vector<data_type> m_components;
			public:
				Vector(int dimensions);
				Vector(std::vector<data_type> old);
				Vector(data_type x, data_type y);
				Vector();

				int length() const;
				data_type get(int index) const;

				void applyMatrix(Engy::Math::Matrix m);
				void add(Vector other);
				void set(int index, data_type value);
				
				std::vector<data_type> getComponents() ;
		};
	}
}