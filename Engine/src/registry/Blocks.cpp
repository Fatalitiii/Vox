#include "Blocks.h"

Block Blocks::AIR = BlockAir("air");
Block Blocks::STONE = BlockStone("stone");

void Blocks::registerBlocks() {
	std::cout << "Init blocks" << std::endl;
}