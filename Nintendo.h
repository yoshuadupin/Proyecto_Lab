// Nintendo.h

#pragma once

#include "Console.h"

using namespace std;

class Nintendo : public Console {
	public:
		// Constructor.
		Nintendo(int, string, string, int, double);
		// Destructor.
		~Nintendo();
};
