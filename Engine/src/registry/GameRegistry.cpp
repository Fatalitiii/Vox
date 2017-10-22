#include "GameRegistry.h"

std::map<int, IBlock> GameRegistry::blockID;
std::map<std::string, IBlock> GameRegistry::blockName;

void GameRegistry::registerBlock(IBlock block) {
	if (GameRegistry::blockName.count(block.getName())) {
		//Block with same name already in regisrty
		std::cout << "Unable to add " << block.getName() << " as already in registry under ID["
			<< getBlockID(block.getName()) << "], suggest changing name." << std::endl;
	}
	else {
		//Block is the first instancy
		GameRegistry::blockID.insert(std::make_pair(GameRegistry::blockID.size(), block));
		GameRegistry::blockName.insert(make_pair(block.getName(), block));
		std::cout << "Registered " << block.getName() << " with ID["
			<< getBlockID(block.getName()) << "]" << std::endl;
	}
}

IBlock* GameRegistry::getBlock(int id) {
	if (GameRegistry::blockID.size() < id || GameRegistry::blockID.size() == 0)
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
