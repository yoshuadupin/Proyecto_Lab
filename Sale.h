// Sale.h

#pragma once

#include "Console.h"
#include "VideoGame.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Sale {
	private:
		string clientName;
		vector<Console*> consoles;
		vector<VideoGame*> videoGames;
		string finalHour;
		string userName;
		double subtotal;

	public:
		// Constructor.
		Sale(string, string, string, double);
		// Setters.
		void setClientName(string);
		void setConsole(Console*);
		void setVideoGame(VideoGame*);
		void setFinalHour(string);
		void setUserName(string);
		void setSubtotal(double);
		// Getters.
		string getClientName();
		Console* getConsole(int);
		VideoGame* getVideoGame(int);
		string getFinalHour();
		string getUserName();
		double getSubtotal();
		// Destructor.
		~Sale();
};