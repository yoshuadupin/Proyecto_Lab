#include "Management.h"


// Constructor.

Management::Management(vector<Console*> consoles, vector<Game*> videoGames) {
	this -> consoles = consoles;
	this -> videoGames = videoGames;
}

// Setters.
/*
void Management::setConsole(Console* console) {
	this -> consoles -> push_back(console);
}

void Management::setGame(game* videoGame) {
	this -> videoGames -> push_back(videoGame);
}*/

// Getters.

Console* Management::getConsole(int position) {
	return this -> consoles.at(position);
}

Game* Management::getVideoGame(int position) {
	return this -> videoGames.at(position);
}

vector<Console*> Management::getConsoles() {
	return this -> consoles;
}

vector<Game*> Management::getVideoGames() {
	return this -> videoGames;
}