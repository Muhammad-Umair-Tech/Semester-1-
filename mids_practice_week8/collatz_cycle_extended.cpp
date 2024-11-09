#include<iostream>
using namespace std;

int collatz(int n);
int main()
{
    int upper, lower, max;
    cout << "Enter the lower number: ";
    cin >> lower;
    cout << "Enter the upper number: ";
    cin >> upper;
    max = collatz(lower);
    for(int i = lower + 1; i <= upper; i++)
    {
        if(max < collatz(i))
            max = collatz(i);
    }
    cout << lower << " " << upper << " " << max;
    return 0;
}


int collatz(int n)
{
    int count = 1;
    for(int i = n; i >= 1; i--)
    {
        if(n % 2 == 0)
            n = n / 2;
        else
            n = (n * 3) + 1;
        count++;
        if(n == 1)
            break;
    }
    return count;
}