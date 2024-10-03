//task 2 op

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float num1, num2;
	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;
	cout << "After raising the first number as the power of the second number, we get: " << pow(num1, num2);
	return 0;
}