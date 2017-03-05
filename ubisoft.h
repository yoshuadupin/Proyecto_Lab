// ubisoft.h

#pragma once

#include "game.h"

class Ubisoft : public Game {	
	public:
		// Constructor.
		Ubisoft(string, int, Console*, int, string, string, int, double);
		// Destructor.
		~Ubisoft();
};