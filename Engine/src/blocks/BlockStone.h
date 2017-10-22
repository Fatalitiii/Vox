#ifndefined BLOCKSTONE_H
#define BLOCKSTONE_H

#include "IBlock.h"

class BlockStone : public IBlock {
public:
	BlockStone(std::string modID, std::string unlocalName) : IBlock(modID, unlocalName) {

	}
};

#endif // BLOCKSTONE_H