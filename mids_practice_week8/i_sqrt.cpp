#include<iostream>
#include<cmath>
using namespace std;

int isqrt(int n);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << isqrt(n);
    return 0;
}


int isqrt(int n)
{
    int count;
    while(n >= 2)
    {
        n = sqrt(n);
        count++;
    }
    if(n < 0)
        return -1;
    return count;
}