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



// addGame().

vector<Game*> User::addGame(vector<Game*> games){
	string name;
	int year;
	Console* console = NULL;
	int numberPlayers;
	string genre;
	string status;
	int serialNumber;
	double price;
	
	//Asignar un numero de seria desde 1000 para juegos
	cout<<"Ingrese el numero de serie"<<endl;
	cin>>serialNumber;
	serialNumber = asignarNumeroSerial(games , serialNumber);
	

	cout<<"Ingrese el nombre del juego:"<<endl;
	cin>>name;
	
	cout<<"Ingrese el ano:"<<endl;
	cin>>year;
	
	cout<<"Ingrese el numero de jugadores:"<<endl;
	cin>>numberPlayers;
	
	cout<<"Ingrese el genero:"<<endl;
	cin>>genre;
	
	cout<<"Ingrese el estado del juego:"<<endl;
	cin>>status;
	
	//status = 1000+games.size();
	cout<<"Ingrese el precio:"<<endl;
	cin>>price;
	
	if(price<=0){
		price=200;
	}

	cout<<"Agregara  una consola para el juego:"<<endl;
	console = setNewConsole();
	/*****************/
	//TODO Hacer metodo para consolas.
	/****************/
	cout<<"Elija la desarrolladora de su juego:"<<endl;
	cout<<"1.Microsoft \n 2.Sony \n 3.Nintendo \n 4.Bandai \n 5.Konami"<<endl;
	cout<<"6.Square Enix.\n 7.Electronic \n Arts \n 8.SEGA \n 9.Ubisoft."<<endl;
	
	int opcion; 
	cin>>opcion;
	
	if(opcion == 1){
		games.push_back(new microsoft(name, year, console, numberPlayers, genre, status, serialNumber, price));
	}

	else if(opcion == 2){
		games.push_back(new sony(name, year, console, numberPlayers, genre, status, serialNumber, price));
	}

	else if(opcion == 3){
		games.push_back(new nintendo(name, year, console, numberPlayers, genre, status, serialNumber, price));	
	}

	else if(opcion == 4){
		games.push_back(new Bandai(name, year, console, numberPlayers, genre, status, serialNumber, price));
	}

	else if(opcion == 5){
		games.push_back(new Konami(name, year, console, numberPlayers, genre, status, serialNumber, price));	
	}

	else if(opcion == 6){
		games.push_back(new SquareEnix(name, year, console, numberPlayers, genre, status, serialNumber, price));
	}

	else if(opcion == 7){
		games.push_back(new ElectronicArts(name, year, console, numberPlayers, genre, status, serialNumber, price));

	}

	else if(opcion == 8){
		games.push_back(new Sega(name, year, console, numberPlayers, genre, status, serialNumber, price));	
	}

	else if(opcion == 9){
		games.push_back(new Ubisoft(name, year, console, numberPlayers, genre, status, serialNumber, price));
	}else{
		cout<<"Opcion por defecto se agrega una juego Nintendo"<<endl;
	}
	cout<<"Es es el juego que agrego:"<<endl;
	cout << "Índice: "<< games.size()-1<< endl;
	cout << "Nombre: " << games[games.size()-1] -> getName() << endl;
	cout << "Consola: " << games[games.size()-1] -> getConsole()->getModel() << endl;
	cout << "Número de Jugadores: " << games[games.size()-1] -> getNumberPlayers() << endl;
	cout << "Estado: " << games[games.size()-1] -> getStatus() << endl;
	cout << "Precio: " << games[games.size()-1] -> getPrice() << endl;
	cout << "Número de serie: " << games[games.size()-1] -> getSerialNumber() << endl;
	cout << endl;			
	return games;
}

// addConsole().

