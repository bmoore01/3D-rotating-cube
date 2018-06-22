#include "shader_functions.hpp"

GLuint createShader(const char shaderSource[], GLenum shaderType) {
		GLuint shader = glCreateShader(shaderType);
		glShaderSource(shader, 1, &shaderSource, NULL);
		glCompileShader(shader);
		return shader;
}

GLuint createShaderProgram(GLuint vertexShader, GLuint fragmentShader) {
		GLuint shaderProgram = glCreateProgram();
		glAttachShader(shaderProgram, vertexShader);
		glAttachShader(shaderProgram, fragmentShader);
		glBindFragDataLocation(shaderProgram, 0, "outColor");
		return shaderProgram;
}
