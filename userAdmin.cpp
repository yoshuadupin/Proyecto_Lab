#include "userAdmin.h"

UserAdmin::UserAdmin(string name, int password): User(name){
	this->password = password;
}

void UserAdmin::setPassword(int password){
	this->password = password;
}

string UserAdmin::getPassword(){
	return password;
}

UserAdmin::~UserAdmin(){
}