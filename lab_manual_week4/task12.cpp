#include<iostream>
using namespace std;


void discount(string day, float purchase);
main()
{
	while(true)
	{
		string day;
		float purchase;
		cout << "Enter the day (full with capital initial): ";
		cin >> day;
		cout << "Enter the total purchase amount: ";
		cin >> purchase;
		discount(day, purchase);
	}
}





void discount(string day, float purchase)
{
	if(day == "Sunday")
	{
		purchase = purchase * 0.9;
		cout << "Payable amount after Sunday discount: " << purchase << endl;
	}
	else
	{
		purchase = purchase * 0.95;
		cout << "Payable amount: " << purchase << endl;
	}
	
}