#include<iostream>   // task 11 cp
using namespace std;

void check_speed(float speed);
int main()
{
    float speed;
    cout << "Enter your spoeed: ";
    cin >> speed;
    check_speed(speed);
    return 0;
}




void check_speed(float speed)
{
    if(speed <= 10)
        cout << "Slow";
    else if(speed > 10 && speed <= 50)
        cout << "Average";
    else if(speed > 50 && speed <= 150)
        cout << "Fast";
    else if(speed > 150 && speed <= 1000)
        cout << "Ultra fast";
    else if(speed > 1000)
        cout << "Extremely fast";
}