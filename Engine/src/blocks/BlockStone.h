#include "IBlock.h"

class BlockStone : public IBlock {
public:
	BlockStone(std::string modID, std::string unlocalName) : IBlock(modID, unlocalName) {

	}
};