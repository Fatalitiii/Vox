#ifndef BLOCKPLANK_H
#define BLOCKPLANK_H

#include "IBlock.h"

class BlockPlank : public IBlock {
public:
	static enum TYPES {
		OAK, SPRUCE, BIRCH
	};

	BlockPlank(std::string modID, std::string unlocalName) : IBlock(modID, unlocalName)
	{
		this->setDefaultState(TYPES::OAK);
	}

	int getStateFromMeta(int i)
	{
		return i; // TODO: Will be a IBlockState class when complete that will return the state of the block.
	}
};

#endif // BLOCKPLANK_H