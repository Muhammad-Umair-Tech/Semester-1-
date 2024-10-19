#include<iostream>
using namespace std;

int main()
{
	string name;
	float target, days;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter the weight (kg) that you want to lose: ";
	cin >> target;
	days = target * 15;
	cout << name << " will need " << days << " days to achieve the target.";
	return 0;
} 