//task 1 wp

#include<iostream>
using namespace std;

int add(int num1, int num2);

int main()
{
	int num1, num2, sum;
	cout << "Enter number 1: ";
	cin >> num1; 
	cout << "Enter number 2: ";
	cin >> num2;
	sum = add(num1, num2);
	cout << "Sum: " << sum;
	return 0;
}




int add(int num1, int num2)
{
	return num1 + num2;
}