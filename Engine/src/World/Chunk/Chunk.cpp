#include "Chunk.h"

IBlock Chunk::getBlockAt(int xPos, int yPos, int zPos)
{
	return *this->blocks[xPos][yPos][zPos];
}