//Checks wether two numbers are equal or not

#include<iostream>
using namespace std;

void isEqual(int num1, int num2);
main()
{
	int num1, num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	isEqual(num1, num2);
}






void isEqual(int num1, int num2)
{
	if(num1 == num2)
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}
}