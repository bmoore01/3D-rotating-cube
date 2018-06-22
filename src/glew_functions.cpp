#include "glew_functions.hpp"

void setup_buffers(GLuint* vao, GLuint* vbo, GLuint* ebo) {
		glGenVertexArrays(1 ,vao);
		glBindVertexArray(*vao);

		glGenBuffers(1, vbo);
		glBindBuffer(GL_ARRAY_BUFFER, *vbo);

		glGenBuffers(1, ebo);
		glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, *ebo);
}
