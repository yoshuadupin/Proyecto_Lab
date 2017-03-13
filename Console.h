// Console.h

#pragma once
#include <string>
#include <boost/serialization/vector.hpp>
#include <boost/serialization/base_object.hpp>
#include <boost/serialization/assume_abstract.hpp>

#include <iostream>


using namespace std;

class Console {
	friend class boot::serialization::access;
	private:
		int year;
		string model;
		string condition;
		int serialNumber;
		double price;

	public:
		// Constructor.
		Console(int, string, string, int, double);
		// Setters.
		void setYear(int);
		void setModel(string);
		void setCondition(string);
		void setSerialNumber(int);
		void setPrice(double);
		// Getters.
		int getYear();
		string getModel();
		string getCondition();
		int getSerialNumber();
		double getPrice();
		// Destructor.
		template<class Archive>
		void serialize(Archive & ar, const unsigned int /* file_version */){
		
		ar & year & model & condition & serialNumber & getPrice;
		
		}
		~Console();
};