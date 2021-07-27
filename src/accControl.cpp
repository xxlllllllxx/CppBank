#ifndef ACCCONTROL_CPP_
#define ACCCONTROL_CPP_
#include <iostream>
#include "../include/accControl.hpp"
using namespace std;

//constructor
accControl::accControl(){
	
}
//destructor
accControl::~accControl(){
	
}

void accControl::deposit(){
	float x;
	cout << "Deposit Amount: ";
	cin >> x;
	setBalance(x);
}

void accControl::deposit(float x){
	setBalance(x);
}

void accControl::withdraw(){
	float x;
	cout << "Withdraw Amount: ";
	cin >> x;
	setBalance(-x);
}

void accControl::withdraw(float x){
	setBalance(-x);
}

#endif