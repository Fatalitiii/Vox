#ifndef GAMEREGISTRY_H
#define GAMEREGISTRY_H

#include "../blocks/IBlock.h"
#include <vector>
#include <string>
#include <algorithm>

class GameRegistry {
public:
	/**
		Registers block with the registry
		@param block
	*/
	void static registerBlock(IBlock block);

	/**
		Gets the IBlock
		@param id ID of the block.
		@return The IBlock.
	*/
	IBlock static *getBlock(int id);

	/**
		Gets the IBlock
		@param block Blocks name.
		@return The IBlock.
	*/
	IBlock static *getBlock(std::string block);

	/**
		Gets the IBlock ID
		@param block Blocks name.
		@return The the desired blocks id.
	*/
	int static getBlockID(std::string block);

	/**
		Size of the block registry.
		@return The size of the block registry.
	*/
	int static getBlockRegistrySize();
	//Item registerItem(Item block, char name);
private:
	const int MIN_BLOCK_ID = 0;
	const int MAX_BLOCK_ID = 4095;
	const int MIM_ITEM_ID = 4096;
	const int MAX_ITEM_ID = 31999;
	static std::vector<IBlock> blockID;
	static std::vector<std::string> blockName;
	//Item typedef std::map<Item, int> blockID;
};

#endif // GAMEREGISTRY_H
