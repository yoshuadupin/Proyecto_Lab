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

void User::addGame(vector<Game*> games){
	string name;
	int year;
	Console* console = NULL;
	int numberPlayers;
	string genre;
	string status;
	int serialNumber;
	double price;
	
	cout<<"Ingrese el nombre del juego:"<<endl;
	getline(cin , name);
	cout<<"Ingrese el ano:"<<endl;
	cin>>year;
	cout<<"Ingrese el numero de jugadores:"<<endl;
	cin>>numberPlayers;
	cout<<"Ingrese el genero:"<<endl;
	cin>>genre;
	cout<<"Ingrese el estado del juego:"<<endl;
	cin>>status;
	status = 1000+games.size();
	cout<<"Ingrese el precio:"<<endl;
	cin>>price;
	//TODO Hacer metodo para consolas.
	cout<<"Elija la desarrolladora de su juego:"<<endl;
	cout<<"1.Microsoft \n 2.Sony \n 3.Nintendo \n 4.Bandai \n 5.Konami"<<endl;
	cout<<"6.Square Enix.\n 7.Electronic \n Arts \n 8.SEGA \n 9.Ubisoft."<<endl;
	int opcion; 
	cin>>opcion;
	switch(opcion){
		case 1:
			games.push_back(new microsoft(name, year, console, numberPlayers, genre, status, serialNumber, price));
		break;

		case 2:
			games.push_back(new sony(name, year, console, numberPlayers, genre, status, serialNumber, price));
		break;
		
		case 3:
			games.push_back(new nintendo(name, year, console, numberPlayers, genre, status, serialNumber, price));	
		break;

		case 4:
			games.push_back(new Bandai(name, year, console, numberPlayers, genre, status, serialNumber, price));
		break;
		
		case 5:
			games.push_back(new Konami(name, year, console, numberPlayers, genre, status, serialNumber, price));	
		break;

		case 6:
			games.push_back(new SquareEnix(name, year, console, numberPlayers, genre, status, serialNumber, price));
		break;

		case 7:
			games.push_back(new ElectronicArts(name, year, console, numberPlayers, genre, status, serialNumber, price));
		break;
		
		case 8:
			games.push_back(new Sega(name, year, console, numberPlayers, genre, status, serialNumber, price));	
		break;

		case 9:
			games.push_back(new Ubisoft(name, year, console, numberPlayers, genre, status, serialNumber, price));
		break;

		default:
			cout<<"Opcion no valida , no se agregara ningun juego..."<<endl;
		break;			
	}
}

void User::addConsole(vector<Console*> consoles){
	
}


User::~User() {

}
