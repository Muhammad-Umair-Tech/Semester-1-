#include<iostream>
using namespace std;

int main()
{
	float bag_size, bag_cost, area, cost_per_pound, cost_per_area;
	cout << "Enter the size of the fertilizer bag in pounds: ";
	cin >> bag_size;
	cout << "Enter the cost of the bag: ";
	cin >> bag_cost;
	cout << "Enter the area in square feet that can be covered in the bag: ";
	cin >> area;
	cost_per_pound = bag_cost / bag_size;
	cost_per_area = bag_cost / area;
	cout << "Cost of fertilizer per pound: " << cost_per_pound << endl;
	cout << "Cost of fertilizing area per square foot: " << cost_per_area;
	return 0;
}