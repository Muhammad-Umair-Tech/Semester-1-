//Moves the player horizontally infinetly
#include<iostream>
#include<windows.h>
using namespace std;

void print_maze();
void gotoxy(int x, int y);
void move_player(int x, int y);
main()
{
	system("cls");
	print_maze();
	int x = 2, y = 3;
	while(true)
	{
		move_player(x, y);
		x++;
	}
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

void gotoxy(int x, int y)
{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void move_player(int x, int y)
{
	
	gotoxy(x, y);
	cout << "P";
	Sleep(200);
	gotoxy(x, y);
	cout << " ";
}	
