#include "Client.h"

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

	World* world = new World("test");
	world->create();
	std::string n;
	int x, y, z;
	for (y = 0; y < 16; y++) {
		for (x = 0; x < 16; x++) {
			for (z = 0; z < 16; z++) {
				n += world->getBlockAt(x, y, z).getName() + " [" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + "], ";
				if (z == 15) {
					n += "\n";
				}
			}
			if (x == 15) {
				n += "\n\n";
			}
		}
	}
	std::cout << n << std::endl;
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