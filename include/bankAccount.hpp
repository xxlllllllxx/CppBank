#ifndef BANKACCOUNT_HPP_
#define BANKACCOUNT_HPP_
#include <iostream>
using namespace std;

class bankAccount{
	private:
		int accNum = 0;
		char username[16] = "";
		char password[16] = "";
		float balance = 0;
		long logTime;
		bool loggedIn;
		
	protected:
		void setBalance(float x);
		
	public:
		bankAccount();
		~bankAccount();
		
		void setAccNum(int x);
		void setUsername(char *x);
		void setPassword(char *x);
		
		int getAccNum();
		char *getUsername();
		char *getPassword();
		long getLogTime();
		bool getLoggedIn();
		float getBalance();
};

#endif