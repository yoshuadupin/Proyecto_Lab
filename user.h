// user.h

#pragma once

#include "game.h"
#include "Console.h"
#include "microsoft.h"
#include "sony.h"
#include "nintendo.h"
#include "bandai.h"
#include "konami.h"
#include "squareEnix.h"
#include "electronicArts.h"
#include "sega.h"
#include "ubisoft.h"
//Consolas
#include "Microsoft.h"
#include "Sony.h"
#include "Nintendo.h"

#include <vector>
#include <string>

using namespace std;

class User {
	protected:
		string name;

	public:
		void addConsole(vector<Console*>);
		void addGame(vector<Game*>);
		//Agregar la consola
		Console* setNewConsole();
		// Constructor.
		User(string);
		// Setter.
		void setName(string);
		// Getter.
		string getName();
		// Destructor.
		int asignarNumeroSerial(vector<Game*> , int);
		int asignarNumeroSerial(vector<Console*>, int);		
};