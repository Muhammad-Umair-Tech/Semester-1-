#include<iostream>
using namespace std;

int total_digits(int num);
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Total number of digits: " << total_digits(num);
    return 0;
}


int total_digits(int num)
{
    int total_digits;
    if(num == 0)
        total_digits++;
    else
    {
        if(num < 0) // converting negative numbers into positive
            num = -num;
        while(num != 0)
        {
            total_digits++;
            num /= 10;
        }
    }
    return total_digits;
}