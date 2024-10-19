//Calculates the number of day tissue will last

#include<iostream>
using namespace std;

void tissue_checker(int people, int rolls);
main()
{
	int people, rolls;
	cout << "Enter the number of people in the household: ";
	cin >> people;
	cout << "Enter the number of tissue rolls: ";
	cin >> rolls;	
	tissue_checker(people, rolls);
}


void tissue_checker(int people, int rolls)
{
	int tissue_paper = rolls * 500;
	int daily_use = 57 * people;
	int days_left = tissue_paper / daily_use;
	if(days_left <= 5)
		cout << "Your tissue paper will last only " << days_left << " days. Buy more!";
	else
		cout << "Your tissue paper will last " << days_left << " days. No need to panic!";
}