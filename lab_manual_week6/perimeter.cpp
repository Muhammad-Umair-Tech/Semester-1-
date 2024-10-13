#include<iostream>   // task 3 op
using namespace std;

float perimeter(char shape, float length);
int main()
{
    float length;
    char shape;
    cout << "Perimeter Calculator\nChoose a shape by entering the associated character:\nSquare: s\nCircle: c\nEquilateral triangle: t\nRegular hexagon: h\nShape: ";
    cin >> shape;
    if(shape == 's' || shape == 't' || shape == 'h')
        cout << "Enter the length of the side: ";
    else
        cout << "Enter the length of the radius: ";
    cin >> length;
    cout << "The perimeter of the shape is: " << perimeter(shape, length);
    return 0;
}



float perimeter(char shape, float length)
{
    if(shape == 's')
        return 4 * length;
    else if(shape == 'c')
        return 6.28 * length;
    else if(shape == 't')
        return 3 * length;
    else if(shape == 'h')
        return 6 * length;
    else
        return 0; 
}