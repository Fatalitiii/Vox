#include "Block.h"

class BlockAir : public Block {
public:
	BlockAir(string unlocalName) : Block(unlocalName) {

	}

	bool isVisible() {
		return false;
	}

	bool isCollidable() {
		return false;
	}
};