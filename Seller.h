// Seller.h

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Seller {
	private:
		string name;
		string checkIn;
		string checkOut;

	public:
		// Constructor.
		Seller(string, string, string);
		// Setters.
		void setName(string);
		void setCheckIn(string);
		void setCheckOut(string);
		// Getters.
		string getName();
		string getCheckIn();
		string getCheckOut();
		// Destructor.
		~Seller();
};