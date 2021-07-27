#include <iostream>
#include <conio.h>
#include "accControl.cpp"
#include "ioStreamDisplay.cpp"

using namespace std;

void curr_Time(int x, int y);

int main(){
	curr_Time(60, 2);
	accControl num;
	num.setAccNum(10001);
	num.setUsername(inputUsername(15, 5));
	num.setPassword(inputPassword(15, 7));
	num.deposit(1000);
	num.deposit(250);
	displayInfo(&num, 58, 5);
	num.withdraw(200);
	displayInfo(&num, 58, 11);
	gotoxy(0, 35);
	return 0;
}