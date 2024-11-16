#include<iostream>
using namespace std;

bool is_prime(int n);
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << is_prime(n) << endl;
    return 0;
}



bool is_prime(int n)
{
    if(n <= 1)
        return false;
    else
    {
        for(int i = 2; i < n; i++)
        {
            if(n % i == 0)
                return false;
        }
        return true;
    }
}