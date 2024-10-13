#include<iostream>   // task 10 op
using namespace std;

bool are_same_numbers(int num1, int num2, int num3);
int main()
{
    int num1, num2, num3;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;
    cout << are_same_numbers(num1, num2, num3);
    return 0;
}




bool are_same_numbers(int num1, int num2, int num3)
{
    return num1 == num2 == num3;
}