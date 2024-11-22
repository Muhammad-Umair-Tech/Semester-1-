#include<iostream>
using namespace std;

int calculate_angle(string moves[], int size);
int main()
{
    int size;
    int angle, rotation;
    cout << "Enter the number of moves you want to make: ";
    cin >> size;
    string moves[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter direction " << i + 1 << ": ";
        cin >> moves[i];
    }
    angle = calculate_angle(moves, size);
    rotation = angle / 360;
    if(rotation < 0)
        rotation = -1 * rotation;
    cout << rotation;
    return 0;
}


int calculate_angle(string moves[], int size)
{
    int angle;
    for(int i = 0; i < size; i++)
    {
        if(moves[i] == "right")
            angle += 90;
        else if(moves[i] == "left")
            angle -= 90;      
    }
    return angle;
}