#include<iostream>
using namespace std;

int main()
{
    int h, x, y, x_1, x_2, x_3, y_1, y_4, x_0 = 0, y_0 = 0;
    cout << "Enter the value of h: ";
    cin >> h;
    cout << "Enter the x-coordinate of the point: ";
    cin >> x;
    cout << "Enter the y-coordinate of the point: ";
    cin >> y;
    x_1 = h * 1;
    x_2 = h * 2;
    x_3 = h * 3;
    y_1 = h * 1;
    y_4 = h * 4;
    if((x >= x_0 && x <= x_3 && y == y_0) || (x >= x_0 && x <= x_3 && y == y_1))
        cout << "On border";
    else if(x > x_0 && x < x_3 && y > y_0 && y < y_1)
        cout << "Inside";
    else if((y >= y_0 && y <= y_4 && x == x_1) || (y >= y_0 && y <= y_4 && x == x_2) || (x >= x_1 && x <= x_2 && y == y_4))
        cout << "On border";
    else if(x > x_1 && x < x_2 && y > y_0 && y < y_4)
        cout << "Inside";
    else
        cout << "Outside";
    return 0;
}