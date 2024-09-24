#include<iostream>
using namespace std;

void calculate_fuel(float distance);
main()
{
	float distance;
	cout << "Enter distance: ";
	cin >> distance;
	calculate_fuel(distance);	
}


void calculate_fuel(float distance)
{
	float fuel = distance * 10;
	if(fuel < 100)
	{
		fuel = 100;
	}
	cout << "The amount of fuel required is: " << fuel;
}
