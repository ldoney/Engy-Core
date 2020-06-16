#pragma once
#include "vector.h"
using namespace Engy::Graphics;

namespace Engy {
	namespace Math {
		class Matrix
		{
			private:
				using data_type = double;
				std::vector<std::vector<data_type>> m_rows;
				const int m_m, m_n;
			public:
				Matrix(int rows, int cols) : m_m(rows), m_n(cols), m_rows(std::vector<std::vector<data_type>>(rows, std::vector<data_type>(cols, 0))) {};
				Matrix(std::vector<std::vector<data_type>> vect) : m_m(size(vect)), m_n(size(vect.at(0))), m_rows(vect) {};
				Matrix() = delete;

				void print() const;
				int rows() const;
				int cols() const;
				std::vector<data_type> getColumn(int which) const;

				static Vector ApplyMatrixToVector(Matrix m, Vector vect);
				static Matrix VectAsMat(Vector vect);
				static Matrix VectAsBasis(Vector vect);
				static Matrix Identity(int dim); 
				static Matrix Multiply(const Matrix& a, const Matrix& b);
				static Matrix Transpose(const Matrix& t);
		};
	}
}
