#include<iostream>  // task 13 cp
using namespace std;

float cheapest_transport(string time, float distance);
int main()
{
    float distance;
    string time;
    cout << "Enter the distance to be traveled: ";
    cin >> distance;
    cout << "Enter the time of the day: ";
    cin >> time;
    cout << "Lowest price for " << distance << " kilometers: " << cheapest_transport(time, distance);
    return 0;
}


float cheapest_transport(string time, float distance)
{
    float taxi, bus, train, fare1, fare2, fare3;
    if(time == "day")
    {
        taxi = 0.79;
        bus = 0.09;
        train = 0.06;
    }
    else if(time == "night")
    {
        taxi = 0.90;
        bus = 0.09;
        train = 0.06;        
    }
    if(time == "day")
    {
        fare1 =  distance * taxi;
        if(distance <= 20)
        {
            fare2 = distance * bus;
            fare3 = distance * train;
        }
        else if(distance <= 100)
            fare3 = distance * train;
    }
    else if(time == "night")
    {
        fare1 = distance * taxi;
        if(distance <= 20)
        {
            fare2 = distance * bus;
            fare3 = distance * train;
        }
        else if(distance <= 100)
            fare3 = distance * train;

    }
    if(fare1 < fare2 && fare1 < fare3)
        return fare1;
    else if(fare2 < fare1 && fare2 < fare3)
        return fare2;
    else
        return fare3;
}