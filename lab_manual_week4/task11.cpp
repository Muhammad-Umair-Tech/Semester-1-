#include<iostream>
using namespace std;


void name_again(string name);
main()
{
	string name;
	cout << "Enter your name: ";
	cin >> name;
	name_again(name);
}






void name_again(string name)
{
	while(true)
	{
		cout << name;
	}
}

