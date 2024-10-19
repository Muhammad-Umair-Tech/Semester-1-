#include<iostream>
using namespace std;

int main()
{
	float n1, n2 = 0;
	cout << "Number 1: ";
	cin >> n1;
	n2 += n1;
	cout << "Number 2: ";
	cin >> n1;
	n2 += n1;
	cout << "Number 3: ";
	cin >> n1;
	n2 += n1;
	cout << "Number 4: ";
	cin >> n1;
	n2 += n1;
	cout << "Number 5: ";
	cin >> n1;
	n2 += n1;
	cout << "Sum is: " << n2;
	return 0;
}