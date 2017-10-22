#include "GameRegistry.h"

std::map<int, IBlock> GameRegistry::blockID;
std::map<std::string, IBlock> GameRegistry::blockName;

void GameRegistry::registerBlock(IBlock block) {
	GameRegistry::blockID.insert(std::make_pair(GameRegistry::blockID.size(), block));
	GameRegistry::blockName.insert(make_pair(block.getName(), block));
}

IBlock* GameRegistry::getBlock(int id) {
	if (GameRegistry::blockID.size() < id)
		return NULL;
	return &GameRegistry::blockID.find(id)->second;
}

IBlock* GameRegistry::getBlock(std::string blockName) {
	int id = distance(GameRegistry::blockName.begin(), GameRegistry::blockName.find(blockName));
	return getBlock(id);
}

int GameRegistry::getBlockID(std::string blockName) {
	int id = distance(GameRegistry::blockName.begin(), GameRegistry::blockName.find(blockName));
	return id;
}
