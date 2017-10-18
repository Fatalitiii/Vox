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