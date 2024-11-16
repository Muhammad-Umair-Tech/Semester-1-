#include<iostream>
using namespace std;

int main()
{	
	int sum = 0;
	int numbers[15];
	for (int i = 0; i < 15; i++)
	{
		cout << "Number " << i << ": ";
		cin >> numbers[i];
	}
	for (int j = 0; j < 15; j++)
	{
		sum += numbers[j];
	}
	cout << sum;
	return 0;
}