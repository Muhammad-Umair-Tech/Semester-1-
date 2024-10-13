#include<iostream> // task 1 cp
using namespace std;

string decide_activity(string temperature, string humidity);
int main()
{
    string temperature, humidity, activity;
    cout << "Enter temperature (warm/cold): ";
    cin >> temperature;
    cout << "Enter humidity (humid/dry): ";
    cin >> humidity;
    activity = decide_activity(temperature, humidity);
    cout << activity;
    return 0;
}





string decide_activity(string temperature, string humidity)
{
    string activity;
    if(temperature == "warm")
    {
        if(humidity == "humid")
            activity = "swim";
        else if(humidity == "dry")
            activity = "play tennis";
    }
    else if(temperature == "cold")
    {
        if(humidity == "humid")
            activity = "watch tv";
        else if(humidity == "dry")
            activity = "play basketball";        
    }
    return activity;
}
