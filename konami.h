// konami.h (Videojuego).

#pragma once

#include "game.h"

class Konami : public Game {	
	public:
		Konami(string, int, Console*, int, string, string, int, double);
		~Konami();
};