// Sale.cpp

#include "Sale.h"

// Constructor.


Sale::Sale(string clientName, string finalHour, string userName, double subtotal) {
	this -> clientName = clientName;
	this -> finalHour = finalHour;
	this -> userName = userName;
	this -> subtotal = subtotal;
}

//Constructor definido
Sale::Sale(){
	this -> clientName = "";
	this -> finalHour = "";
	this -> userName = "";
	this -> subtotal = 0;
	this -> sales = 0;
}

// Setters.

void Sale::setClientName(string clientName) {
	this -> clientName = clientName;
}

void Sale::setConsole(Console* console) {
	this -> consoles.push_back(console);
}

void Sale::setGame(Game* game) {
	this -> games.push_back(game);
}

void Sale::setFinalHour(string finalHour) {
	this -> finalHour = finalHour;
}

void Sale::setUserName(string userName) {
	this -> userName = userName;
}

void Sale::setSubtotal(double subtotal) {
	this -> subtotal = subtotal * 1.15;
}

void Sale::setConsoles(vector<Console*> consoles) {
	this -> consoles = consoles;
}

void Sale::setGames(vector<Game*> games) {
	this -> games = games;
}

void Sale::setSale(int sales) {
	this -> sales = sales;
}

// Getters.

string Sale::getClientName() {
	return clientName;
}

Console* Sale::getConsole(int position) {
	return this -> consoles.at(position);
}

Game* Sale::getGame(int position) {
	return this -> games.at(position);
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

vector<Console*> Sale::getConsoles() {
	return this -> consoles;
}

vector<Game*> Sale::getGames() {
	return this -> games;
}

int Sale::getSales() {
	return sales;
}

// Destructor.

Sale::~Sale() {

}