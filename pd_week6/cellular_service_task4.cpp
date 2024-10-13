#include<iostream>
using namespace std;

float regular_service(int min);
float premium_service(int min, char time);
int main()
{
    char type, time;
    int min;
    float charges;
    cout << "Enter the type of service (r or R for regular, p or P for premium): ";
    cin >> type;
    if(type == 'p' || type == 'P')
    {
        cout << "Enter the time of use (d or D for day, n or N for night): ";
        cin >> time;
    }
    cout << "Enter the number of minutes the service was used: ";
    cin >> min;
    if(type == 'r' || type == 'R')
        charges = regular_service(min);
    else if(type == 'p' || type == 'P')
        charges = premium_service(min, time);
    else
        cout << "Error: wrong input";
    cout << "Service type: " << type << endl;
    cout << "Total minutes used: " << min << endl;
    if(type == 'p' || type == 'P')
        if(charges != 0) // if user enters anything other than d, D, n or N
            cout << "Time of use: " << time << endl;
        else
            cout << "Error"; 
    cout << "Total charges: $" << charges; 
    return 0;
}



float regular_service(int min)
{
    float charges;
    if(min <= 50)
        charges = 10;
    else 
        charges = 10 + ((min - 50) * 0.20);
    return charges;
}


float premium_service(int min, char time)
{
    float charges;
    if(time == 'd' || time == 'D')
    {
        if(min <= 75)
            charges = 25;
        else
            charges = 25 + ((min - 75) * 0.10); 
    }
    else if(time == 'n' || time == 'N')
    {
        if(min <= 100)
            charges = 25;
        else 
            charges = 25 + (min * 0.05);
    }
    else 
        charges == 0;
    return charges;
}