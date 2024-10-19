#include<iostream>
using namespace std;

int main()
{
	float players, imposters, chance;
	cout << "Enter the number of players: ";
	cin >> players;
	cout << "Enter the number of imposters: ";
	cin >> imposters;
	chance = 100 * (imposters / players);
	cout << "Chance of being an imposter: " << chance << "%";
	return 0;
}