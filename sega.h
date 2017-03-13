// sega.h

#pragma once

#include "game.h"

class Sega : public Game {	
	friend class boost::serialization::access;
	public:
		// Constructor.
		Sega(string, int, Console*, int, string, string, int, double);
		// Destructor.
		~Sega();
template<class Archive>
void serialize(Archive & ar, const unsigned int /* file_version */){
	ar & boost::serialization::base_object<Game>(*this);
}	
};