#include "Client.h"

#include <iostream>

Client::Client() {
	if (!glfwInit()) {
		std::cout << "glfw Init failed" << std::endl;
		close();
	}
	init();
}

void Client::init() {
	window = glfwCreateWindow(1080, 720, "Hello World", NULL, NULL);
	if (!window){
		close();
	}
	glfwMakeContextCurrent(window);
	//update
	update();
}

void Client::update() {
	while (!glfwWindowShouldClose(window))
	{
		render();
	}
	//Render
}

void Client::render() {
	/* Render here */
	glClear(GL_COLOR_BUFFER_BIT);

	/* Swap front and back buffers */
	glfwSwapBuffers(window);

	/* Poll for and process events */
	glfwPollEvents();
}

int Client::close() {
	if (!window)
		glfwTerminate();
	return -1;
}