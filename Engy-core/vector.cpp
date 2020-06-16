#include "vector.h"
#include <vector>
#include "MathF.h"

using namespace std;
namespace Engy {
	namespace Graphics {

		Vector::Vector(std::vector<data_type> old) : m_components(std::move(old))
		{

		}
		Vector::Vector(int dimensions)
		{
			m_components = std::vector<data_type>();
			m_components.assign(dimensions, 0.0);
 		}
		Vector::Vector(data_type x, data_type y)
		{
			m_components = std::vector<data_type>();
			m_components.push_back(x);
			m_components.push_back(y);
		}
		Vector::Vector()
		{
			m_components = std::vector<data_type>();
		}
		void Vector::add(Vector other)
		{
			for (int i = 0; i < std::size(m_components); i++)
			{
				m_components[i] += other.m_components[i];
			}
		} 
		int Vector::length() const
		{
			return size(m_components);
		}
		std::vector<Vector::data_type> Vector::getComponents() {return m_components;}
		Vector::data_type Vector::get(int index) const { return m_components.at(index); }
		void Vector::set(int index, data_type value) { m_components.at(index) = value; }
	}
}