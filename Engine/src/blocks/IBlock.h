#pragma once
#include <iostream>
#include <string>

class IBlock {
public:
	IBlock(std::string modID, std::string unlocalName);
	virtual bool isVisible();
	virtual bool isCollidable();
	std::string getName() const;
	bool operator< (const IBlock& obj) const
	{
		if (obj.unlocalizedName < this->unlocalizedName)
			return true;
	}
protected:
	std::string unlocalizedName;
};