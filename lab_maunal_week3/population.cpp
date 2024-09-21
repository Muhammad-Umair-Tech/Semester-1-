#include<iostream>
using namespace std;

int main()
{
	int population_now, births, population_then;
	cout << "Enter the current world population: ";
	cin >> population_now;
	cout << "Enter the the number of births per month: ";
	cin >> births;
	population_then = (births * 12 * 30) + population_now;
	cout << "The population in three decades will be " << population_then << ".";
	return 0;
}