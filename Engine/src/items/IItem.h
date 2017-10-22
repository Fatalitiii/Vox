#pragma once
#include <iostream>
#include <string>

const class IItem {
public:
	IItem(std::string unlocalName);
	virtual bool isVisible();
	virtual bool isCollidable();
	std::string getName() const;
protected:
	std::string unlocalizedName;
};
