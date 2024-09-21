#include<iostream>
using namespace std;

int main()
{
	float charge, time, current;
	cout << "Enter charge:";
	cin >> charge;
	cout << "Enter the time taken: ";
	cin >> time;
	current = charge / time;
	cout << "The current pased is: " << current << ".";
	return 0;
}