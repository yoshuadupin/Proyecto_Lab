// bandai.h

#pragma once

#include "game.h"

class Bandai : public Game {	
	friend class boost::serialization::access;
	public:
		// Constructor.
		Bandai(string, int, Console*, int, string, string, int, double);
		// Destructor.
		~Bandai();

template<class Archive>
void serialize(Archive & ar, const unsigned int /* file_version */){
	ar & boost::serialization::base_object<Game>(*this);
}		
};