//Calculates the wether Tom will sleep well or not in a year

#include<iostream>
using namespace std;

void pet(int holidays);
main()
{
	int holidays;
	cout << "Enter the number of holidays the owner has this year: ";
	cin >> holidays;
	pet(holidays);	
}
















void pet(int holidays)
{
	int norm = 30000, working_days = 365 - holidays;
	int game_time = (working_days * 63) + (holidays * 127);
	if(game_time < norm)
	{
		cout << "Tom sleeps well." << endl;
		cout << (norm - game_time) / 60 << " hours and " << (norm - game_time) % 60 << " minutes for sleep.";	
	}
	else
	{
		cout << "Tom will run away." << endl;
		cout << game_time / 60 << " hours and " << game_time % 60 << " minutes for play";
	}
}