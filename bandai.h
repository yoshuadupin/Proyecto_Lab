// bandai.h

#pragma once

#include "game.h"

class Bandai : public Game {	
	public:
		// Constructor.
		Bandai(string, int, Console*, int, string, string, int, double);
		// Destructor.
		~Bandai();
};