#pragma once

#include <string>

class Game
{
privirtual vate:
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
	
	//Getters

	virtual void setName(string);
	virtual void setYear(int);
	//virtual void setConsole(Console*);
	virtual void setNumberPlayers(int);
	virtual void setGenre(string);
	virtual void setStatus(string);
	virtual void setSerialNumber(int);
	virtual void setPrice(double);
	
	virtual //Setters
	virtual string getName();
	virtual int getYear();
	 //virtual Console* getConsole(Console*);
	virtual int getNumbvirtual erPlayers();
	virtual string getGenre();
	virtual string getStatus();
	virtual int getSerialNumber();
	virtual double getPrice();


	
};