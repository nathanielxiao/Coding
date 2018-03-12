#include <GLFW\glfw3.h>
#include "linmath.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	if (!glfwInit())
	{
		exit(EXIT_FAILURE); //EXIT_FAILURE = value 1 so exit(1) will also work
	}
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);  //What OpenGL version we are using
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
	GLFWwindow* window = glfwCreateWindow(960, 480, "Nate's OpenGL Window", NULL, NULL);

	if (!window) {
		glfwTerminate();
		exit(EXIT_FAILURE);
	}

	glfwMakeContextCurrent(window);
	glfwSwapInterval(1);  //How we want to freash each frame


	const float DEG2RAD = 3.14159 / 180;
	float radius = 0.2;
	float r = 0.0;
	float g = 0.3;
	float b = 0.6;
	float x = 0.5;
	float y = -0.33;
	bool ballLeft = true;
	bool ballDown = true;
	float speed = 0.03;

	while (!glfwWindowShouldClose(window))
	{
		//Setup View
		float ratio;
		int width, height;
		glfwGetFramebufferSize(window, &width, &height);
		ratio = width / (float)height;
		glViewport(0, 0, width, height);
		glClear(GL_COLOR_BUFFER_BIT); //Zero out 

		 //Movement
		if (ballLeft) {
			if (x > -1 + radius) {
				x -= speed;
			}
			else {
				ballLeft = false;
			}
		}
		else {
			if (x < 1 - radius) {
				x += speed;
			}
			else {
				ballLeft = true;
			}
		}

		if (ballDown) {
			if (y > -1 + radius) {
				y -= speed;
			}
			else {
				ballDown = false;
			}
		}
		else {
			if (y < 1 - radius) {
				y += speed;
			}
			else {
				ballDown = true;
			}
		}


		//Color
		r = fmod(r + 0.01, 1);
		g = fmod(g + 0.02, 1);
		b = fmod(b + 0.03, 1);
		//Drawing
		glColor3f(r, g, b);
		glBegin(GL_POLYGON);
		for (int i = 0; i < 360; i++)    
		{
			float degInRad = i * DEG2RAD; //That will give the radius position of point drawing
			glVertex2f((cos(degInRad)*radius) + x, (sin(degInRad)*radius) + y);
		}
		glEnd();


		//Swap buffer and check for events
		glfwSwapBuffers(window);
		glfwPollEvents();
	}


	//Following code is for closing window

	glfwDestroyWindow(window);
	glfwTerminate;
	exit(EXIT_SUCCESS);


}

