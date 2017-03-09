// Sistema.cpp

#include "Includes.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <typeinfo>
#include <vector>

// Escribe en archivo binario.
void writeFile(vector<Console*>, vector<Game*>);
// Lee archivo binario.
void readFile();
// Crea consolas predeterminadas.
vector<Console*> initializeConsoles();
// Crea videojuegos predeterminados.
vector<Game*> initializeVideoGames();

using namespace std;

int main(int argc, char const *argv[]) {
	FILE* file = fopen("Test.dat", "rb");
	
	if (file == NULL) {
		vector<Console*> consoles = initializeConsoles();
		vector<Game*> videoGames = initializeVideoGames();
		writeFile(consoles, videoGames);
	}
		// readFile();
	
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

	vector<Console*> consoles = management -> getConsoles();
	vector<Game*> videoGames = management -> getVideoGames();

	/*for (int i = 0; i < consoles.size(); ++i) {
		cout << management -> getConsole(i) -> getSerialNumber() << endl;
	}

	for (int i = 0; i < videoGames.size(); ++i) {
		cout << management -> getVideoGame(i) -> getPrice() << endl;
	}*/

	// Cierro el archivo.

	fclose (file);
	free (management);
}

vector<Console*> initializeConsoles() {
	vector<Console*> consoles;

	for (int i = 0; i < 40; ++i)	{
		Console* console = new Console(2017, "Console" + i, "Good", 340, 130);
		consoles.push_back(console);
	}

	return consoles;
}

vector<Game*> initializeVideoGames() {
	vector<Game*> videoGames;

	for (int i = 0; i < 120; ++i)	{
		Console* console = new Console(2017, "Console" + i, "Good", 340, 130);
		videoGames.push_back(new Game("Juego " + i, 2010, console, 2, "Entertaiment", "Good", 100, 250));
	}

	return videoGames;
}