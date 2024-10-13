#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    string year;
    int holidays, home_vists;
    float games;
    cout << "Enter year type (normal/leap): ";
    cin >> year;
    cout << "Enter the number of holidays: ";
    cin >> holidays;
    cout << "Enter the number of weekends to travel for hometown: ";
    cin >> home_vists;
    games = (0.666 * holidays) + ((48 - home_vists) * 0.75) + home_vists;
    if(year == "normal")
        cout << floor(games);
    else if(year == "leap")
        cout << floor(games * 1.15);
    else 
        cout << "Error";
    return 0;
} 