vector<Console*> User::addConsole(vector<Console*> consoles){
	int year;
	string model;
	string condition;
	int serialNumber;
	double price;
	//Para la clase
	int opcion;
	int cantidadConsolas;

	cout<<"Ingrese el ano de salida:"<<endl;
	cin>>year;

	cout<<"Ingrese el estado de la consola:"<<endl;
	getline(cin , condition);
	//Hay que cambiarlo
	//Asigna el serial desde 1
	/*cout<<"Ingrese el numero de serie"<<endl;
	cin>>serialNumber;
	serialNumber = asignarNumeroSerial(consoles , serialNumber);
	*/
	cout<<"Ingrese el precio de venta:"<<endl;
	cin>>price;
	if(price <= 0){
		price = 200;
	}
	
	//validacion
	do{
		cout<<"Ingrese la cantidad de consolas del mismo modelo:"<<endl;
		cin>>cantidadConsolas;
	}while(cantidadConsolas<=0);
	
	cout<<"De que marca de consola desea agregar:[\n1.Microsoft \n2.Sony \n3.La gran N] \nCualquier Otro Numero sera Microsoft."<<endl;
	cin>>opcion;



	if(opcion == 1){
		cout<<"Que modelo desea ingresar "<<endl;
		cout<<"1.xbox\n2.xbox 360\n3.xboxOne\n...[Si elige otro numero se agregara xbox por defecto]"<<endl;
		cin>>opcion;
		//Cambiarno
		/*if(opcion == 1){
			model = "xbox";
			consoles.push_back(new Microsoft(year , model , condition , serialNumber , price));			
		}else if(opcion == 2){
			model = "xbox 360";
			consoles.push_back(new Microsoft(year , model , condition , serialNumber , price));
		}else if(opcion == 3){
			model = "xbox One";
			consoles.push_back(new Microsoft(year , model , condition , serialNumber , price));
		}else{
			model = "xbox";
			consoles.push_back(new Microsoft(year , model , condition , serialNumber , price));
		}*/
		if(opcion == 1){
			model = "xbox";			
		}else if(opcion == 2){
			model = "xbox 360";
		}else if(opcion == 3){
			model = "xbox One";
		}else{
			model = "xbox";
		}
		//Agregando
		for (int i = 0; i < cantidadConsolas; ++i){	
			cout<<"Ingrese el numero de serie"<<endl;
			cin>>serialNumber;
			serialNumber = asignarNumeroSerial(consoles , serialNumber);
			//Agregando
			consoles.push_back(new Microsoft(year , model , condition , serialNumber , price));
		}
	//Modelos para Play		
	}else if(opcion == 2){
		cout<<"Que modelo desea ingresar"<<endl;
		cout<<"1.Play Station 1\n2.Play Station 2\n3.Play Station 3\n4.Play Station 4\n5.PSP\n6.PS Vita"<<endl;
		cout<<"...[Si elige otra opcion se agregara una Play Station por defecto]"<<endl;
		cin>>opcion;
		
		if(opcion == 1){
			model = "Play Station";
		}else if(opcion == 2){
			model = "Play Station 2";
		}else if(opcion == 3){
			model = "Play station 3";
		}else if(opcion == 4){
			model = "Play Station 4";
		}else if(opcion == 5){
			model = "PSP";
		}else if(opcion == 6){
			model = "PS Vita";
		}else {
			model = "Play Station";
		}

		//Agregando
		for (int i = 0; i < cantidadConsolas; ++i){
			cout<<"Ingrese el numero de serie"<<endl;
			cin>>serialNumber;
			serialNumber = asignarNumeroSerial(consoles , serialNumber);
			consoles.push_back(new Sony(year , model , condition , serialNumber , price));
		}
		
	//Modelo para Ninetendo	
	}else if (opcion == 3){
		cout<<"Que modelo desea ingresar:"<<endl;
		cout<<" 1.Nintendo Entertainment System \n2.Super Nintendo Entertainment System \n3.Nintendo 64 \n4.Nintendo Gamecube"<<endl; 
		cout<<"\n5.Nintendo Wii \n6.Nintendo Wii U \n7.Nintendo Switch \n8.Gameboy \n9.Gameboy Colors \n10.Gameboy Advance \n11.Nintendo DS \n12.Nintendo DSi \n13.Nintendo 3DS \n14.Nintendo New 3DS"<<endl;
		cout<<"...Si elige otra opcion no prevista se creara una NES por defecto "<<endl;	
		cin>>opcion;

		if(opcion == 1){
			model = "NES";
		}else if(opcion == 2){
			model = "SNES";
		}else if(opcion == 3){
			model = "N64";
		}else if(opcion == 4){
			model = "Gamecube";
		}else if(opcion == 5){
			model = "WII";
		}else if(opcion == 6){
			model = "WII U";
		}else if(opcion == 7){
			model = "SWITCH";
		}else if(opcion == 8){
			model = "Gameboy";
		}else if(opcion == 9){
			model = "Gameboy Colors";
		}else if(opcion == 10){
			model = "Gameboy advance";
		}else if(opcion == 11){
			model = "DS";
		}else if(opcion == 12){
			model = "DSI";
		}else if(opcion == 13){
			model = "3DS";
		}else if(opcion == 14){
			model = "New 3DS";
		}else{
			model = "NES";
		}

		//Agregando
		for (int i = 0; i < cantidadConsolas; ++i){
			cout<<"Ingrese el numero de serie"<<endl;
			cin>>serialNumber;
			serialNumber = asignarNumeroSerial(consoles , serialNumber);
			consoles.push_back(new Nintendo(year , model , condition , serialNumber , price));
		}
		
	//Modelos por defecto para Xbox	
	}else{
		cout<<"Que modelo desea ingresar "<<endl;
		cout<<"1.xbox\n2.xbox 360\n3.xboxOne\n...[Si elige otro numero se agregara xbox por defecto]"<<endl;
		cin>>opcion;
		if(opcion == 1){
			model = "xbox";			
		}else if(opcion == 2){
			model = "xbox 360";
		}else if(opcion == 3){
			model = "xbox One";
		}else{
			model = "xbox";
		}
		//Agregando
		for (int i = 0; i < cantidadConsolas; ++i){
			cout<<"Ingrese el numero de serie"<<endl;
			cin>>serialNumber;
			serialNumber = asignarNumeroSerial(consoles , serialNumber);	
			consoles.push_back(new Microsoft(year , model , condition , serialNumber , price));
		}
		
	}
	return consoles;
}//Que pedo con esta llave

