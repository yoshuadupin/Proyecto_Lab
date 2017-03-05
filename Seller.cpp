// Seller.cpp

#include "Seller.h"

// Constructor.

Seller::Seller(string name, string checkIn, string checkOut) {
	this -> name = name;
	this -> checkIn = checkIn;
	this -> checkOut = checkOut;
}

// Setters.

void Seller::setName(string name) {
	this -> name = name;
}

void Seller::setCheckIn(string checkIn) {
	this -> checkIn = checkIn;
}

void Seller::setCheckOut(string checkOut) {
	this -> checkOut = checkOut;
}

// Getters.

string Seller::getName() {
	return name;
}

string Seller::getCheckIn() {
	return checkIn;
}

string Seller::getCheckOut() {
	return checkOut;
}

// Destructor.

Seller::~Seller() {
	//
}