#include<iostream>
using namespace std;

int main()
{
	float hours, seconds;
	cout << "Enter the number of hours: ";
	cin >> hours;
        seconds = 3600 * hours;
	cout << hours << "hours are equal to " << seconds << " seconds.";
	return 0;
}