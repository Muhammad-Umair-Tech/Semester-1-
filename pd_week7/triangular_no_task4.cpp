#include<iostream>
using namespace std;

int series(int n);
int main()
{
    int n;
    cout << "Enter the triangle number: ";
    cin >> n;
    cout << "Dots in the triangle: " << series(n);
    return 0;
}




int series(int n)
{               // the series is 1, 3, 6, 10,... general term: a_n = a_(n - 1) + n
    int k = 1;  // base case: where the recursion will be broken
    if(n == 1)
        return 1;
    else
        return series(n - 1) + n;
}