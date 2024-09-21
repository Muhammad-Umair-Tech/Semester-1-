#include<iostream>
using namespace std;

int main()
{
	int dollars;
	cout << "Enter the amount in dollars: ";
	cin >> dollars;
	int rupees = dollars * 200;
	cout << "The amount in rupees is " << rupees << ".";
	return 0;
}