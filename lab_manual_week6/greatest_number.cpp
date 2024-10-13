#include<iostream>  // task 4 cl
using namespace std;


int greatest_number(int num1, int num2, int num3);
int main()
{
    int num1, num2, num3;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << "Enter number 3: ";
    cin >> num3;
    cout << "The greatest number among " << num1 << ", " << num2 << " and " << num3 << " is " << greatest_number(num1, num2, num3);
    return 0;
}


int greatest_number(int num1, int num2, int num3)
{
    if(num1 > num2 && num1 > num3)
        return num1;
    else if(num2 > num1 && num2 > num3)
        return num2;
    else
        return num3;
}