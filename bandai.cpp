#include "bandai.h"

Bandai::Bandai(string name , int year , Console* console, int numberPlayers , 
string genre , string status , int serialNumber , double  price)
:Game( name ,  year ,  console,  numberPlayers , 
 genre ,  status ,  serialNumber ,   price){
	
}

Bandai::~Bandai(){
}