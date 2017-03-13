// electronicArts.h

#pragma once

#include "game.h"

class ElectronicArts : public Game {	
	friend class boost::serialization::access;
	public:
		// Constructor.
		ElectronicArts(string, int, Console*, int, string, string, int, double);
		// Destructor.
		~ElectronicArts();
template<class Archive>
void serialize(Archive & ar, const unsigned int /* file_version */){
	ar & boost::serialization::base_object<Game>(*this);
}		
};