	// Sale.h

#pragma once

#include "Console.h"
#include "game.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Sale {
	private:
		string clientName;
		vector<Console*> consoles;
		vector<Game*> games;
		string finalHour;
		string userName;
		double subtotal;
		int sales;

	public:
		// Constructor.
		Sale(string, string, string, double);
		Sale();
		// Setters.
		void setClientName(string);
		void setConsole(Console*);
		void setGame(Game*);
		void setFinalHour(string);
		void setUserName(string);
		void setSubtotal(double);
		void setConsoles(vector<Console*>);
		void setGames(vector<Game*>);
		void setSale(int);
		// Getters.
		string getClientName();
		Console* getConsole(int);
		Game* getGame(int);
		string getFinalHour();
		string getUserName();
		double getSubtotal();
		vector<Console*> getConsoles();
		vector<Game*> getGames();
		int getSales();
		// Destructor.
		~Sale();
};