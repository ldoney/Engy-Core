#pragma once
#include <GLFW\glfw3.h>
#include "vector.h"
#include <array>
#include "Object.h"
#include <vector>
#include "Transform.h"
namespace Engy {
	namespace Graphics {
		class Shape2D:Object
		{
			public:
				using vertex_type = Vector;
				using vertices_type = std::vector<vertex_type>;
			protected:
				const vertices_type m_vertices;
				int m_type = GL_QUADS;
			public:
				Transform transform;
				Shape2D() = delete;
				Shape2D(int type, vertices_type vertices) : m_type(type), m_vertices(std::move(vertices)) { }
				Shape2D(const Shape2D& shape) = default;
				Shape2D(Shape2D && shape) = default;
				void draw();
		};
	}
}