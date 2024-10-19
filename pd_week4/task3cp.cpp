//Calculates ticket price after discount for different countries

#include<iostream>
using namespace std;

void price_to_pay(string country, float price);
main()
{
	while(true)
	{
	string country;
	float price;
	cout << "Enter the name country's name: ";
	cin >> country;
	cout << "Enter the ticket price: ";
	cin >> price;
	price_to_pay(country, price);
	}
}





void price_to_pay(string country, float price)
{
	float discounted_price;
	if(country == "Pakistan")
	{
		discounted_price = price * 0.95;
	}
	if(country == "Ireland")
	{
		discounted_price = price * 0.9;		
	}
	if(country == "India")
	{
		discounted_price = price * 0.8;
	}
	if(country == "England")
	{
		discounted_price = price * 0.7;
	}
	if(country == "Canada")
	{
		discounted_price = price * 0.55;
	}
	cout << "Ticket price after discount: " << discounted_price << endl << endl;
}