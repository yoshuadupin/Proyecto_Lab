// Management.h

#include <iostream>
#include <vector>

#include "Console.h"
#include "game.h"

using namespace std;

class Management {
	private:
		vector<Console*> consoles;
		vector<Game*> videoGames;

	public:
		// Constructor.
		Management(vector<Console*>, vector<Game*>);
		// Getters.*/
		Console* getConsole(int);
		Game* getVideoGame(int);
		vector<Console*> getConsoles();
		vector<Game*> getVideoGames();
};