#include<iostream>
using namespace std;

void howManyStickers(int sides);
main()
{
	int sides;
	cout << "Enter the number: ";
	cin >> sides;
	howManyStickers(sides);
}



void howManyStickers(int sides)
{
	cout << sides * sides * 6;
}