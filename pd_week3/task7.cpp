#include<iostream>
using namespace std;

int main()
{
	string movie;
	float price_adult, price_child, number_adult, number_child, charity_percent, charity_amount, total_amount, remaining_amount;
	cout << "Enter the name of the movie: ";
	cin >> movie;
	cout << "Enter the cost of an adult's ticket: ";
	cin >> price_adult;
	cout << "Enter the cost of a child's ticket: ";
	cin >> price_child;
	cout << "Enter the number of tickets sold to adults: ";
	cin >> number_adult;
	cout << "Enter the number of tickets sold to children: ";
	cin >> number_child;
	total_amount = (price_adult * number_adult) + (price_child * number_child);
	cout << "Enter the percentage amount to be donated to charity: ";
	cin >> charity_percent;
	charity_amount = (total_amount * charity_percent) / 100;
	remaining_amount = total_amount - charity_amount;
	cout << endl << "Movie title: " << movie;
	cout << endl <<"Total amount generated from tickets: " << total_amount;
	cout << endl <<"Amount to be donated to charity: "<< charity_amount; 
	cout << endl <<"The remaing amount after donating to charity is: " << remaining_amount;
	return 0;
}