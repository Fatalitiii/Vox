#include "Engine.h"
#include "Server.h"
#include "Client/Client.h"
#include <iostream>

bool game = true;

int main() {
	engine::init();
	void loadConfig();
	if (game) {
		Client client;
	}
	else {
		//run server
	}
}

void loadConfit() {
	//load config file
}

