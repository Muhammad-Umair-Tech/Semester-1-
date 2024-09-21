#include<iostream>
using namespace std;

int main()
{
	string name;
	char section;
	int roll_no;
	float aggregate;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your roll number: ";
	cin >> roll_no;
	cout << "Enter your aggregate: ";
	cin >> aggregate;
	cout << "Enter your section: ";
	cin >> section;
	cout << "Student information:" << endl << "Name: " << name << endl << "Roll number: " << roll_no << endl << "Aggregate: " << aggregate << endl << "Section: " << section;
	return 0;
}