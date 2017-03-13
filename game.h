// game.h

#pragma once
#include <boost/serialization/vector.hpp>
#include <boost/serialization/base_object.hpp>
#include <boost/serialization/assume_abstract.hpp>

#include "Console.h"
#include <string>

using namespace std;

class Game {
	friend class boost::serialization::access;
protected:
	string name;
	int year;
	Console* console;
	int numberPlayers;
	string genre;
	string status;
	int serialNumber;
	double price;

template<class Archive>
void serialize(Archive & ar, const unsigned int /* file_version */){
	ar & name & year; 

	ar.register_type(static_cast<Microsoft*>(NULL));
	ar.register_type(static_cast<Nintendo*>(NULL));
	ar.register_type(static_cast<Sony*>(NULL)); 
	ar & console 

	ar & numberPlayers & genre & status & serialNumber & price;

}

public:
		// Constructores.
	Game(string, int, Console*, int, string, string, int, double);
	Game();		
		// Setters.
	void setName(string);
	void setYear(int);
	void setConsole(Console*);
	void setNumberPlayers(int);
	void setGenre(string);
	void setStatus(string);
	void setSerialNumber(int);
	void setPrice(double);
		// Getters.
	string getName();
	int getYear();
	Console* getConsole();
	int getNumberPlayers();
	string getGenre();
	string getStatus();
	int getSerialNumber();
	double getPrice();
		// Destructor.
	~Game();
};