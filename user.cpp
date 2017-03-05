// user.cpp

#include "user.h"

// Constructor.

User::User(string name) {
	this -> name = name;
}

// Setter.

void User::setName(string name) {
	this -> name = name;
}

// Getter.

string User::getName() {
	return name;
}

// Destructor.

User::~User() {

}