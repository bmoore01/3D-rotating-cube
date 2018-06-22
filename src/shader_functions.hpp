#ifndef SHADER_FUNCTIONS_HPP
#define SHADER_FUNCTIONS_HPP

#include <GL/glew.h>

GLuint createShader(const GLchar *shaderSource, GLenum shaderType); 
GLuint createShaderProgram(GLuint vertexShader, GLuint fragmentShader); 

#endif
