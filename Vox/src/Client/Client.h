#ifndefined CLIENT_H
#define CLIENT_H

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "Server.h"

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