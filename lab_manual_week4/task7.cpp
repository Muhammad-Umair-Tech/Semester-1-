#include<iostream>
using namespace std;

void is_even(int num);
main()
{
	int num;
	cout << "Enter a number: ";
	cin >> num;
	is_even(num);
}





void is_even(int num)
{
	if(num % 2 == 0)
		cout << num << " is an even number.";
	else
		cout << num << " is an odd number.";
}