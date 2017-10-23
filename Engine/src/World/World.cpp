#include "world.h"

IBlock world::getBlockAt(int xPos, int yPos, int zPos){
    int cX, cY, cZ;
    cX = floor(xPos/16)*16;
    cY = floor(yPos/16)*16;
    cZ = floor(zPos/16)*16;

    chunk[xPos/16][yPos/16][zPos/16].getBlockAt(cX, cY, cZ)
}
