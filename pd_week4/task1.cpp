//Prints text on a specific location on the console

#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
main()
{
	system("cls");
	cout << "test";
	gotoxy(15, 15);
	cout << "My name is Muhammad Umair";
}





void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}