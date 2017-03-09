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
void UserAdmin::modifyGame(vector<Game*> games , int pos){
	string name;
	int year;
	Console* console = NULL;
	int numberPlayers;
	string genre;
	string status;
	int serialNumber;
	double price;
	int opcion;
	
	cout<<"Que campo desea modificar:"<<endl;
	cout<<"1.Nombre \n2.Año \n3.Numero de Jugadores \n4.Genero \n5.Estado \n6.Numero de serie \n7.Precio \n8.Consola"<<endl;
	cin>>opcion;
	
	if(opcion == 1){
		cout<<"Ingrese el nuevo nombre:"<<endl;
		getline(cin , name);
		games[pos]->setName(name);
	}else if(opcion == 2){
		cout<<"Ingrese el nuevo ano:"<<endl;
		cin>>year;
		games[pos]->setYear(year);
	}else if(opcion == 3){
		cout<<"Numero de Jugadores"<<endl;
		cin>>numberPlayers;
		games[pos]->setNumberPlayers(numberPlayers);
	}else if(opcion == 4){
		cout<<"Ingrese el nuevo genero:"<<endl;
		cin>>genre;
		games[pos]->setGenre(genre);
	}else if(opcion == 5){
		cout<<"Ingrese la nueva condicion del juego"<<endl;
		getline(cin , status);
		games[pos]->setStatus(status);
	}else if(opcion == 6){
		cout<<"Ingrese el nuevo numero de serie:"<<endl;
		cin>>serialNumber;
		games[pos]->setSetialNumber(serialNumber);		
	}else if(opcion == 7){
		cout<<"Ingrese el nuevo precio:"<<endl;
		cin>>price;
		games[pos]->setPrice(price);
	}else if(opcion == 8){
		//Borrando puntero anterior y fijando el nuevo
		delete games[pos]->getConsole();
		games[pos]->setConsole(NULL);
		games[pos]->setConsole(setNewConsole());
		
	}

}


