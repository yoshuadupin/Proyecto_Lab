// electronicArts.h

#pragma once

#include "game.h"

class ElectronicArts : public Game {	
	public:
		// Constructor.
		ElectronicArts(string, int, Console*, int, string, string, int, double);
		// Destructor.
		~ElectronicArts();
};