// sony.h (Videojuego).

#pragma once

#include "game.h"

class sony : public Game {	
	public:
		sony(string, int, Console*, int, string, string, int, double);
		~sony();
};