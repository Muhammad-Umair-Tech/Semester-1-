#include<iostream>
using namespace std;

int collatz(int n);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Collatz cycle: " << collatz(n) << endl;
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