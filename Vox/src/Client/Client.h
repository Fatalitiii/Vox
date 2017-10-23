#ifndef CLIENT_H
#define CLIENT_H

#include "Server.h"

#include <iostream>
#include <string>
#include <GL/glew.h>
#include <GLFW/glfw3.h>


class Client {
public:
	Client();
private:
	void init();
	void render();
	void update();
	int close();
	GLFWwindow* window;
};

#endif // CLIENT_H