#include "IBlock.h"

IBlock::IBlock(std::string modID, std::string unlocalName)
{
	this->unlocalizedName = modID + ":" + unlocalName;
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
	return this->unlocalizedName;
}

int IBlock::getStateFromMeta(int meta)
{
	return this->meta;
}

void IBlock::setDefaultState(int meta)
{
	this->meta = meta;
}
