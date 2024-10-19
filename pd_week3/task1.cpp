#include<iostream>
using namespace std;

int main()
{
	int sides;
	cout << "Enter the number of sides of the polygon: ";
	cin >> sides;
	int total_angle = (sides -2) * 180; 
	cout << "The sum of the internal angles of a " << sides << "-sided polygon is " << total_angle << " degrees.";
	return 0;
}