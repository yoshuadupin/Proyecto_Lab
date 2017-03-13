// nintendo.h (Videojuego).

#pragma once

#include "game.h"

class nintendo : public Game {	
	friend class boost::serialization::access;
	public:
	nintendo(string, int, Console*, int, string, string, int, double);
	~nintendo();	
template<class Archive>
void serialize(Archive & ar, const unsigned int /* file_version */){
	ar & boost::serialization::base_object<Game>(*this);
}	
};