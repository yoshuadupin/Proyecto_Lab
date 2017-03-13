// Microsoft.h

#pragma once

#include "Console.h"

using namespace std;

friend class boost::serialization::access;
class Microsoft : public Console{
	public:
		// Constructor.
	Microsoft(int, string, string, int, double);
		// Destructor.
template<class Archive>
void serialize(Archive & ar, const unsigned int /* file_version */){
	ar & boost::serialization::base_object<Consola>(*this);
}
~Microsoft();
};