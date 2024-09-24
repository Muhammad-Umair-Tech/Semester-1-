#include<iostream>
using namespace std;

void to_feet(float inches);
main()
{
	float inches;
	cout << "Enter measurement in inches: ";
	cin >> inches;
	to_feet(inches);
}


void to_feet(float inches)
{
	float feet = 0.083333 * inches;
	cout << feet;
}