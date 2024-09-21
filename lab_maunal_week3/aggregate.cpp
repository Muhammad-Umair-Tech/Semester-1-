#include<iostream>
using namespace std;

int main()
{
	string name;
	float matric, inter, ecat;
	float aggregate;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your score in matric: ";
	cin >> matric;
	cout << "Enter your score in inter: ";
	cin >> inter;
	cout << "Enter your marks in ecat: ";
	cin >> ecat;
	aggregate = ((matric / 1100) * 10) + ((inter / 550) * 40) + ((ecat / 400) * 50);
	cout << "The aggregate score of " << name << " is " << aggregate << "%.";  
	return 0;
}