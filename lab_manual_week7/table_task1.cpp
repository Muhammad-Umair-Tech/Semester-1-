#include<iostream>
using namespace std;

void table(int number);
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    table(number);
    return 0;
}


void table(int number)
{
    for(int i = 1; i <= 10; i++)
        cout << number << " * " << i << " = " << number * i << endl;
}