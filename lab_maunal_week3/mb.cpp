#include<iostream>
using namespace std;

int main()
{
	float mb, bits;
	cout << "Enter data in megabytes: ";
	cin >> mb;
	bits = 1024 * 1000 * mb;
	cout << mb << " MB is equivalent to " << bits; 
	return 0;
}