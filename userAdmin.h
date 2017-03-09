// userAdmin.h

#pragma once

#include "user.h"

class UserAdmin : public User {
	private:
		int password;

	public:
		// Constructor.
		UserAdmin(string ,int);
		// Setter.
		void setPassword(int);
		// Getter.
		int getPassword();
		// Destructor
		~UserAdmin();
		
		void deleteGame(vector<Game*> , int);
		void deleteConsole(vector<Console*> ,int);
};