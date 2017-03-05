// sega.h

#pragma once

#include "game.h"

class Sega : public Game {	
	public:
		// Constructor.
		Sega(string, int, Console*, int, string, string, int, double);
		// Destructor.
		~Sega();
};