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

// addGame().

void User::addGame(vector<Game*> games){
	string name;
	int year;
	Console* console = NULL;
	int numberPlayers;
	string genre;
	string status;
	int serialNumber;
	double price;
	int option;
	
	cout<<"Ingrese el nombre del juego: "<<endl;
	getline(cin , name);
	cout<<"Ingrese el año: "<<endl;
	cin>>year;
	cout<<"Ingrese el número de jugadores: "<<endl;
	cin>>numberPlayers;
	cout<<"Ingrese el género:"<<endl;
	cin>>genre;
	cout<<"Ingrese el estado del juego: "<<endl;
	cin>>status;
	status = 1000+games.size();
	cout<<"Ingrese el precio: "<<endl;
	cin>>price;
	//TODO Hacer metodo para consolas.
	cout<<"Elija la desarrolladora de su juego: "<<endl;
	cout<<"1. Microsoft \n2. Sony \n3. Nintendo \n4. Bandai \n5. Konami"<<endl;
	cout<<"6. Square Enix \n7. Electronic Arts \n8. SEGA \n9. Ubisoft \nOpción: "<<endl;
	cin>>option;

	switch(option){
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
			cout<<"Opción no válida. No se agregará ningún juego." << endl;
			break;			
	}
}

// addConsole().

void User::addConsole(vector<Console*> consoles){
	
}