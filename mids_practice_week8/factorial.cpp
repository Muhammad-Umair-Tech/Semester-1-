#include<iostream>
using namespace  std;

int factorial(int n);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << n << "! = " << factorial(n);
    return 0;
}

int factorial(int n)
{
    int f;
    if(n == 0)
        f = 1;
    else    
        f = n * factorial(n - 1);
    return f;
}