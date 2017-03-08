// userAdmin.cpp

#include "userAdmin.h"

// Constructor.

UserAdmin::UserAdmin(string name, int password): User(name) {
	this -> name = name;
	this -> password = password;
}

// Setter.

void UserAdmin::setPassword(int password) {
	this -> password = password;
}

// Getter.

string UserAdmin::getPassword() {
	return password;
}

// Destructor.

UserAdmin::~UserAdmin() {
	
}
