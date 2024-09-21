#include<iostream>
using namespace std;

int main()
{
	int pounds;
	cout << "Enter your weight in pounds: ";
	cin >> pounds;
	int kilos = 0.45 * pounds;
	cout << "Your weight in kilograms is " << kilos << ".";
	return 0;
}