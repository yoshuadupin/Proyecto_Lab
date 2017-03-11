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

Sale* UserSeller::makeSale(vector<Game*> games , vector<Console*> consoles){
	//Hacer un constructor 
	char comprarMas = 's';
	int opcion;
	//Variable de Ventas
	Sale* sale = new Sale();
	string cliente;
	string modelo;

	cout<<"Ingrese el nombre del cliente"<<endl; 
	cin.ignore();	
	getline(cin , cliente);
	//Falta validar que no se acaban las consolas y los juegos 
	while(games.size() != 0 && consoles.size() != 0  && (comprarMas == 's' || comprarMas == 'S')){
		cout<<"Que desea comprar 1.Consolas o 2.Juegos:"<<endl;
		cin>>opcion;
		//Opcion para consola
		if(opcion == 1){
			cout<<"Desea comprar de 1.Microsoft , 2.Sony y 3.Nintendo"<<endl;
			cin>>opcion;
			
			if(opcion == 1){
				//Para microsoft
				cout<<"Que modelo de consola de microsoft desea comprar:"<<endl;
				cout<<"1.xbox\n2.xbox 360\n3.xboxOne"<<endl;
				cin>>opcion;
				//Elegir el modelo
				if(opcion == 1){
					modelo = "xbox";
				}else if(opcion ==2){
					modelo = "xbox 360";
				}else if(opcion == 3){
					modelo = "xbox One";
				}else {
					cout<<"Opcion por defecto lastima te lo comes esta consola por listo"<<endl;
					modelo = "xbox";
				}
				//Mostrando consolas del tipo que pidio;
				cout<<"Inventario de las consolas:"<<endl;
				for (int i = 0; i < consoles.size(); ++i){
					if(typeid(*consoles[i]) == typeid(Console) && consoles[i]->getModel() == modelo){
						cout<<"Indice:"<<i<<endl;
						cout<<"Modelo:"<<consoles[i]->getModel()<<endl;
						cout<<"Estado:"<<consoles[i]->getCondition()<<endl;
						cout<<"Precio:"<<consoles[i]->getPrice()<<endl;
						cout<<"Numero de serie:"<<consoles[i]->getSerialNumber()<<endl;
						cout<<endl;
					}
				}

				cout<<"Ingrese el indice del juego que desea:"<<endl;	
				cin>>opcion;
				if(opcion<consoles.size() && opcion>=0){
					cout<<"Indice:"<<opcion<<endl;
					cout<<"Modelo:"<<consoles[opcion]->getModel()<<endl;
					cout<<"Estado:"<<consoles[opcion]->getCondition()<<endl;
					cout<<"Precio:"<<consoles[opcion]->getPrice()<<endl;
					cout<<"Numero de serie:"<<consoles[opcion]->getSerialNumber()<<endl;
					cout<<endl;
					sale->setConsole(consoles[opcion]);
					//liberando memoria
					delete consoles[opcion];
					//Borrando Elemento del arreglo 
					////consoles.erase(opcion);
				}else{
					cout<<"Ingreso un indice fuera de rango la venta no se realizo"<<endl;
				}

			}else if(opcion == 2){
				//Sony
				cout<<"Que modelo de consola de sony desea comprar:"<<endl;
				cout<<"1.Play Station 1\n2.Play Station 2\n3.Play Station 3\n4.Play Station 4\n5.PSP\n6.PS Vita"<<endl;
				cin>>opcion;
				//Elegir el modelo
				if(opcion == 1){
					modelo = "Play Station";

				}else if(opcion == 2){
					modelo = "Play Station 2";

				}else if(opcion == 3){
					modelo = "Play station 3";

				}else if(opcion == 4){
					modelo = "Play Station 4";

				}else if(opcion == 5){
					modelo = "PSP";

				}else if(opcion == 6){
					modelo = "PS Vita";

				}else {
					cout<<"Opcion por defecto lastima te lo comes esta consola por listo"<<endl;
					modelo = "Play Station";

				}
				//Mostrando consolas del tipo que pidio;
				cout<<"Inventario de las consolas:"<<endl;
				for (int i = 0; i < consoles.size(); ++i){
					if(typeid(*consoles[i]) == typeid(Sony) && consoles[i]->getModel() == modelo){
						cout<<"Indice:"<<i<<endl;
						cout<<"Modelo:"<<consoles[i]->getModel()<<endl;
						cout<<"Estado:"<<consoles[i]->getCondition()<<endl;
						cout<<"Precio:"<<consoles[i]->getPrice()<<endl;
						cout<<"Numero de serie:"<<consoles[i]->getSerialNumber()<<endl;
						cout<<endl;
					}
				}

				cout<<"Ingrese el indice del juego que desea:"<<endl;	
				cin>>opcion;
				if(opcion<consoles.size() && opcion>=0){
					cout<<"Indice:"<<opcion<<endl;
					cout<<"Modelo:"<<consoles[opcion]->getModel()<<endl;
					cout<<"Estado:"<<consoles[opcion]->getCondition()<<endl;
					cout<<"Precio:"<<consoles[opcion]->getPrice()<<endl;
					cout<<"Numero de serie:"<<consoles[opcion]->getSerialNumber()<<endl;
					cout<<endl;
					sale->setConsole(consoles[opcion]);
					//liberando memoria
					delete consoles[opcion];
					//Borrando Elemento del arreglo 
					//consoles.erase(opcion);
				}else{
					cout<<"Ingreso un indice fuera de rango la venta no se realizo"<<endl;
				}
			}else if(opcion == 3){
				//Nintendo
				
				cout<<"Que modelo de consola de sony desea comprar:"<<endl;
				cout<<" 1.Nintendo Entertainment System \n2.Super Nintendo Entertainment System \n3.Nintendo 64 \n4.Nintendo Gamecube"<<endl; 
				cout<<"\n5.Nintendo Wii \n6.Nintendo Wii U \n7.Nintendo Switch \n8.Gameboy \n9.Gameboy Colors \n10.Gameboy Advance \n11.Nintendo DS \n12.Nintendo DSi \n13.Nintendo 3DS \n14.Nintendo New 3DS"<<endl;

				cin>>opcion;
				//Elegir el modelo
				if(opcion == 1){
					modelo = "NES";
				}else if(opcion == 2){
					modelo = "SNES";
				}else if(opcion == 3){
					modelo = "N64";
				}else if(opcion == 4){
					modelo = "Gamecube";
				}else if(opcion == 5){
					modelo = "WII";
				}else if(opcion == 6){
					modelo = "WII U";
				}else if(opcion == 7){
					modelo = "SWITCH";
				}else if(opcion == 8){
					modelo = "Gameboy";
				}else if(opcion == 9){
					modelo = "Gameboy Colors";
				}else if(opcion == 10){
					modelo = "Gameboy advance";
				}else if(opcion == 11){
					modelo = "DS";
				}else if(opcion == 12){
					modelo = "DSI";
				}else if(opcion == 13){
					modelo = "3DS";
				}else if(opcion == 14){
					modelo = "New 3DS";
				}else{
					modelo = "NES";
				}
				//Mostrando consolas del tipo que pidio;
				cout<<"Inventario de las consolas de Nintendo y el modelo elegido:"<<endl;
				for (int i = 0; i < consoles.size(); ++i){
					if(typeid(*consoles[i]) == typeid(Sony) && consoles[i]->getModel() == modelo){
						cout<<"Indice:"<<i<<endl;
						cout<<"Modelo:"<<consoles[i]->getModel()<<endl;
						cout<<"Estado:"<<consoles[i]->getCondition()<<endl;
						cout<<"Precio:"<<consoles[i]->getPrice()<<endl;
						cout<<"Numero de serie:"<<consoles[i]->getSerialNumber()<<endl;
						cout<<endl;
					}
				}

				cout<<"Ingrese el indice de la consola que desea:"<<endl;	
				cin>>opcion;
				if(opcion<consoles.size() && opcion>=0){
					cout<<"Indice:"<<opcion<<endl;
					cout<<"Modelo:"<<consoles[opcion]->getModel()<<endl;
					cout<<"Estado:"<<consoles[opcion]->getCondition()<<endl;
					cout<<"Precio:"<<consoles[opcion]->getPrice()<<endl;
					cout<<"Numero de serie:"<<consoles[opcion]->getSerialNumber()<<endl;
					cout<<endl;
					sale->setConsole(consoles[opcion]);
					//liberando memoria
					delete consoles[opcion];
					//Borrando Elemento del arreglo 
					//consoles.erase(opcion);
				}else{
					cout<<"Ingreso un indice fuera de rango la venta no se realizo"<<endl;
				}
			}
		}else{
			//Parte para juegos
			cout<<"Elija la desarrolladora de su juego:"<<endl;
			cout<<"1.Microsoft \n 2.Sony \n 3.Nintendo \n 4.Bandai \n 5.Konami"<<endl;
			cout<<"6.Square Enix.\n 7.Electronic \n Arts \n 8.SEGA \n 9.Ubisoft."<<endl;
			cin>>opcion;

			if(opcion == 1){
				for (int i = 0; i < games.size(); ++i){
					if(typeid(*games[i]) == typeid(microsoft)){
						cout<<"Indice:"<<i<<endl;
						cout<<"Nombre:"<<games[i]->getName()<<endl;
						cout<<"Consola:"<<games[i]->getConsole()->getModel()<<endl;
						cout<<"Numero de Jugadores:"<<games[i]->getNumberPlayers()<<endl;
						cout<<"Estado:"<<games[i]->getStatus()<<endl;
						cout<<"Precio:"<<games[i]->getPrice()<<endl;
						cout<<"Numero de serie:"<<games[i]->getSerialNumber()<<endl;
						cout<<endl;
					}
				}			
			}

			else if(opcion == 2){
				for (int i = 0; i < games.size(); ++i){
					if(typeid(*games[i]) == typeid(sony)){
						cout<<"Indice:"<<i<<endl;
						cout<<"Nombre:"<<games[i]->getName()<<endl;
						cout<<"Consola:"<<games[i]->getConsole()->getModel()<<endl;
						cout<<"Numero de Jugadores:"<<games[i]->getNumberPlayers()<<endl;
						cout<<"Estado:"<<games[i]->getStatus()<<endl;
						cout<<"Precio:"<<games[i]->getPrice()<<endl;
						cout<<"Numero de serie:"<<games[i]->getSerialNumber()<<endl;
						cout<<endl;
					}
				}
			}

			else if(opcion == 3){
				for (int i = 0; i < games.size(); ++i){
					if(typeid(*games[i]) == typeid(nintendo)){
						cout<<"Indice:"<<i<<endl;
						cout<<"Nombre:"<<games[i]->getName()<<endl;
						cout<<"Consola:"<<games[i]->getConsole()->getModel()<<endl;
						cout<<"Numero de Jugadores:"<<games[i]->getNumberPlayers()<<endl;
						cout<<"Estado:"<<games[i]->getStatus()<<endl;
						cout<<"Precio:"<<games[i]->getPrice()<<endl;
						cout<<"Numero de serie:"<<games[i]->getSerialNumber()<<endl;
						cout<<endl;
					}
				}
			}

			else if(opcion == 4){
				for (int i = 0; i < games.size(); ++i){
					if(typeid(*games[i]) == typeid(Bandai)){
						cout<<"Indice:"<<i<<endl;
						cout<<"Nombre:"<<games[i]->getName()<<endl;
						cout<<"Consola:"<<games[i]->getConsole()->getModel()<<endl;
						cout<<"Numero de Jugadores:"<<games[i]->getNumberPlayers()<<endl;
						cout<<"Estado:"<<games[i]->getStatus()<<endl;
						cout<<"Precio:"<<games[i]->getPrice()<<endl;
						cout<<"Numero de serie:"<<games[i]->getSerialNumber()<<endl;
						cout<<endl;
					}
				}
			}

			else if(opcion == 5){
				for (int i = 0; i < games.size(); ++i){
					if(typeid(*games[i]) == typeid(Konami)){
						cout<<"Indice:"<<i<<endl;
						cout<<"Nombre:"<<games[i]->getName()<<endl;
						cout<<"Consola:"<<games[i]->getConsole()->getModel()<<endl;
						cout<<"Numero de Jugadores:"<<games[i]->getNumberPlayers()<<endl;
						cout<<"Estado:"<<games[i]->getStatus()<<endl;
						cout<<"Precio:"<<games[i]->getPrice()<<endl;
						cout<<"Numero de serie:"<<games[i]->getSerialNumber()<<endl;
						cout<<endl;
					}
				}
			}

			else if(opcion == 6){
				for (int i = 0; i < games.size(); ++i){
					if(typeid(*games[i]) == typeid(SquareEnix)){
						cout<<"Indice:"<<i<<endl;
						cout<<"Nombre:"<<games[i]->getName()<<endl;
						cout<<"Consola:"<<games[i]->getConsole()->getModel()<<endl;
						cout<<"Numero de Jugadores:"<<games[i]->getNumberPlayers()<<endl;
						cout<<"Estado:"<<games[i]->getStatus()<<endl;
						cout<<"Precio:"<<games[i]->getPrice()<<endl;
						cout<<"Numero de serie:"<<games[i]->getSerialNumber()<<endl;
						cout<<endl;
					}
				}
			}

			else if(opcion == 7){
				for (int i = 0; i < games.size(); ++i){
					if(typeid(*games[i]) == typeid(ElectronicArts)){
						cout<<"Indice:"<<i<<endl;
						cout<<"Nombre:"<<games[i]->getName()<<endl;
						cout<<"Consola:"<<games[i]->getConsole()->getModel()<<endl;
						cout<<"Numero de Jugadores:"<<games[i]->getNumberPlayers()<<endl;
						cout<<"Estado:"<<games[i]->getStatus()<<endl;
						cout<<"Precio:"<<games[i]->getPrice()<<endl;
						cout<<"Numero de serie:"<<games[i]->getSerialNumber()<<endl;
						cout<<endl;
					}
				}
			}else if(opcion == 8){
				for (int i = 0; i < games.size(); ++i){
					if(typeid(*games[i]) == typeid(Sega)){
						cout<<"Indice:"<<i<<endl;
						cout<<"Nombre:"<<games[i]->getName()<<endl;
						cout<<"Consola:"<<games[i]->getConsole()->getModel()<<endl;
						cout<<"Numero de Jugadores:"<<games[i]->getNumberPlayers()<<endl;
						cout<<"Estado:"<<games[i]->getStatus()<<endl;
						cout<<"Precio:"<<games[i]->getPrice()<<endl;
						cout<<"Numero de serie:"<<games[i]->getSerialNumber()<<endl;
						cout<<endl;
					}
				}

			}else if(opcion == 9){
				for (int i = 0; i < games.size(); ++i){
					if(typeid(*games[i]) == typeid(Ubisoft)){
						cout<<"Indice:"<<i<<endl;
						cout<<"Nombre:"<<games[i]->getName()<<endl;
						cout<<"Consola:"<<games[i]->getConsole()->getModel()<<endl;
						cout<<"Numero de Jugadores:"<<games[i]->getNumberPlayers()<<endl;
						cout<<"Estado:"<<games[i]->getStatus()<<endl;
						cout<<"Precio:"<<games[i]->getPrice()<<endl;
						cout<<"Numero de serie:"<<games[i]->getSerialNumber()<<endl;
						cout<<endl;
					}
				}

			}else{
				cout<<"Opcion por defecto se agrega una juego Nintendo"<<endl;
				for (int i = 0; i < games.size(); ++i){
					if(typeid(*games[i]) == typeid(microsoft)){
						cout<<"Indice:"<<i<<endl;
						cout<<"Nombre:"<<games[i]->getName()<<endl;
						cout<<"Consola:"<<games[i]->getConsole()->getModel()<<endl;
						cout<<"Numero de Jugadores:"<<games[i]->getNumberPlayers()<<endl;
						cout<<"Estado:"<<games[i]->getStatus()<<endl;
						cout<<"Precio:"<<games[i]->getPrice()<<endl;
						cout<<"Numero de serie:"<<games[i]->getSerialNumber()<<endl;
						cout<<endl;
					}
				}			
			}//Validaciones

			cout<<"Ingrese el indice del juegos que desea:"<<endl;	
			cin>>opcion;
			if(opcion<games.size() && opcion>=0){
				cout<<"Indice:"<<opcion<<endl;
				cout<<"Consola:"<<games[opcion]->getConsole()->getModel()<<endl;
				cout<<"Estado:"<<games[opcion]->getStatus()<<endl;
				cout<<"Precio:"<<games[opcion]->getPrice()<<endl;
				cout<<"Numero de serie:"<<games[opcion]->getSerialNumber()<<endl;
				cout<<endl;
				sale->setGame(games[opcion]);
					//liberando memoria
				delete games[opcion];
					//Borrando Elemento del arreglo 
					//games.erase(opcion);
			}else{
				cout<<"Ingreso un indice fuera de rango la venta no se realizo"<<endl;
			}
		}//Fin else de venta juegos
		cout<<"Desea Seguir coprando consolas:[s/n]"<<endl;
		cin>>comprarMas;
	}//Fin WHILE

	sale->setClientName(cliente);
	sale->setUserName(this->getName());
	sale->setFinalHour(this->getHour());

	return sale;
}//Fin metodo

// Destructor.

UserSeller::~UserSeller() {

}

string UserSeller::getHour() {
	stringstream stringStream;
	string actualHour;
	vector<int> hours;

	hours.push_back(12);
	hours.push_back(1);
	hours.push_back(2);
	hours.push_back(3);
	hours.push_back(4);
	hours.push_back(5);
	hours.push_back(6);
	hours.push_back(7);
	hours.push_back(8);
	hours.push_back(9);
	hours.push_back(10);
	hours.push_back(11);
	hours.push_back(12);
	hours.push_back(1);
	hours.push_back(2);
	hours.push_back(3);
	hours.push_back(4);
	hours.push_back(5);
	hours.push_back(6);
	hours.push_back(7);
	hours.push_back(8);
	hours.push_back(9);
	hours.push_back(10);
	hours.push_back(11);

	time_t now = time(0);
	tm* time  = localtime(&now); // Obteniendo el tiempo.
	int hour = time -> tm_hour;
	int minute = time -> tm_min;
	int second = time -> tm_sec;

	stringStream << hours[hour] << ":" << minute << ":" << second;
	actualHour = stringStream.str();

	return actualHour;
}