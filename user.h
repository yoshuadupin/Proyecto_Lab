#pragma once
#include <string>

using namespace std;

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