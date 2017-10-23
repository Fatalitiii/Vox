#include "IBlock.h"

IBlock::IBlock(std::string modID, std::string unlocalName) : IBlock(modID, unlocalName, modID + ":" + unlocalName)
{
}

IBlock::IBlock(std::string modID, std::string unlocalName, std::string resourcePath)
{
	this->unlocalizedName = modID + ":" + unlocalName;
	this->resourcePath = resourcePath;
	this->meta = 0;
}

bool IBlock::isVisible()
{
	return true;
}

bool IBlock::isCollidable()
{
	return true;
}

std::string IBlock::getName() const
{
	return unlocalizedName;
}

int IBlock::getStateFromMeta(int meta)
{
	return this->meta;
}

void IBlock::setDefaultState(int meta)
{
	this->meta = meta;
}

std::string IBlock::getResourcePath()
{
	return resourcePath;
}
