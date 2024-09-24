#include<iostream>
using namespace std;

void add(float num1, float num2);
void subtract(float num1, float num2);
void multiply(float num1, float num2);
void divide(float num1, float num2);
main()
{
	float num1, num2;
	char op;
	cout << "Enter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;
	cout << "Enter an operator (+, -, *, /): ";
	cin >> op;
	if(op == '+')
	{
		add(num1, num2);
	}
	if(op == '-')
	{
		subtract(num1, num2);
	}
	if(op == '*')
	{
		multiply(num1, num2);
	}
	if(op == '/')
	{
		divide(num1, num2);
	}
	else
	{
		cout << "Wrong input";
	}
}





void add(float num1, float num2)
{
	float sum = num1 + num2;
	cout << "Sum: " << sum;
}

void subtract(float num1, float num2)
{
	float diff = num1 - num2;
	cout << "Difference: " << diff;
}

void multiply(float num1, float num2)
{
	float multiply = num1 * num2;
	cout << "Product: " << multiply;
}

void divide(float num1, float num2)
{
	float qoutient = num1 / num2;
	cout << "Qoutient: " << qoutient;
}