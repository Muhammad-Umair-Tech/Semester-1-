#include<iostream>
using namespace std;

int total_digits(int n);
bool is_harshad(int n);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << is_harshad(n);
    return 0;
}



bool is_harshad(int n)
{
    int org_n = n, sum = 0, digits = total_digits(n);
    for(int i = 0; i < digits; i++)
    {
        sum = sum + (n % 10);
        n /= 10;
    }
    bool result = (org_n % sum == 0);
    return result;
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