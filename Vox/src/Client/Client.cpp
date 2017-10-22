#include "Client.h"

#include <iostream>

Client::Client() {
	std::cout << "\n---------- Stating Client ----------" << std::endl;
	if (!glfwInit()) {
		std::cout << "GLFW Init failed!" << std::endl;
		close();
	}
	init();
}

void Client::init() 
{
	//Create window
	window = glfwCreateWindow(1080, 720, "Hello World", NULL, NULL);
	if (!window)
		close();

	glfwMakeContextCurrent(window);

	if (glewInit() != GLEW_OK)
		std::cout << "Glew Init failed!" << std::endl;

	update();
}

void Client::update() 
{
	while (!glfwWindowShouldClose(window))
	{
		render();
	}
	//Render
}

void Client::render() 
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	glVertex2f(-.5f, -.5f);
	glVertex2f(.0f, .5f);
	glVertex2f(.5f, -.5f);
	glEnd();

	glfwSwapBuffers(window);

	glfwPollEvents();
}

int Client::close() 
{
	if (!window)
		glfwTerminate();
	return -1;
}