#pragma once
#include <string>

class User
{
private:
	string name;
	

public:
	User(string);
	~User();
	
	void setName(string);
	string getName();
};