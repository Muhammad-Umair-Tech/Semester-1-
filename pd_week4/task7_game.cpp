//moves the player up and down infinitely

#include<iostream>
#include<windows.h>
using namespace std;

void print_maze();
void gotoxy(int x, int y);
void move_player(int x, int y);
void move_vertically(int x, int y, int y_boundary_max, int y_boundary_min);
main()
{
	system("cls");
	print_maze();
	int x = 2, y = 1, y_boundary_max = 8, y_boundary_min = 1;
	while(true)
	{
		move_vertically(x, y, y_boundary_max, y_boundary_min);
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
	
	gotoxy(x, y);        //calling the built-in function gotoxy
	cout << "P";
	Sleep(200);
	gotoxy(x, y);
	cout << " ";
}





void move_vertically(int x, int y, int y_boundary_max, int y_boundary_min)
{
	while(y < y_boundary_max)
	{
		move_player(x, y);        //calling the built-in function move_player
		y++;
	}
	while(y > y_boundary_min)
	{
		move_player(x, y);
		y--;
	} 	
}
