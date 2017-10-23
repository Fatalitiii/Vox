#include "Blocks.h"

IBlock Blocks::AIR = BlockAir("vox","air");
IBlock Blocks::STONE = BlockStone("vox", "stone");
IBlock Blocks::DIRT = BlockAir("vox", "dirt");
IBlock Blocks::GRASS = BlockAir("vox", "grass");
IBlock Blocks::SAND = BlockAir("vox", "sand");
IBlock Blocks::WATER = BlockAir("vox", "water");
IBlock Blocks::WOOD = BlockAir("vox", "wood");
IBlock Blocks::LEAVES = BlockAir("vox", "leaves");
IBlock Blocks::PLANK = BlockPlank("vox", "plank");

void Blocks::registerBlocks() {
	std::cout << "-------- Registering Blocks --------" << std::endl;
	GameRegistry::registerBlock(Blocks::AIR);
	GameRegistry::registerBlock(Blocks::STONE);
	GameRegistry::registerBlock(Blocks::DIRT);
	GameRegistry::registerBlock(Blocks::GRASS);
	GameRegistry::registerBlock(Blocks::SAND);
	GameRegistry::registerBlock(Blocks::WATER);
	GameRegistry::registerBlock(Blocks::WOOD);
	GameRegistry::registerBlock(Blocks::LEAVES);
	GameRegistry::registerBlock(Blocks::PLANK);
}

