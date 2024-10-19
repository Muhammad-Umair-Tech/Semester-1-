#include<iostream>
using namespace std;

void fibonacci(int length);
int main()
{
    int length;
    cout << "Enter the length of Fibonacci series: ";
    cin >> length;
    fibonacci(length);
    return 0;
}


void fibonacci(int length)
{
    int n1 = 0, n2 = 1, next;
    if(length == 1)
        cout << n1;
    else if(length == 2)
        cout << n1 << ", " << n2;
    else
    {
        cout << n1 << ", " << n2;
        for(int i = 2; i < length; i++)
        {
            next = n1 + n2;
            cout << ", " << next;
            n1 = n2;
            n2 = next;
        }
    }
}