#include<iostream>
using namespace std;

int main()
{
	int years, days;
	cout << "Enter your age in years: ";
	cin >> years;
	days = 365 * years;
	cout << "Your age in days is approximately " << days <<" days.";
	return 0;
}
