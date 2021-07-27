#ifndef ACCCONTROL_HPP_
#define ACCCONTROL_HPP_
#include "../src/bankAccount.cpp"
#include "../src/accControl.cpp"

class accControl: public bankAccount{
	public:
		typedef accControl super;
		accControl();
		~accControl();
		void deposit();
		void deposit(float x);
		void withdraw();
		void withdraw(float x);
};
#endif