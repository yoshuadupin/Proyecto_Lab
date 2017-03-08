// user.h

#pragma once

#include <string>

using namespace std;

class User {
	private:
		string name;

	public:
		// Constructor.
		User(string);
		// Setter.
		void setName(string);
		// Getter.
		string getName();
		// Destructor.
		~User();
		void addConsole(&vector<Console*>);
		void addGame(&vector<Game*>);
};