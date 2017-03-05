// Microsoft.h

#pragma once

#include "Console.h"

using namespace std;

class Microsoft : public Console {
	public:
		// Constructor.
		Microsoft(int, string, string, int, double);
		// Destructor.
		~Microsoft();
};