//task 7 cp

#include<iostream>
using namespace std;

void is_symmetric(int num);
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    is_symmetric(num);
    return 0;
}



void is_symmetric(int num)
{
    int place1, place2, place3, rem1;
    place1 = num / 100;
    rem1 = num % 100;
    place2 = rem1 / 10;
    place3 = rem1 % 10;
    if(place1 == place3)
        cout << "True";
    else
        cout << "False";
}