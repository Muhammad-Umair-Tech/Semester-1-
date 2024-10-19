#include<iostream>
using namespace std;

int main()
{
	int num, place1, place2, place3, place4, remainder1, remainder2, remainder3, sum;
	cout << "Enter a four-digit number: ";
	cin >> num;
	place1 = num / 1000;
	remainder1 = num % 1000;
	place2 = remainder1 / 100;
	remainder2 = remainder1 % 100;
	place3 = remainder2 / 10;
	place4 = remainder2 % 10;
	sum = place1 + place2 + place3 + place4;
	cout << "The sum of the four digits is: " << sum;
	return 0;
}