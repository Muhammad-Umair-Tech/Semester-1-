#include<iostream>
using namespace std;

void pass(float score);
main()
{
	float marks;
	cout << "Enters your marks: ";
	cin >> marks;
	pass(marks);
}





void pass(float score)
{
	if(score > 50)
	{
		cout << "You have passed.";
	}
	else
	{
		cout << "You have failed.";
	}
}