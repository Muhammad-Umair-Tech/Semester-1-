#include<iostream>
using namespace std;

int main()
{
	int age, moves, years_lived;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter the number of times you have moved houses: ";
	cin >> moves;
	years_lived = age / (moves + 1);
	cout << "Average number of years lived in the same house: " << years_lived;
	return 0;
}