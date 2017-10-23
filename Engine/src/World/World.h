#ifndef WORLD_H
#define WORLD_H

#include "../blocks/IBlock.h"
#include "Chunk/Chunk.h"


#include <math.h>

class world(){
public:
    Chunk[][][] chunks;
    IBlock getBlockAt(int xPos, int yPos, int zPos);
private:
}

#endif // WORLD_H
