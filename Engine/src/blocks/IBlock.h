#ifndef IBLOCK_H
#define IBLOCK_H

#include <iostream>
#include <string>

class IBlock {
public:
	IBlock(std::string modID, std::string unlocalName);
	IBlock(std::string modID, std::string unlocalName, std::string resourcePath);
	virtual bool isVisible();
	virtual bool isCollidable();
	virtual int getStateFromMeta(int meta);
	virtual void setDefaultState(int meta); // TODO: change int meta to IBlockState when complete
	std::string getName();
	virtual std::string getResourcePath();
protected:
	std::string unlocalizedName;
	int meta;
	std::string resourcePath();
};

#endif // IBLOCK_H
