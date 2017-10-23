#ifndef REGION_H
#define REGION_H

#include "Chunk.h"

class Region {
public:
	Chunk[] chunks;
	/**
		Retrieve IBlock at a given position in the chunk.
		Should be called from World.h
		@param xPos the X position of the block.
		@param yPos the Y position of the block.
		@param zPos the Z position of the block.
		@return The IBlock at the position.
	*/
	IBlock getBlockAt(int xPos, int yPos, int zPos)
	{
		return this->chunks[i].ge
	}
private:
}

#endif // REGION_H
