#include<iostream>
using namespace std;

float calculate_volume(string unit, float length, float width, float height);
int main()
{
    string unit;
    float length, width, height, volume;
    cout << "Enter the length of the pyramid: ";
    cin >> length;
    cout << "Enter the width of the pyramid: ";
    cin >> width;
    cout << "Enter the height of the pyramid: ";
    cin >> height;
    cout << "Enter the volume unit (millimeters, centimeters, meters, kilometers): ";
    cin >> unit;
    volume = calculate_volume(unit, length, width, height);
    cout << "The volume of the pyramid is: " << volume << " cubic " << unit;
    return 0;
}


float calculate_volume(string unit, float length, float width, float height)
{
    float volume;
    if(unit == "millimeters")
        volume = ((length * width * height) / 3) * 1000 * 1000 * 1000;  
    else if(unit == "centimeters")
        volume = ((length * width * height) / 3) * 100 * 100 * 100;  
    else if(unit == "meters")
        volume = ((length * width * height) / 3);
    else if(unit == "kilometers")
        volume = ((length * width * height) / 3) / (1000 * 1000 * 1000);
    else 
        return 0;
    return volume;    
}