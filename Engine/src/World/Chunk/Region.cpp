#include "Region.h"

IBlock Region::getBlockAt(int xPos, int yPos, int zPos)
{
	int cY = floor(xPos / 16) * 16;
	return this->chunks[cY]->getBlockAt(xPos, yPos, zPos);
}