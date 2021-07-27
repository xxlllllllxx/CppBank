#ifndef BANKACCOUNT_CPP_
#define BANKACCOUNT_CPP_
#include <iostream>
#include <ctime>
#include "../include/bankAccount.hpp"
using namespace std;

//constructor
bankAccount::bankAccount(){
	time_t now = time(NULL);
	this->logTime = now;
	this->loggedIn = true;
}
//destructor
bankAccount::~bankAccount(){
	this->loggedIn = false;
}
//setters
void bankAccount::setAccNum(int x){
	this->accNum = x;
}
void bankAccount::setUsername(char *x){
	for(int i = 0; i < 15; i++){
		this->username[i] = x[i];
	}
}
void bankAccount::setPassword(char *x){
	for(int i = 0; i < 15; i++){
		this->password[i] = x[i];
	}
}
void bankAccount::setBalance(float x){
	this->balance = this->balance + x;
}

//getters
int bankAccount::getAccNum(){
	return this->accNum;
}
char *bankAccount::getUsername(){
	return this->username;
}
char *bankAccount::getPassword(){
	return this->password;
}
bool bankAccount::getLoggedIn(){
	return this->loggedIn;
}
float bankAccount::getBalance(){
	return this->balance;
}
long bankAccount::getLogTime(){
	return this->logTime;
}

#endif