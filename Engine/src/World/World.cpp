#include "World.h"

void World::create()
{
	std::cout << "Creating world" << std::endl;
	for (int x = 0; x < 1; x++) {
		for (int z = 0; z < 1; z++) {
			region[x][z] = new Region(x, z);
		}
	}
}

IBlock World::getBlockAt(int xPos, int yPos, int zPos)
{
	//Floor gets the exact region it is in {0,0} or {1,0}
	int cX = floor(xPos / 1) * 1;
	int cZ = floor(zPos / 1) * 1;

	return this->region[xPos / 16][zPos / 16]->getBlockAt(cX, yPos, cZ);
}