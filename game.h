#pragma once

#include <string>

using namespace std;

class Game
{
protected:
	string name;
	int year;
	//Console* consola;
	int numberPlayers;
	string genre;
	string status;
	int serialNumber;
	double price;
public:
	//Constructor
	Game(string , int , /*Console**/  int , string , string ,int , double);
	Game();
	~Game();
	
	//Setters

	void setName(string);
	void setYear(int);
	//void setConsole(Console*);
	void setNumberPlayers(int);
	void setGenre(string);
	void setStatus(string);
	void setSerialNumber(int);
	void setPrice(double);
	
	//Getters
	string getName();
	int getYear();
	 //Console* getConsole(Console*);
	int getNumberPlayers();
	string getGenre();
	string getStatus();
	int getSerialNumber();
	double getPrice();


	
};