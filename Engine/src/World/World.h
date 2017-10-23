#ifndef WORLD_H
#define WORLD_H

#include "../blocks/IBlock.h"
#include "/Chunk/Chunk.h"
#include "/Chunk/Region.h"


#include <math.h>

class World{
public:
    /**
        Sets up the world.
        @param worldSaveLocation the location of the world file.
    */
	World(const std::string worldSaveLocation);
    Region[][] region;
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
    void loadWorld();
    std::string worldName;
    std::string worldDescription;
    std::string worldSaveLocation;
}

#endif // WORLD_H
