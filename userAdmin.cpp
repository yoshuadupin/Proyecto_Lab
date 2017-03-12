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

int UserAdmin::getPassword() {
	return password;
}

vector<Console*> UserAdmin::getConsoles() {
	return this -> consoles;
}

vector<Game*> UserAdmin::getGames() {
	return this -> games;
}

// Métodos de administración.

vector<Game*> UserAdmin::deleteGame(vector<Game*> games, int pos) {
	if (pos >= games.size() || pos < 0) {
		cout << "No se encuentra en el vector";
	} else {
		cout << "Eliminando juego del inventario..."<<endl;
		delete games[pos];
		games.erase(games.begin() + pos);
	}

	return games;
}

vector<Console*> UserAdmin::deleteConsole(vector<Console*> consoles, int pos) {
	if (pos >= consoles.size() || pos < 0) {
		cout << "No se encuentra en el vector";
	} else {
		cout << "Eliminando consola del inventario..."<<endl;
		delete consoles[pos];
		consoles.erase(consoles.begin() + pos);
	}

	return consoles;
}

vector<Game*> UserAdmin::modifyGame(vector<Game*> games, int pos) {
	string name;
	int year;
	Console* console = NULL;
	int numberPlayers;
	string genre;
	string status;
	int serialNumber;
	double price;
	int opcion;
	
	cout << "Qué campo desea modificar?: "<<endl;
	cout << "1. Nombre \n2. Año \n3. Número de jugadores \n4. Género \n5. Estado \n6. Número de serie \n7. Precio \n8. Consola \nOpción: ";
	cin >> opcion;
	
	if (opcion == 1) {
		cout << "Ingrese el nuevo nombre: ";
		cin >> name;
		games[pos] -> setName(name);
	} else if (opcion == 2) {
		cout << "Ingrese el nuevo año: ";
		cin >> year;
		games[pos] -> setYear(year);
	} else if (opcion == 3) {
		cout << "Número de jugadores: ";
		cin >> numberPlayers;
		games[pos] -> setNumberPlayers(numberPlayers);
	} else if (opcion == 4) {
		cout << "Ingrese el nuevo género: ";
		cin >> genre;
		games[pos] -> setGenre(genre);
	} else if (opcion == 5) {
		cout << "Ingrese la nueva condición del juego: ";
		cin >> status;
		games[pos] -> setStatus(status);
	} else if (opcion == 6) {
		cout << "Ingrese el nuevo número de serie (mayor de 120): ";
		cin >> serialNumber;
		games[pos] -> setSerialNumber(serialNumber);		
	} else if (opcion == 7) {
		cout << "Ingrese el nuevo precio: ";
		cin >> price;
		games[pos] -> setPrice(price);
	} else if (opcion == 8) {
		//Borrando puntero anterior y fijando el nuevo
		delete games[pos] -> getConsole();
		games[pos] -> setConsole(NULL);
		games[pos] -> setConsole(setNewConsole());
	}

	return games;
}

vector<Console*> UserAdmin::modifyConsole(vector<Console*> consoles, int pos) {
	int year, opcion = 1; // TODO: CAMBIAR OPCION.
	string model;
	string condition;
	int serialNumber;
	double price;

	cout << "Qué campo desea modificar?: "<<endl;
	cout << "1. Año \n2. Modelo \n3. Estado \n4 Número de serie \n5. Precio \nOpción: ";
	cin >> opcion;

	if (opcion == 1) {
		cout << "Ingrese el nuevo año: ";
		cin >> year;
		consoles[pos] -> setYear(year);
	} else if (opcion == 2) {
		cout << "Ingrese el nuevo modelo: "<<endl;
		model = elegirModelo();
		consoles[pos] -> setModel(model);
	} else if (opcion == 3) {
		cout << "Estado del juego: ";
		cin >> condition;
		consoles[pos] -> setCondition(condition);
	} else if (opcion == 4) {
		cout << "Ingrese el número de serie (mayor de 40): "<<endl;
		//Agregar metodo para que no se repite pero que hueva
		/*********************/
		cin >> serialNumber;
		consoles[pos] -> setSerialNumber(serialNumber);
	} else if (opcion == 5) {
		cout << "Ingrese el precio: ";
		cin >> price;
		consoles[pos] -> setPrice(price);
	}

	return consoles;
}

