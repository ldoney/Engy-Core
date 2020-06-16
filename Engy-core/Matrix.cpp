#ifndef Matrix
	#include "Matrix.h"
#endif
#ifndef string
	#include <string>
#endif
#include <iostream>

namespace Engy {
	
	namespace Math {
		Matrix Matrix::Identity(int dim)
		{
			Matrix identity = Matrix(dim, dim);

			for (int i = 0; i < dim; i++)
			{
				for (int j = 0; j < dim; j++)
				{
					if (i == j)
					{
						identity.m_rows[i][j] = 1;
					}
					else
					{
						identity.m_rows[i][j] = 0;
					}
				}
			}
			return identity;
		}
		int Matrix::rows() const {return m_m;}
		int Matrix::cols() const {return m_n;}
		std::vector<Matrix::data_type> Matrix::getColumn(int which) const
		{
			std::vector<data_type> col = std::vector<data_type>();
			for (int i = 0; i < m_m; i++)
			{
				col.push_back(m_rows[i][which]);
			}
			return col;
		}
		Matrix Matrix::VectAsMat(Engy::Graphics::Vector vect)
		{
			Matrix m = Matrix(vect.length(), 1);
			for (int i = 0; i < vect.length(); i++)
			{
				m.m_rows[i][0] = vect.get(0);
			}
			return m;
		}
		Matrix Matrix::VectAsBasis(Engy::Graphics::Vector vect)
		{
			Matrix m = Matrix(vect.length(), vect.length());
			for (int i = 0; i < vect.length(); i++)
			{
				m.m_rows[i][i] = vect.get(i);
			}
			return m;
		}
		Matrix Matrix::Multiply(const Matrix& a, const Matrix& b)
		{
			Matrix result(a.m_m, b.m_n);
			if (a.m_n != b.m_m)
			{
				std::cout << "ATTEMPTED TO MULTIPLY TWO UN-LIKE MATRICES" << std::endl;
			}
			for (int i = 0; i < a.m_m; i++)
			{
				for (int j = 0; j < b.m_n; j++)
				{
					data_type sum = 0;
					for (int k = 0; k < a.m_n; k++)
					{
						sum += a.m_rows[i][k] * b.m_rows[k][j];
					}
					result.m_rows[i][j] = sum;
				}
			}
			return result;
		}
		Matrix Matrix::Transpose(const Matrix& t)
		{
			Matrix result(t.m_n, t.m_m);
			for (int i = 0; i < result.m_m; i++)
			{
				for (int j = 0; j < result.m_n; j++)
				{
					result.m_rows[i][j] = t.m_rows[j][i];
				}
			}
			return result;
		}
		Vector Matrix::ApplyMatrixToVector(const Matrix m, const Vector v)
		{
			return Multiply(m, VectAsMat(v)).getColumn(0);
		}
		void Matrix::print() const
		{
			for (int i = 0; i < this->m_m; i++)
			{
				std::cout << "|";
				for (int j = 0; j < this->m_n; j++)
				{
					std::cout << this->m_rows.at(i).at(j);
					if (j != this->m_n - 1)
					{
						std::cout << "\t";
					}
				}
				std::cout << "|" << std::endl;
			}
			std::cout << std::endl << std::endl;
		}
	}
}