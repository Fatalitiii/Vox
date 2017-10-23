#include "Engine.h"

namespace engine {
	void init() 
	{
		GameRegistry::GameRegistry();
		Blocks::registerBlocks();
	}
}