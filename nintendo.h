// nintendo.h (Videojuego).

#pragma once

#include "game.h"

class nintendo : public Game {	
public:
	nintendo(string, int, Console*, int, string, string, int, double);
	~nintendo();	
};