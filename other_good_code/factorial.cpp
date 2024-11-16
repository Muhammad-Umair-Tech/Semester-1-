#include<iostream>
using namespace std;

int factorial(int number);
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if(number < 0)
        cout << "Undefined";
    else
        cout << factorial(number);
    return 0;
}


int factorial(int number)
{
    int number_factorial;
    if(number == 0)
        number_factorial = 1;
    else
        number_factorial = number * factorial(number - 1);
    return number_factorial;
}