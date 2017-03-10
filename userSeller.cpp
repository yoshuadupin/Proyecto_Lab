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
	//Hacer un constructor 
	Sale* sale = new Sale();
	string cliente;
	int opcion;
	string modelo;

	cout<<"Ingrese el nombre del cliente"<<endl; 
	cin.ignore();	
	getline(cin , cliente);	
	cout<<"Que desea comprar 1.Consolas o 2.Juegos:"<<endl;
	cin>>opcion;
	//Opcion para consola
	if(opcion == 1){
		cout<<"Desea comprar de 1.Microsoft , 2.Sony y 3.Nintendo"<<endl;
		cin>>opcion;
		
		if(opcion == 1){

			cout<<"Que modelo de consola de microsoft desea comprar:"<<endl;
			cout<<"1.xbox\n2.xbox 360\n3.xboxOne"<<endl;
			cin>>Opcion;
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
				if(typeid(*consoles[i]) == typeid(Console)){
					cout<<"Indice:"<<i<<endl;
					cout<<"Modelo:"<<consoles[i]->getModel()<<endl;
					cout<<"Ano:"<<consoles[i]->getCondition()<<endl;
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
				cout<<"Ano:"<<consoles[opcion]->getCondition()<<endl;
				cout<<"Precio:"<<consoles[opcion]->getPrice()<<endl;
				cout<<"Numero de serie:"<<consoles[opcion]->getSerialNumber()<<endl;
				cout<<endl;

			}else{
				cout<<"Ingreso un indice fuera de rango la venta no se realizo"<<endl;
			}

		}else if(opcion == 2){

		}else if(opcion == 3){

		}
	}else{

	}

}

// Destructor.

UserSeller::~UserSeller() {

}