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
		
		
		void modifyGame(vector<Game*> , int);
		void modifyConsole(vector<Console*> , int);
		void deleteGame(vector<Game*> , int);
		void deleteConsole(vector<Console*> ,int);
		//Metodos para elegir el modelo
		void elegirModelo();
};