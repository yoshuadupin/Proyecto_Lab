#pragma once
#include "usuario.h"

class UserAdmin:public User
{
private:
	int password;	
public:
	UserAdmin(string ,int);
	~UserAdmin();
	
	void setPassword(int);
	int getPassword();
};