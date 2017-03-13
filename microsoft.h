// microsoft.h (Videojuego).

#pragma once

#include "game.h"

class microsoft : public Game {
	friend class boost::serialization::access;
	public:
		microsoft(string, int, Console*, int, string, string, int, double);
		~microsoft();
template<class Archive>
void serialize(Archive & ar, const unsigned int /* file_version */){
	ar & boost::serialization::base_object<Game>(*this);
}		
};