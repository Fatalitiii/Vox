#include "IBlock.h"

class BlockAir : public IBlock {
public:
	BlockAir(std::string modID, std::string unlocalName) : IBlock(modID, unlocalName) {

	}

	bool isVisible() {
		return false;
	}

	bool isCollidable() {
		return false;
	}
};