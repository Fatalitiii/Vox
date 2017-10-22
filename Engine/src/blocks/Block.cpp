#include "Block.h"

Block::Block(string unlocalName) {
	std::cout << "Setting name: " << unlocalName << std::endl;
	this->unlocalizedName = unlocalName;
}

bool Block::isVisible() {
	return true;
}

bool Block::isCollidable() {
	return true;
}

string Block::getName() const {
	std::cout << "Getting name: " << this->unlocalizedName << std::endl;
	return this->unlocalizedName;
}
