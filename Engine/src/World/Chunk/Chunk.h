#ifndef CHUNK_H
#define CHUNK_H

class Chunk {
public:
	IBlock[][][] blocks;
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
}

#endif // CHUNK_H
