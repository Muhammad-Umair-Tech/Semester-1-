//task 1 wp

#include<iostream>
using namespace std;

int multiply_by_5(int num);
int main()
{
	int num, result;
	cout << "Enter a number: ";
	cin >> num;
	result = multiply_by_5(num);
	cout << num << " * 5 = " << result;
}




int multiply_by_5(int num)
{
	return num * 5;
}
