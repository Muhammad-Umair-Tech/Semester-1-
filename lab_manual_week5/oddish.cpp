//task 8 cp

#include<iostream>
using namespace std;

string oddish_or_evenish(int num);
int main()
{
	int num; 
	string result;
	cout << "Enter a five-digit number: ";
	cin >> num;
	result = oddish_or_evenish(num); 
	cout << result;
	return 0;
}



string oddish_or_evenish(int num)
{
	int place1, place2, place3, place4, place5, rem1, rem2, rem3, sum;
	place1 = num / 10000;
	rem1 = num % 1000;
	place2 = rem1 / 1000;
	rem2 = rem1 % 1000;
	place3 = rem2 / 100;
	rem3 = rem2 % 100;
	place4 = rem3 / 10;
	place5 = rem3 % 10;
	sum = place1 + place2 + place3 + place4 + place5;
	if(sum % 2 == 0)
		return "Evenish";
	if(sum % 2 != 0)
		return "Oddish";
}