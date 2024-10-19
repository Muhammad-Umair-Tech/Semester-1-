#include<iostream>
using namespace std;

int main()
{
	float vegie_price_coin, fruit_price_coin, vegie_price_rs_total, fruit_price_rs_total, earning;
	int vegie_amount, fruit_amount;
	cout << "Enter vegetable price per kilogram (in coins): ";
	cin >> vegie_price_coin;
	cout << "Enter fruit price per kilogram (in coins): ";
	cin >> fruit_price_coin;
	cout << "Enter total kilograms of vegetables: ";
	cin >> vegie_amount;
	cout << "Enter total kilograms of fruit: ";
	cin >> fruit_amount;
	vegie_price_rs_total = (vegie_price_coin * vegie_amount) / 1.94;
	fruit_price_rs_total = (fruit_price_coin * fruit_amount) / 1.94;	
	earning = vegie_price_rs_total + fruit_price_rs_total;
	cout << "Total earnings in rupees (PKR): " << earning;
	return 0;
}