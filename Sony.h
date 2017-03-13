// Sony.h

#pragma once

#include "Console.h"

using namespace std;

class Sony : public Console {
	friend class boost::serialization::access;
public:
		// Constructor.
	Sony(int, string, string, int, double);
		// Destructor.
		template<class Archive>
void serialize(Archive & ar, const unsigned int /* file_version */){
	ar & boost::serialization::base_object<Consola>(*this);
}
~Sony();
};