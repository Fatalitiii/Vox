#include "World.h"

World::World(const std::string worldSaveLocation)
{
    this->worldSaveLocation = worldSaveLocation;
    this->loadWorld();
}

void World::loadWorld()
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
}

IBlock World::getBlockAt(int xPos, int yPos, int zPos)
{
	//Floor gets the exact region it is in {0,0} or {1,0}
    int cX, cZ;
    cX = floor(xPos/16)*16;
    cZ = floor(zPos/16)*16;

	Region[xPos / 16][zPos / 16].getBlockAt(cX, yPos, cZ);
}
