#include "game.h"
//Constructores
//8 Parametros
Game::Game(string name , int year , Console* console, int numberPlayers , 
	string genre , string status , int serialNumber , double  price){

	this->name = name; 	
	this->year = year; 
	this->console = console;
	this->numberPlayers = numberPlayers ;
	this->genre = genre ;
	this->status = status;
	this->serialNumber = serialNumber;
	this->price = price;

}

Game::Game(){
	this->name = ""; 	
	this->year = 0; 
	this->console = NULL;
	this->numberPlayers = 0 ;
	this->genre = "" ;
	this->status = "";
	this->serialNumber = 0;
	this->price = 0;

}
//Destructor
Game::~Game(){
	//delete this->console;
}

void Game::setName(string name){
	this->name = name;
}
void Game::setYear(int year){
	this-> year = year;
}
void Game::setConsole(Console* console){
	this->console = console;
}
void Game::setNumberPlayers(int numberPlayers){
	this->numberPlayers = numberPlayers;
}
void Game::setGenre(string genre){
	this->genre = genre ;
}
void Game::setStatus(string status){
	this->status = status;
}
void Game::setSerialNumber(int serialNumber){
	this->serialNumber = serialNumber;
}
void Game::setPrice(double price){
	this->price = price;
}

	//Setters
string Game::getName(){
	return name; 
}
int Game::getYear(){
	return year;
}
Console* Game::getConsole(){
	return console;
}
int Game::getNumberPlayers(){
	return numberPlayers;
}
string Game::getGenre(){
	return genre;
}
string Game::getStatus(){
	return	status;
}
int Game::getSerialNumber(){
	return serialNumber;
}
double Game::getPrice(){
	return price;
}

