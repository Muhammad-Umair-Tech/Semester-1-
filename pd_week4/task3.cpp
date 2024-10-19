//Prints the player inside the maze

#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y);
void print_maze();
main()
{
	int x = 4, y = 5;
	system("cls");
	print_maze();
	gotoxy(x, y);
	cout << "P";
}





void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void print_maze()
{
	cout << "######################" << endl;
	cout << "#                    #" << endl;
	cout << "#                    #" << endl;
	cout << "#                    #" << endl;
	cout << "#                    #" << endl;
	cout << "#                    #" << endl;
	cout << "#                    #" << endl;
	cout << "#                    #" << endl;
	cout << "#                    #" << endl;
	cout << "######################" << endl;
	
}

void move_player(int x, int y)
{
	gotoxy(x, y);
	cout << "P";
	Sleep(200);
	gotoxy(x, y);
	cout << " ";
}