#pragma once

#include "../blocks/Block.h"
#include <map>

class GameRegistry {
public:
	Block registerBlock(Block block, char name);
	//Item registerItem(Item block, char name);
private:
	const int MIN_BLOCK_ID = 0;
	const int MAX_BLOCK_ID = 4095;
	const int MIM_ITEM_ID = 4096;
	const int MAX_ITEM_ID = 31999;
	typedef std::map<Block, int> blockID;
	typedef std::map<char, Block> blockName;
	//Item typedef std::map<Item, int> blockID;
};