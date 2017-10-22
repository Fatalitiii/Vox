#include "IItem.h"

IItem::IItem(std::string unlocalName) {
	std::cout << "Setting name: " << unlocalName << std::endl;
	this->unlocalizedName = unlocalName;
}

bool IItem::isVisible() {
	return true;
}

bool IItem::isCollidable() {
	return true;
}

std::string IItem::getName() const {
	std::cout << "Getting name: " << this->unlocalizedName << std::endl;
	return this->unlocalizedName;
}
