// squareEnix.h

#pragma once

#include "game.h"

class SquareEnix : public Game {
	public:
		// Constructor.
		SquareEnix(string, int, Console*, int, string, string, int, double);
		// Destructor.
		~SquareEnix();
};