// sega.cpp

#include "sega.h"

// Constructor.

Sega::Sega(string name, int year, Console* console, int numberPlayers, string genre, string status, int serialNumber, double price)
: Game(name, year, console, numberPlayers, genre, status, serialNumber, price) {
	
}

// Destructor.

Sega::~Sega(){

}