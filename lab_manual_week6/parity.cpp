#include<iostream>   // task 2 op 
using namespace std;

bool parity_analysis(int num);
int main()
{
    int num;
    cout << "Enter a three-digit number: ";
    cin >> num;
    cout << parity_analysis(num);
    return 0;
}



bool parity_analysis(int num)
{
    int place1, place2, place3, rem1;
    place1 = num / 100;
    rem1 = num % 100;
    place2 = rem1 / 10;
    place3 = rem1 % 10;
    return (num % 2 == 0 && (place1 + place2 + place3) % 2 == 0);
}