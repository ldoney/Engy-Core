#include "Shape2d.h"
#include <array>
#include <iostream>
#include "Math.h"
namespace Engy {
	namespace Graphics {
		void Shape2D::draw()
		{
			glBegin(m_type);
			glColor3f(1.0f, 0.0f, 0.0f);
			Engy::Math::Matrix scalar = Engy::Math::Matrix::VectAsBasis(transform.scale);
			for (int i = 0; i < (m_vertices).size(); i++)
			{
				Vector v = (m_vertices.at(i));				
				Vector v1 = Vector(v.get(0) + transform.position.get(0), v.get(1) + transform.position.get(1));
				v1.applyMatrix(scalar);
				glVertex2f(v1.get(0),v1.get(1));
			}
			glEnd();
			glFlush();
		}
	}
}