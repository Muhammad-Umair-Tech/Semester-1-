#include<iostream>
#include<cmath>
using namespace std;

int total_digits(int number);
int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "TOtal number of digits: " << total_digits(number);
    return 0;
}



int total_digits(int number)
{
    number = abs(number);
    int total_digits = -1, qoutient, remainder = 1;
    for(int i = 0; i < 10000; i++)
    {
        if(remainder > 0)
        {
            qoutient = number / 10;
            remainder = number % 10;
            number = qoutient;
            total_digits++;
        }
    }
    return total_digits;
}