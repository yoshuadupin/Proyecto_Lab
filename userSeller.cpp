// userSeller.cpp

#include "userSeller.h"

// Constructor.

UserSeller::UserSeller(string name, string checkIn, string checkOut) : User(name) {
	this -> checkIn = checkIn;
	this -> checkOut = checkOut;
}

// Setters.

void UserSeller::setCheckIn(string checkIn) {
	this -> checkIn = checkIn;
}

void UserSeller::setCheckOut(string checkOut) {
	this -> checkOut = checkOut;
}

// Getters.

string UserSeller::getCheckIn() {
	return checkIn;
}

string UserSeller::getCheckOut() {
	return checkOut;
}

// Destructor.

UserSeller::~UserSeller() {

}