//Prints name at the center of the screen

#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
main()
{
	system("cls");
	gotoxy(50, 30);
	cout << "#   # #   # #   #  ###  #   # #   #  ###  ###    #   # #   #  ###  ### ###                                                                       " << endl;
	gotoxy(50, 31);
	cout << "## ## #   # ##### #   # ## ## ## ## #   # #  #   #   # ## ## #   #  #  #  #                                                                      " << endl;
	gotoxy(50, 32);
	cout << "# # # #   # #   # ##### # # # # # # ##### #  #   #   # # # # #####  #  ###                                                                       " << endl;
	gotoxy(50, 33);
	cout << "#   # ##### #   # #   # #   # #   # #   # ####   ##### #   # #   # ### #  #                                                                      " << endl;
}





void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}