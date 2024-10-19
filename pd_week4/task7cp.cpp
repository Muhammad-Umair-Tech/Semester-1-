//Calculates the total amount of flowers bought and a conditional discount

#include<iostream>
using namespace std;

void flowerShop(int red_roses, int white_roses, int tulips);
main()
{
	int red_roses, white_roses, tulips;
	cout << "Enter the number of red roses: ";
	cin >> red_roses;
	cout << "Enter the number of white roses: ";
	cin >> white_roses;
	cout << "Enter the number of tulips: ";
	cin >> tulips;
	flowerShop(red_roses, white_roses, tulips);
}














void flowerShop(int red_roses, int white_roses, int tulips)
{
	float red_rose_price = 2.00 * red_roses, white_rose_price = 4.10 * white_roses, tulip_price = 2.50 * tulips;
	float total_price = red_rose_price + white_rose_price + tulip_price;
	float discounted_total;
	cout << "Total price: " << total_price << endl;
	if(total_price > 200)
	{
		discounted_total = total_price * 0.8;
		cout << "Discounted total price: " << discounted_total;
	}
	else
	{
		cout << "No discount applied.";
	}
}
