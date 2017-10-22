#include "Blocks.h"

IBlock Blocks::AIR = BlockAir("vox","air");
IBlock Blocks::STONE = BlockStone("vox","stone");

void Blocks::registerBlocks() {
	std::cout << "-------- Registering Blocks --------" << std::endl;
	GameRegistry::registerBlock(Blocks::AIR);
	GameRegistry::registerBlock(Blocks::STONE);
}

