#include "user.h"


class UserSeller : public User
{
private:
	//Si hay un objeto que sea hora lo cambiamos
	string checkIn;
	string checkOut;
public:
	UserSeller(string , string , string );
	~UserSeller();
	
	//Getter
	string getCheckIn();
	string getCheckOut();

	//Setter
	void setCheckIn(string);
	void setCheckOut(string);
};