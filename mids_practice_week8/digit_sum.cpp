#include<iostream>
using namespace std;

int total_digits(int n);
int main()
{
    int n, digits, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    digits = total_digits(n);
    for(int i = 1; i <= digits; i++)
    {
        sum = sum + (n % 10);
        n /= 10;
    }
    cout << "Sum: " << sum;
    return 0;
}


int total_digits(int n)
{
    int digits;
    if(n < 0)
        n = -n;
    else
    {
        if(n == 0)
            digits++;
        while(n != 0)
        {
            digits++;
            n /= 10;
        }
    }
    return digits;
}