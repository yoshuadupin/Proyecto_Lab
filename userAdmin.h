// userAdmin.h

#pragma once

#include "user.h"


class UserAdmin : public User {
	private:
		int password;
		vector<Console*> consoles;
		vector<Game*> games;

	public:
		// Constructor.
		UserAdmin(string ,int);
		// Setter.
		void setPassword(int);
		// Getter.
		int getPassword();
		vector<Console*> getConsoles();
		vector<Game*> getGames();
		// Modificar y eliminar.
		vector<Game*> modifyGame(vector<Game*> , int);
		vector<Console*> modifyConsole(vector<Console*> , int);
		vector<Game*> deleteGame(vector<Game*> , int);
		vector<Console*> deleteConsole(vector<Console*> ,int);
		//Metodos para elegir el modelo
		string elegirModelo();
};