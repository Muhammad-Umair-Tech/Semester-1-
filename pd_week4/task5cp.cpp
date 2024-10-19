#include<iostream>
using namespace std;

void will_get_bonus(int position_a, int position_b);
main()
{
	int position_a, position_b;
	cout << "Enter your position: ";
	cin >> position_a;
	cout << "Enter your friend's position: ";
	cin >> position_b;
	will_get_bonus(position_a, position_b);
}















void will_get_bonus(int position_a, int position_b)
{
	if(position_b - position_a <= 6)
	{
		cout << "True";
	}
	else
	{
		cout << "False";
	}
}