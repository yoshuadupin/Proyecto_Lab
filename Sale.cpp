// Sale.cpp

#include "Sale.h"

// Constructor.


Sale::Sale(string clientName, string finalHour, string userName, double subtotal) {
	this -> clientName = clientName;
	this -> finalHour = finalHour;
	this -> userName = userName;
	this -> subtotal = subtotal;
}

// Setters.

void Sale::setClientName(string) {
	this -> clientName = clientName;
}

void Sale::setConsole(Console* console) {
	this -> consoles -> push_back(console);
}

void Sale::setVideoGame(VideoGame* videoGame) {
	this -> videoGames -> push_back(videoGame);
}

void Sale::setFinalHour(string finalHour) {
	this -> finalHour = finalHour;
}

void Sale::setUserName(string userName) {
	this -> userName = userName;
}

void Sale::setSubtotal(double subtotal) {
	this -> subtotal = subtotal;
}

// Getters.

string Sale::getClientName() {
	return clientName;
}

Console* Sale::getConsole(int position) {
	return this -> consoles -> at(position);
}

VideoGame* Sale::getVideoGame(int position) {
	return this -> videoGames -> at(position);
}

string Sale::getFinalHour() {
	return finalHour;
}

string Sale::getUserName() {
	return userName;
}

double Sale::getSubtotal() {
	return subtotal;
}

// Destructor.

Sale::~Sale() {

}