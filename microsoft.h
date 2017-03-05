// microsoft.h (Videojuego).

#pragma once

#include "game.h"

class microsoft : public Game {
	public:
		microsoft(string, int, Console*, int, string, string, int, double);
		~microsoft();
};