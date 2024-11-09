#include<iostream>
using namespace std;

void collatz(int n);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    collatz(n);
    return 0;
}


void collatz(int n)
{
    int org_i;
    for(int i = n; i >= 1; i--)
    {
        if(n % 2 == 0)
            n = n / 2;
        else 
            n = (n * 3) + 1;
        cout << n << " ";
        if(n == 1)
            break;
    }

}