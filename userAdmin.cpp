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

void UserAdmin::deleteGame(vector<Game*> games , int pos){
	if(pos>=games.size() || pos<0){
		cout<<"No se encuentra en el vector"<<endl;
	}else{
		cout<<"Elimando Juego del inventario"<<endl;
		delete games[pos];
		//games.erase(pos);
	}
}
void UserAdmin::deleteConsole(vector<Console*> consoles , int pos){
	if(pos>=consoles.size() || pos<0){
		cout<<"No se encuentra en el vector"<<endl;
	}else{
		cout<<"Eliminando consola del inventario"<<endl;
		delete consoles[pos];
		//consoles.erase(pos);
	}
}

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
		games[pos]->setSerialNumber(serialNumber);		
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

void UserAdmin::modifyConsole(vector<Console*> consoles , int pos){
	int year, opcion = 1; // TODO: CAMBIAR OPCION.
	string model;
	string condition;
	int serialNumber;
	double price;

	if(opcion == 1){
		cout<<"Ingrese el nuevo ano:"<<endl;
		cin>>year;
		consoles[pos]->setYear(year);

	}else if(opcion == 2){
		cout<<"Ingrese el nuevo model:"<<endl;
		model = elegirModelo();
		consoles[pos]->setModel(model);

	}else if(opcion == 3){
		cout<<"Estado del juego:"<<endl;
		cin>>condition;
		consoles[pos]->setCondition(condition);

	}else if(opcion == 4){
		cout<<"Ingrese el numero de serie que sea mayor de 1000"<<endl;
		//Agregar metodo para que no se repite pero que hueva
		/*********************/
		cin>>serialNumber;
		consoles[pos]->setSerialNumber(serialNumber);

	}else if(opcion == 5){
		cout<<"Ingrese el precio:"<<endl;
		cin>>price;
		consoles[pos]->setPrice(price);
	}
}

string UserAdmin::elegirModelo(){
	int opcion;
	cout<<"De que marca de consola desea agregar:[\n1.Microsoft \n2.Sony \n3.La gran N] \nCualquier Otro Numero sera Microsoft."<<endl;
	cin>>opcion;

	if(opcion == 1){
		cout<<"Que modelo desea ingresar "<<endl;
		cout<<"1.xbox\n2.xbox 360\n3.xboxOne\n...[Si elige otro numero se agregara xbox por defecto]"<<endl;
		cin>>opcion;
		
		if(opcion == 1){
			return "xbox";

		}else if(opcion == 2){
			return "xbox 360";
			
		}else if(opcion == 3){
			return "xbox One";
			
		}else{
			return "xbox";
			
		}
	}else if(opcion == 2){
		cout<<"Qué modelo desea ingresar?"<<endl;
		cout<<"1.Play Station 1\n2.Play Station 2\n3.Play Station 3\n4.Play Station 4\n5.PSP\n6.PS Vita"<<endl;
		cout<<"...[Si elige otra opcion se agregara una Play Station por defecto]"<<endl;
		cin>>opcion;
		if(opcion == 1){
			return "Play Station";
			
		}else if(opcion == 2){
			return "Play Station 2";
			
		}else if(opcion == 3){
			return "Play station 3";
			
		}else if(opcion == 4){
			return "Play Station 4";
			
		}else if(opcion == 5){
			return "PSP";
			
		}else if(opcion == 6){
			return "PS Vita";
			
		}else {
			return "Play Station";
			
		}

	}else if (opcion == 3){

		cout<<"Que modelo desea ingresar:"<<endl;
		cout<<" 1.Nintendo Entertainment System \n2.Super Nintendo Entertainment System \n3.Nintendo 64 \n4.Nintendo Gamecube"<<endl; 
		cout<<"\n5.Nintendo Wii \n6.Nintendo Wii U \n7.Nintendo Switch \n8.Gameboy \n9.Gameboy Colors \n10.Gameboy Advance \n11.Nintendo DS \n12.Nintendo DSi \n13.Nintendo 3DS \n14.Nintendo New 3DS"<<endl;
		cout<<"...Si elige otra opcion no prevista se creara una NES por defecto "<<endl;	
		cin>>opcion;

		if(opcion == 1){
			return "NES";
		}else if(opcion == 2){
			return "SNES";
		}else if(opcion == 3){
			return "N64";
		}else if(opcion == 4){
			return "Gamecube";
		}else if(opcion == 5){
			return "WII";
		}else if(opcion == 6){
			return "WII U";
		}else if(opcion == 7){
			return "SWITCH";
		}else if(opcion == 8){
			return "Gameboy";
		}else if(opcion == 9){
			return "Gameboy Colors";
		}else if(opcion == 10){
			return "Gameboy advance";
		}else if(opcion == 11){
			return "DS";
		}else if(opcion == 12){
			return "DSI";
		}else if(opcion == 13){
			return "3DS";
		}else if(opcion == 14){
			return "New 3DS";
		}else{
			return "NES";
		}

	}else{
		cout<<"Que modelo desea ingresar "<<endl;
		cout<<"1.xbox\n2.xbox 360\n3.xboxOne\n...[Si elige otro numero se agregara xbox por defecto]"<<endl;
		cin>>opcion;
		if(opcion == 1){
			return "xbox";			
		}else if(opcion == 2){
			return "xbox 360";
		}else if(opcion == 3){
			return "xbox One";
		}else{
			return "xbox";
		}
	}
}