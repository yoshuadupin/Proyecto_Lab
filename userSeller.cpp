#include "userSeller.h"

UserSeller::UserSeller(string name , string checkIn , string checkOut):User(name){
	this->checkIn = checkIn;
	this->checkOut = checkOut;
}

UserSeller::~UserSeller(){

}

//Getter
string UserSeller::getCheckIn(){
	return checkIn;
}
string UserSeller::getCheckOut(){
	return checkOut;
}

	//Setter
void UserSeller::setCheckIn(string checkIn){
	this->checkIn = checkIn;
}
void UserSeller::setCheckOut(string checkOut){
	this->checkOut = checkOut;
}