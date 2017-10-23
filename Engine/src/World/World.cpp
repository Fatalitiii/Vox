#include "world.h"

world::world(const std::string worldSaveLocation)
{
    this->worldSaveLocation = worldSaveLocation;
    this->loadWorld();
}

void world::loadWorld()
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

IBlock world::getBlockAt(int xPos, int yPos, int zPos)
{
    int cX, cY, cZ;
    cX = floor(xPos/16)*16;
    cY = floor(yPos/16)*16;
    cZ = floor(zPos/16)*16;

    chunk[xPos/16][yPos/16][zPos/16].getBlockAt(cX, cY, cZ)
}
