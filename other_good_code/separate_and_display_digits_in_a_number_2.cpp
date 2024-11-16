#include<iostream>
using namespace std;

int no_of_digits(int n);
int main()
{
    int n, digits;
    cout << "Enter a number: ";
    cin >> n;
    digits = no_of_digits(n);
    cout << "Total digits: " << digits << endl;
    for(int i = 0; i < digits; i++)
    {
        cout << n % 10 << endl;
        n /= 10;
    }
    return 0;
}

int no_of_digits(int n)
{
    int digits;
    if(n < 0)
        n = -n;
    if(n == 0)
        digits++;
    else
    {
        while(n > 0)
        {
            digits++;
            n /= 10;
        }
    }
    return digits;
}