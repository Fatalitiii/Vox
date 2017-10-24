#ifndef WORLD_H
#define WORLD_H

#include "../registry/GameRegistry.h"
#include "../blocks/IBlock.h"
#include "Chunk\Region.h"

#include <string>
#include <math.h>

class World {
public:
	// Check if world is new / created or being loaded from file.
	bool loaded = false;

	Region* region[1][1];

	/**
	Sets up the world with no save location
	*/
	World()
	{
		std::cout << "Init World" << std::endl;
	};

	/**
	Sets up the world.
	@param worldSaveLocation the location of the world file.
	*/
	World(std::string worldSaveLocation)
	{
		this->worldSaveLocation = worldSaveLocation;
		this->loadWorld();
		std::cout << "Init World with var" << std::endl;
	};

	/**
	Creates the world
	*/
	void create();

	/**
	Retrieve IBlock at a given position in the world.
	@param xPos the X position of the block.
	@param yPos the Y position of the block.
	@param zPos the Z position of the block.
	@return The IBlock at the position.
	*/
	IBlock getBlockAt(int xPos, int yPos, int zPos);

private:
	/**
	Loads the world and instantuates the variables, name, description.
	*/
	void loadWorld()
	{
		/* TODO:
		Load resource location world.lua
		world.lua
		- name = string
		- desc = string
		- default spawn = {{aX, aY, aZ}, {bX, bY, bZ}}
		where a and b are different spawns and random depending
		on number of players
		*/
	};
	std::string worldName;
	std::string worldDescription;
	std::string worldSaveLocation;
};

#endif // WORLD_H