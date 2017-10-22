#ifndef BLOCKS_H
#define BLOCKS_H

#include "../blocks/BlockAir.h"
#include "../blocks/BlockStone.h"
#include "GameRegistry.h"

class Blocks {
public:
	static IBlock AIR;
	static IBlock STONE;
	static IBlock DIRT;
	static IBlock GRASS;
	static IBlock SAND;
	static IBlock WATER;
	static IBlock WOOD;
	static IBlock LEAVES;

	static void registerBlocks();
};

#endif //BLOCKS_H