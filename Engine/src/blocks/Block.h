#pragma once
#include <iostream>
#include <string>
using namespace std;

const class Block {
public:
	Block(string unlocalName);
	virtual bool isVisible();
	virtual bool isCollidable();
	string getName() const;
protected:
	string unlocalizedName;
};