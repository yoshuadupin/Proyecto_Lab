// Nintendo.h

#pragma once

#include "Console.h"

using namespace std;

class Nintendo : public Console {
	friend class boost::serialization::access;
public:
		// Constructor.
	Nintendo(int, string, string, int, double);
		// Destructor.
	~Nintendo();
template<class Archive>
void serialize(Archive & ar, const unsigned int /* file_version */){
	ar & boost::serialization::base_object<Consola>(*this);
}
};
