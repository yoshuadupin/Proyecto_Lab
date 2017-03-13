// konami.h (Videojuego).

#pragma once

#include "game.h"

class Konami : public Game {	
	friend class boost::serialization::access; 
	public:
		Konami(string, int, Console*, int, string, string, int, double);
		~Konami();
template<class Archive>
void serialize(Archive & ar, const unsigned int /* file_version */){
	ar & boost::serialization::base_object<Game>(*this);
}		
};