Console* User::setNewConsole(){
	int year;
	string model;
	string condition;
	int serialNumber;
	double price;
	//Para la clase
	int opcion;

	cout<<"Ingrese el ano de salida:"<<endl;
	cin>>year;

	cout<<"Ingrese el estado de la consola:"<<endl;
	cin>>condition;
	//Hay que cambiarlo
	
	cout<<"Ingrese el precio de venta:"<<endl;
	cin>>price;
	if(price <= 0){
		price = 200;
	}
	cout<<"De que marca de consola desea agregar:[\n1.Microsoft \n2.Sony \n3.La gran N] \nCualquier Otro Numero sera Microsoft."<<endl;
	cin>>opcion;

	if(opcion == 1){
		cout<<"Que modelo desea ingresar "<<endl;
		cout<<"1.xbox\n2.xbox 360\n3.xboxOne\n...[Si elige otro numero se agregara xbox por defecto]"<<endl;
		cin>>opcion;
		
		if(opcion == 1){
			model = "xbox";
			return new Microsoft(year , model , condition , serialNumber , price);			
		}else if(opcion == 2){
			model = "xbox 360";
			return new Microsoft(year , model , condition , serialNumber , price);
		}else if(opcion == 3){
			model = "xbox One";
			return new Microsoft(year , model , condition , serialNumber , price);
		}else{
			model = "xbox";
			return new Microsoft(year , model , condition , serialNumber , price);
		}

	}else if(opcion == 2){
		cout<<"Que modelo desea ingresar"<<endl;
		cout<<"1.Play Station 1\n2.Play Station 2\n3.Play Station 3\n4.Play Station 4\n5.PSP\n6.PS Vita"<<endl;
		cout<<"...[Si elige otra opcion se agregara una Play Station por defecto]"<<endl;
		cin>>opcion;
		if(opcion == 1){
			model = "Play Station";
			return new Sony(year , model , condition , serialNumber , price);
		}else if(opcion == 2){
			model = "Play Station 2";
			return new Sony(year , model , condition , serialNumber , price);
		}else if(opcion == 3){
			model = "Play station 3";
			return new Sony(year , model , condition , serialNumber , price);
		}else if(opcion == 4){
			model = "Play Station 4";
			return new Sony(year , model , condition , serialNumber , price);
		}else if(opcion == 5){
			model = "PSP";
			return new Sony(year , model , condition , serialNumber , price);
		}else if(opcion == 6){
			model = "PS Vita";
			return new Sony(year , model , condition , serialNumber , price);
		}else {
			model = "Play Station";
			return new Sony(year , model , condition , serialNumber , price);
		}

	}else if (opcion == 3){

		cout<<"Que modelo desea ingresar:"<<endl;
		cout<<" 1.Nintendo Entertainment System \n2.Super Nintendo Entertainment System \n3.Nintendo 64 \n4.Nintendo Gamecube"<<endl; 
		cout<<"\n5.Nintendo Wii \n6.Nintendo Wii U \n7.Nintendo Switch \n8.Gameboy \n9.Gameboy Colors \n10.Gameboy Advance \n11.Nintendo DS \n12.Nintendo DSi \n13.Nintendo 3DS \n14.Nintendo New 3DS"<<endl;
		cout<<"...Si elige otra opcion no prevista se creara una NES por defecto "<<endl;	
		cin>>opcion;

		if(opcion == 1){
			model = "NES";
			return new Nintendo(year , model , condition , serialNumber , price);
		}else if(opcion == 2){
			model = "SNES";
			return new Nintendo(year , model , condition , serialNumber , price);
		}else if(opcion == 3){
			model = "N64";
			return new Nintendo(year , model , condition , serialNumber , price);
		}else if(opcion == 4){
			model = "Gamecube";
			return new Nintendo(year , model , condition , serialNumber , price);
		}else if(opcion == 5){
			model = "WII";
			return new Nintendo(year , model , condition , serialNumber , price);
		}else if(opcion == 6){
			model = "WII U";
			return new Nintendo(year , model , condition , serialNumber , price);
		}else if(opcion == 7){
			model = "SWITCH";
			return new Nintendo(year , model , condition , serialNumber , price);
		}else if(opcion == 8){
			model = "Gameboy";
			return new Nintendo(year , model , condition , serialNumber , price);
		}else if(opcion == 9){
			model = "Gameboy Colors";
			return new Nintendo(year , model , condition , serialNumber , price);
		}else if(opcion == 10){
			model = "Gameboy advance";
			return new Nintendo(year , model , condition , serialNumber , price);
		}else if(opcion == 11){
			model = "DS";
			return new Nintendo(year , model , condition , serialNumber , price);
		}else if(opcion == 12){
			model = "DSI";
			return new Nintendo(year , model , condition , serialNumber , price);
		}else if(opcion == 13){
			model = "3DS";
			return new Nintendo(year , model , condition , serialNumber , price);
		}else if(opcion == 14){
			model = "New 3DS";
			return new Nintendo(year , model , condition , serialNumber , price);
		}else{
			model = "NES";
			return new Nintendo(year , model , condition , serialNumber , price);
		}
	}else {
		cout<<"Que modelo desea ingresar "<<endl;
		cout<<"1.xbox\n2.xbox 360\n3.xboxOne\n...[Si elige otro numero se agregara xbox por defecto]"<<endl;
		cin>>opcion;
		if(opcion == 1){
			model = "xbox";
			return new Microsoft(year , model , condition , serialNumber , price);			
		}else if(opcion == 2){
			model = "xbox 360";
			return new Microsoft(year , model , condition , serialNumber , price);
		}else if(opcion == 3){
			model = "xbox One";
			return new Microsoft(year , model , condition , serialNumber , price);
		}else{
			model = "xbox";
			return new Microsoft(year , model , condition , serialNumber , price);
		}	
	}
}

int User::asignarNumeroSerial(vector<Game*> games , int serial){
	for (int i = 0; i < games.size(); ++i){
		if(games[i]->getSerialNumber() == serial){
			i = 0;
			serial ++;
		}else{
			return serial;
		}
	}
}

int User::asignarNumeroSerial(vector<Console*> consoles , int serial){
	for (int i = 0; i < consoles.size(); ++i){
		if(consoles[i]->getSerialNumber() == serial){
			i = 0;
			serial ++;
		}else{
			return serial;
		}
	}
}