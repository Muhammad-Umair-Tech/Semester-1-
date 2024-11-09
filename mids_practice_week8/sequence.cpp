#include<iostream>
using namespace std;

int sequence(int n);
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "The required term is: " << sequence(n);
    return 0;
}

int sequence(int n)
{
    int nth;
    if(n == 1)
        nth = 1;
    else
        nth = sequence(n - 1) + n;
    return nth;
}