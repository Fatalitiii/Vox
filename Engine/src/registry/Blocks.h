#pragma once
#include "../blocks/BlockAir.h"
#include "../blocks/BlockStone.h"
#include "GameRegistry.h"

class Blocks{
public:
	static IBlock AIR;
	static IBlock STONE;

	static void registerBlocks();
};