#ifndef CHUNK_H
#define CHUNK_H

#include "../../registry/GameRegistry.h"

class Chunk {
public:
	IBlock* blocks[16][16][16];
	static int xPos, yPos, zPos;

	Chunk(int xPos, int yPos, int zPos)
	{
		for (int xx = 0; xx < 16; xx++) {
			for (int zz = 0; zz < 16; zz++) {
				for (int yy = 0; yy < 16; yy++) {
					if (yPos < 1) {
						if(yy<1)
							this->blocks[xx][yy][zz] = GameRegistry::getBlock(1);
						else
							this->blocks[xx][yy][zz] = GameRegistry::getBlock(2);
					}
					else {
						this->blocks[xx][yy][zz] = GameRegistry::getBlock(0);
					}
				}
			}
		}
	}

	/**
		Retrieve IBlock at a given position in the chunk.
		Should be called from World.h
		@param xPos the X position of the block.
		@param yPos the Y position of the block.
		@param zPos the Z position of the block.
		@return The IBlock at the position.
	*/
	IBlock getBlockAt(int xPos, int yPos, int zPos);
private:
};

#endif // CHUNK_H
