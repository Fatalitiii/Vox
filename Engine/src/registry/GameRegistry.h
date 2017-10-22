#pragma once
#include "../blocks/IBlock.h"
#include <map>
#include <string>

class GameRegistry {
public:
	void static registerBlock(IBlock block);
	IBlock static *getBlock(int id);
	IBlock static *getBlock(std::string block);
	int static getBlockID(std::string block);
	//Item registerItem(Item block, char name);
private:
	const int MIN_BLOCK_ID = 0;
	const int MAX_BLOCK_ID = 4095;
	const int MIM_ITEM_ID = 4096;
	const int MAX_ITEM_ID = 31999;
	static std::map<int, IBlock> blockID;
	static std::map<std::string, IBlock> blockName;
	//Item typedef std::map<Item, int> blockID;
};