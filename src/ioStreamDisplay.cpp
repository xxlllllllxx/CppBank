#ifndef IOSTREAMDISPLAY_CPP_
#define IOSTREAMDISPLAY_CPP_
#include <iostream>
#include <ctime>
#include <conio.h>
#include "bankAccount.cpp"
using namespace std;

void curr_Time(int x, int y){
	time_t now = time(NULL);
	tm *ltm = localtime(&now);
	gotoxy(x, y);
	textcolor(3);
	printf("Date: ");
	textcolor(4);
	printf("[ %02d, %02d, %04d ]", 1+ltm->tm_mon, ltm->tm_mday, 1900+ltm->tm_year);
	gotoxy(x, y+1);
	textcolor(3);
	printf("Time: ");
	textcolor(4);
	printf("[ %02d : %02d : %02d ]", 8+ltm->tm_hour, ltm->tm_min, ltm->tm_sec);
	gotoxy(0, 2);
	textcolor(15);
}

void displayInfo(bankAccount *data, int x, int y){
	if(data->getAccNum() != 0){
		textcolor(8);
		gotoxy(x, y);
		printf("  Account Num:    ");
		textcolor(14);
		printf("[ # %d ]\n", data->getAccNum());
		textcolor(8);
		gotoxy(x, y+1);
		printf("     Username:  ");
		if(data->getUsername()[0] == '\0'){
			textcolor(12);
			printf("NOT SET!");
		} else {
			textcolor(14);
			printf("%s\n", data->getUsername());
		}
		textcolor(8);
		gotoxy(x, y+2);
		printf("     Password:  ");
		if(data->getPassword()[0] == '\0'){
			textcolor(12);
			printf("NOT SET!");
		} else {
			textcolor(14);
			printf("%s\n", data->getPassword());
		}
		textcolor(8);
		gotoxy(x, y+3);
		printf("     Balance :  ");
		textcolor(2);
		printf("P%.2f\n", data->getBalance());
	}
	else{
		gotoxy(0, 1);
		textcolor(12);
		printf("ACCOUNT NOT SET!");
	}
	gotoxy(0, 0);
	textcolor(15);
}

char *inputUsername(int x, int y){
	gotoxy(x, y);
	textcolor(7);
	printf("Enter Username:  ");
	textcolor(8);
	printf("__max:_15______!");
	gotoxy(x+17, y);
	textcolor(9);
	char tmp[255] = "";
	char tmp2[16] = "";
	scanf(" %s", tmp);
	for(int i = 0; i < 15; i++){
		tmp2[i] = tmp[i];
	}
	if(tmp[15] != '\0'){
		gotoxy(0, 0);
		textcolor(12);
		printf("Input Limit Reached! :: Username [ %s ] saved", tmp2);
	}
	return tmp2;
}

char *inputPassword(int x, int y){
	gotoxy(x, y);
	textcolor(7);
	printf("Enter Password:  ");
	textcolor(8);
	printf("__max:_15______!");
	gotoxy(x+17, y);
	textcolor(9);
	char tmp[255] = "";
	char tmp2[16] = "";
	scanf(" %s", tmp);
	for(int i = 0; i < 15; i++){
		tmp2[i] = tmp[i];
	}
	if(tmp[15] != '\0'){
		gotoxy(0, 0);
		textcolor(12);
		printf("Input Limit Reached! :: Password [ %s ] saved", tmp2);
	}
	return tmp2;;
}

#endif