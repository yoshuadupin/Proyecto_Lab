	// Sistema.cpp

#include "Includes.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <typeinfo>
#include <vector>
#include <sstream>
#include <ctime>

// Escribe en archivo binario.
void writeFile(vector<Console*>, vector<Game*>);
// Lee archivo binario.
void readFile();
// Crea consolas predeterminadas.
vector<Console*> initializeConsoles();
// Crea videojuegos predeterminados.
vector<Game*> initializeVideoGames();
// Crea el ticket.
void doTicket(Sale*);
// Obtiene la fecha.
string getDate();
// Obtiene la hora.
string getHour();
// Crea el userLog.
void doUserLog(UserSeller*);

using namespace std;

int main(int argc, char const *argv[]) {
	FILE* file = fopen("Test.dat", "rb");
	vector<Console*> consoles;
	vector<Game*> videoGames;

	/*if (file == NULL) {
		//videoGames = initializeVideoGames();
		writeFile(consoles, videoGames);
	} else {
		readFile();
	}*/


	consoles = initializeConsoles();
	Sale* sale = new Sale("Ilich", "10:30 pm", "ilich-garcia", 200);
	UserSeller* userSeller = new UserSeller("Diego", "10:00 am", "5:00 pm");

	sale -> setConsoles(consoles);

	doTicket(sale);
	doUserLog(userSeller);

	return 0;
}

void writeFile(vector<Console*> consoles, vector<Game*> videoGames) {
	Management* management = new Management(consoles, videoGames);

	FILE* file = fopen("Test.dat", "wb");

	fwrite(management, sizeof(Management), sizeof(management), file); // Escribo el tipo Register en el archivo.
	fclose(file);
}

void readFile() {
	FILE* file;
	long lSize;
	Management* management;
	size_t result;

	file = fopen("Test.dat", "rb");
	
	if (file == NULL) {
		fputs("File error", stderr);
		exit (1);
	}

	// Obtiene el size del archivo:

	fseek(file, 0, SEEK_END);
	lSize = ftell(file);
	rewind(file);

	// Guarda memoria para guardar todo el archivo:

	management = (Management*) malloc(sizeof(Management)*lSize);

	if (management == NULL) {
		fputs("Memory error", stderr);
		exit(2);
	}

	// Copia el archivo en el búfer:
	
	result = fread (management,1,lSize,file);

	if (result != lSize) {
		fputs("Reading error", stderr);
		exit(3);
	}

	// Ahora, todo el archivo está cargado en la memoria del búfer.

	//vector<Console*> consoles = management -> getConsoles();
	//vector<Game*> videoGames = management -> getVideoGames();

/*	for (int i = 0; i < consoles.size(); ++i) {
		cout << management -> getConsole(i) -> getSerialNumber() << endl;
	}*/

	/*for (int i = 0; i < videoGames.size(); ++i) {
		cout << management -> getVideoGame(i) -> getPrice() << endl;
	}*/

	// Cierro el archivo.

	fclose (file);
	free (management);
}

vector<Console*> initializeConsoles() {
	vector<Console*> consoles;

	for (int i = 0; i < 10; ++i) { // Nintendo 64.
		Console* console = new Console(2004, "Nintendo 64", "Good", i + 1, 1100);
		consoles.push_back(console);
	}

	for (int i = 10; i < 20; ++i) { // Play Station.
		Console* console = new Console(2005, "Play Station", "Good", i + 1, 1400);
		consoles.push_back(console);
	}

	for (int i = 20; i < 30; ++i) { // Wii.
		Console* console = new Console(2007, "Wii", "Good", i + 1, 1350);
		consoles.push_back(console);
	}

	for (int i = 30; i < 40; ++i) { // Nintendo Gamecube.
		Console* console = new Console(2005, "Nintendo Gamecube", "Good", i + 1, 1200);
		consoles.push_back(console);
	}
	
	return consoles;
}

