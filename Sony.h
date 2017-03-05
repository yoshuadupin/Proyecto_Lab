// Sony.h

#pragma once

#include "Console.h"

using namespace std;

class Sony : public Console {
	public:
		// Constructor.
		Sony(int, string, string, int, double);
		// Destructor.
		~Sony();
};