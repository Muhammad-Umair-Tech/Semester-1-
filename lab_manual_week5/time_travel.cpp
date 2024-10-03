// task 9 cp

#include<iostream>
using namespace std;

void time_travel(int hours, int minutes);
int main()
{
    int hours, minutes;
    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter minutes: ";
    cin >> minutes;
    time_travel(hours, minutes);
    return 0;
}




void time_travel(int hours, int minutes)
{
    if(minutes + 15 >= 60) // hours should be from 0 to 23 and minutes from 0 to 59
    {
        minutes = (minutes + 15) - 60;
        if(hours + 1 >= 24)
        {
            hours = 24 - hours;
        }
        else
            hours += 1;

    }
    else
    {
        minutes += 15;
    }
    cout << "Time: " << hours << ":" << minutes;
}