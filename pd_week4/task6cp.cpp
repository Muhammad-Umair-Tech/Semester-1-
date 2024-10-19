#include<iostream>
using namespace std;

void longest_duration(int hours, int minutes);
main()
{
	int hours, minutes;
	cout << "Enter the number of hours: ";
	cin >> hours;
	cout << "Enter the number of minutes: ";
	cin >> minutes;
	longest_duration(hours, minutes);
}
















void longest_duration(int hours, int minutes)
{
	int hours_in_minutes = hours * 60;
	if(hours_in_minutes > minutes)
	{
		cout << hours;
	}
	else
	{
		cout << minutes;
	}
}