// Sistema.cpp

#include "Includes.h"
#include "Console.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// Escribe en archivo binario.
void writeFile();
// Lee archivo binario.
void readFile();

using namespace std;

int main(int argc, char const *argv[]) {
	writeFile();
	readFile();
	
	return 0;
}

void writeFile() {
	Console* buffer = new Console(2017, "console", "Good", 341, 129);

	FILE* file = fopen("Test.dat", "wb");
	fwrite(buffer, sizeof(Console), sizeof(buffer), file); // Escribo el tipo Register en el archivo.
	fclose(file);	
}

void readFile() {	
	FILE* file;
	long lSize;
	Console* buffer;
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

	buffer = (Console*) malloc(sizeof(Console)*lSize);

	if (buffer == NULL) {
		fputs("Memory error", stderr);
		exit(2);
	}

	// Copia el archivo en el búfer:
	
	result = fread (buffer,1,lSize,file);
	if (result != lSize) {
		fputs("Reading error", stderr);
		exit(3);
	}

	/* Ahora, todo el archivo está cargado en la memoria del búfer. */

	cout << buffer -> getYear() << endl;
	cout << buffer -> getModel() << endl;
	cout << buffer -> getCondition() << endl;
	cout << buffer -> getSerialNumber() << endl;
	cout << buffer -> getPrice() << endl;

	// Cierro el archivo.

	fclose (file);
	free (buffer);
}