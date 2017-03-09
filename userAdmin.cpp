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

void UserAdmin::deleteGame(vector<Game*> games , int pos){
	if(pos>=games.size() || pos<0){
		cout<<"No se encuentra en el vector"<<endl;
	}else{
		cout<<"Elimando Juego del inventario"<<endl;
		delete games[pos];
		games.erase(pos);
	}
}
void UserAdmin::deleteConsole(vector<Console*> consoles , int pos){
	if(pos>=consoles.size() || pos<0){
		cout<<"No se encuentra en el vector"<<endl;
	}else{
		cout<<"Elimando consola del inventario"<<endl;
		delete consoles[pos];
		consoles.erase(pos);
	}
}


// Destructor.

UserAdmin::~UserAdmin() {
	
}
