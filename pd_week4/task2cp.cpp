//Swaps true with false

#include<iostream>
using namespace std;

void change_value(string value);
main()
{
	string value;
	cout << "Enter true or false: ";
	cin >> value;
	change_value(value);
}




void change_value(string value)
{
	if(value == "true")
	{
		value = "false";
		cout << value;
	}
	else if(value == "false")
	{
		value = "true";
		cout << value;
	}
	else
	{
		cout << "Wrong input";
	}
}