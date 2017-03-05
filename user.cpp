#include "user.h"

User::User(string name){
	this->name = name;
}

User::~User(){

}

void User::setName(string name){
	this->name = name;
}

string User::getName(){
	return name;
}