string UserAdmin::elegirModelo() {
	int opcion;
	cout << "De qué marca de consola desea agregar?: \n1. Microsoft \n2. Sony \n3. La gran Nintendo \nCualquier otro número será Microsoft \nOpción: ";
	cin >> opcion;

	if (opcion == 1) {
		cout << "Qué modelo desea ingresar?: "<<endl;
		cout << "1.XBOX\n2.XBOX 360\n3.XBOX One\n... Si elige otro número, se agregará XBOX por defecto \nOpción: ";
		cin >> opcion;
		
		if (opcion == 1) {
			return "XBOX";
		} else if (opcion == 2) {
			return "XBOX 360";		
		} else if (opcion == 3) {
			return "XBOX One";			
		} else {
			return "XBOX";			
		}
	} else if (opcion == 2) {
		cout << "Qué modelo desea ingresar?: "<<endl;
		cout << "1.Play Station 1\n2.Play Station 2\n3.Play Station 3\n4.Play Station 4\n5.PSP\n6.PS Vita"<<endl;
		cout << "... Si elige otra opcion se agregara una Play Station por defecto \nOpción: ";
		cin >> opcion;

		if (opcion == 1) {
			return "Play Station";
		} else if (opcion == 2) {
			return "Play Station 2";
		} else if (opcion == 3) {
			return "Play station 3";
		} else if (opcion == 4) {
			return "Play Station 4";
		} else if (opcion == 5) {
			return "PSP";
		} else if (opcion == 6) {
			return "PS Vita";
		} else {
			return "Play Station";
		}
	} else if (opcion == 3) {
		cout << "Qué modelo desea ingresar?: "<<endl;
		cout << " 1.Nintendo Entertainment System \n2.Super Nintendo Entertainment System \n3.Nintendo 64 \n4.Nintendo Gamecube"<<endl; 
		cout << "\n5.Nintendo Wii \n6.Nintendo Wii U \n7.Nintendo Switch \n8.Gameboy \n9.Gameboy Colors \n10.Gameboy Advance \n11.Nintendo DS \n12.Nintendo DSi \n13.Nintendo 3DS \n14.Nintendo New 3DS"<<endl;
		cout << "... Si elige otra opción no prevista, se creará una NES por defecto \nOpción:";
		cin >> opcion;

		if (opcion == 1) {
			return "NES";
		} else if (opcion == 2) {
			return "SNES";
		} else if (opcion == 3) {
			return "N64";
		} else if (opcion == 4) {
			return "Gamecube";
		} else if (opcion == 5) {
			return "WII";
		} else if (opcion == 6) {
			return "WII U";
		} else if (opcion == 7) {
			return "SWITCH";
		} else if (opcion == 8) {
			return "Gameboy";
		} else if (opcion == 9) {
			return "Gameboy Colors";
		} else if (opcion == 10) {
			return "Gameboy advance";
		} else if (opcion == 11) {
			return "DS";
		} else if (opcion == 12) {
			return "DSI";
		} else if (opcion == 13) {
			return "3DS";
		} else if (opcion == 14) {
			return "New 3DS";
		} else {
			return "NES";
		}
	} else {
		cout << "Qué modelo desea ingresar?: "<<endl;
		cout << "1.XBOX\n2.XBOX 360\n3.XBOX One\n... Si elige otro número,, sá agregará XBOX por defecto \nOpción: ";
		cin >> opcion;

		if (opcion == 1) {
			return "XBOX";
		} else if (opcion == 2) {
			return "XBOX 360";
		} else if (opcion == 3) {
			return "XBOX One";
		} else {
			return "XBOX";
		}
	}
}