// userAdmin.h

#pragma once

#include "usuario.h"

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
};