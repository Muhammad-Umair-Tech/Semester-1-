#include<iostream>
using namespace std;

int main()
{
	string team;
	int wins, draws, losses, points;
	cout << "Enter the name of the cricket team: ";
	cin >> team;
	cout << "Enter the number of wins: ";
	cin >> wins;
	cout << "Enter the number of losses: ";
	cin >> losses;
	cout << "Enter the number of draws: ";
	cin >> draws;
	points = (wins * 3) + (losses * 0) + (draws * 1);
	cout << "The " << team << " team has scored a total of " << points << " points in the Asia Cup Tournament."; 
	return 0;
}