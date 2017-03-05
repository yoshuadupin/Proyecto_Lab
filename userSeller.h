// userSeller.h

#include "user.h"

class UserSeller : public User {
	private:
		//Si hay un objeto que sea hora lo cambiamos
		string checkIn;
		string checkOut;

	public:
		// Constructor.
		UserSeller(string, string, string);
		//Setter
		void setCheckIn(string);
		void setCheckOut(string);
		//Getter
		string getCheckIn();
		string getCheckOut();
		// Destructor.
		~UserSeller();
};