// Console.cpp

#include "Console.h"

// Constructor.

Console::Console(int year, string model, string condition, int serialNumber, double price) {
	this -> year = year;
	this -> model = model;
	this -> condition = condition;
	this -> serialNumber = serialNumber;
	this -> price = price;
}

// Setters.

void Console::setYear(int year) {
	this -> year = year;
}

void Console::setModel(string model) {
	this -> model = model;
}

void Console::setCondition(string condition) {
	this -> condition = condition;
}

void Console::setSerialNumber(int serialNumber) {
	this -> serialNumber = serialNumber;
}

void Console::setPrice(double price) {
	this -> price = price;
}

// Getters.

int Console::getYear() {
	return year;
}

string Console::getModel() {
	return model;
}

string Console::getCondition() {
	return condition;
}

int Console::getSerialNumber() {
	return serialNumber;
}

double Console::getPrice() {
	return price;
}

// Destructor.

Console::~Console() {
	//
}