// sony.h (Videojuego).

#pragma once

#include "game.h"

class sony : public Game {	
	friend class boost::serialization::access;
	public:
		sony(string, int, Console*, int, string, string, int, double);
		~sony();
template<class Archive>
void serialize(Archive & ar, const unsigned int /* file_version */){
	ar & boost::serialization::base_object<Game>(*this);
}		
};