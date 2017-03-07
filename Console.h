// Console.h

#pragma once

#include <iostream>
#include <string>

using namespace std;

class Console {
	private:
		int year;
		string model;
		string condition;
		int serialNumber;
		double price;

	public:
		// Constructor.
		Console(int, string, string, int, double);
		// Setters.
		void setYear(int);
		void setModel(string);
		void setCondition(string);
		void setSerialNumber(int);
		void setPrice(double);
		// Getters.
		int getYear();
		string getModel();
		string getCondition();
		int getSerialNumber();
		double getPrice();
		// Destructor.
		~Console();
};