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

void UserSeller::makeSale(vector<Game*> games , vector<Console*> consoles){
	Sale* sale = NULL;
	string cliente;
	int opcion;
	cout<<"Ingrese el nombre del cliente"<<endl; 	
	getline(cin , cliente);
	cout<<"Que desea comprar 1.Consolas o 2.Juegos:"<<endl;
	cin>>opcion;

	if(opcion == 1){
		cout<<"Desea comprar de 1.Microsoft , 2.Sony y 3.Nintendo"<<endl;
		cin>>opcion;
		
		if(opcion == 1){
			
		}else if(opcion == 2){

		}else if(opcion == 3){

		}
	}else{

	}

}

// Destructor.

UserSeller::~UserSeller() {

}