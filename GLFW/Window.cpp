#include "Window.h"
#include <GLFW/glfw3.h>

#include <stdio.h>
#include <stdlib.h>



int Window::CreateWindow(int WindowWidth, int WindowLength)
{
	if (!glfwInit())
	{
		fprintf(stderr, "GLFW failed to initialise.");
		return -1;
	}

	glfwWindowHint(GLFW_SAMPLES, 4); //4 Anti_alias 
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_ANY_PROFILE);

	GLFWwindow* window;
	window = glfwCreateWindow(WindowWidth, WindowLength, "Nate is awesome.", NULL, NULL);



	if (!window)
	{
		fprintf(stderr, "Window failed to create.");
		glfwTerminate();
		return -1;
	}

	glfwMakeContextCurrent(window);
}