vector<Game*> initializeVideoGames(Sale* sale) {
	vector<Game*> videoGames;

	for (int i = 0; i < 30; ++i) { // Mario Bros.
		Console* console = new Console(2004, "Nintendo 64", "Good", i + 1, 1100);
		videoGames.push_back(new Game("Mario Bros " + (i + 1), 2005, console, 4, "Entertainment", "Good", i + 1, 250));
	}

	for (int i = 30; i < 60; ++i) { // Donkey Kong.
		Console* console = new Console(2005, "Play Station", "Good", i + 1, 1400);
		videoGames.push_back(new Game("Donkey Kong " + (i + 1), 2005, console, 3, "Entertainment", "Good", i + 1, 290));
	}

	for (int i = 60; i < 90; ++i) { // Need For Speed.
		Console* console = new Console(2007, "Wii", "Good", i + 1, 1350);
		videoGames.push_back(new Game("Need For Speed " + (i + 1), 2007, console, 4, "Races", "Good", i + 1, 350));
	}

	for (int i = 90; i < 120; ++i) { // Final Fantasy.
		Console* console = new Console(2005, "Nintendo Gamecube", "Good", i + 1, 1200);
		videoGames.push_back(new Game("Final Fantasy " + (i + 1), 2003, console, 1, "Adventure", "Good", i + 1, 230));
	}

	return videoGames;
}

void doTicket(Sale* sale) {
	ofstream file;
	stringstream stringStream;
	string myString;
	double subtotal = 0, isv, total = 0;

	stringStream << "./log_ventas/" << getDate() << getHour() << ".log";
	myString = stringStream.str();

	file.open(myString.c_str());

	file << "			GAMEHUB          " << endl << endl;
	file << "FECHA: " << getDate() << endl;
	file << "HORA: " << getHour() << endl;
	file << "VENDEDOR: " << endl;
	file << "CLIENTE: " << endl << endl;
	file << "CANTIDAD DE ARTÍCULOS: " << endl << endl;

	// TODO: Nombre de artículos.
	vector<Console*> consoles = sale -> getConsoles();

	for (int i = 0; i < consoles.size(); ++i) { // Consolas compradas.
		subtotal += consoles.at(i) -> getPrice();
		file << consoles.at(i) -> getModel() << "	" << consoles.at(i) -> getPrice() << endl;
	}
	/*
	for (int i = 0; i < consoles.size(); ++i) { // Videojuegos comprados.
		subtotal += videoGames.at(i) -> getPrice();
		file << videoGames.at(i) -> getModel() << "	  "<< videoGames.at(i) -> getPrice();
	}*/

	file << "SUBTOTAL: " << subtotal << endl;

	isv = subtotal * 0.15;
	total = subtotal + isv;

	file << "IMPUESTO (15%): " << isv << endl;
	file << "TOTAL: " << total << endl;

	file.close();
}

string getDate() {
	stringstream stringStream;
	string date;

	time_t now = time(0);
	tm* time  = localtime(&now); // Obteniendo el tiempo.
	int year = 1900 + time -> tm_year;
	int month = time -> tm_mon;
	int day = time -> tm_mday;

	stringStream << day << "-" << month + 1 << "-" << year;
	date = stringStream.str();

	return date;
}

string getHour() {
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

void doUserLog(UserSeller* userSeller) {
	ofstream file;
	stringstream stringStream;
	string myString;

	stringStream << "./usuarios_log/" << userSeller -> getName() << getDate() << ".log";
	myString = stringStream.str();

	file.open(myString.c_str());

	file << "			GAMEHUB          " << endl << endl;
	file << "NOMBRE: " << userSeller -> getName() << endl;
	file << "HORA DE ENTRADA: " << userSeller -> getCheckIn() << endl;
	file << "HORA DE SALIDA: " << userSeller -> getCheckOut() << endl << endl;
	file << "CANTIDAD DE ARTÍCULOS VENDIDOS: " << 0 << endl;
	file << "CANTIDAD DE DINERO GENERADO: " << 0 << endl;
	// TODO: Crear archivo con información de ventas del usuario.
}