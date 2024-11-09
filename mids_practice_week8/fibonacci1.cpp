#include<iostream>
using namespace std;

void fibonacci(int lim);
int main()
{
    int lim;
    cout << "How many numbers do you want to see? ";
    cin >> lim;
    fibonacci(lim);
    return 0;
}


void fibonacci(int lim)
{
    int n1 = 0, n2 = 1;
    if(lim == 1)
        cout << n1;
    else if(lim == 2)
        cout << n1 << " " << n2;
    else
    {
        cout << n1 << " " << n2;
        for(int i = 0; i < lim; i++)
        {
            int next = n1 + n2;
            cout << " " << next;
            n1 = n2;
            n2 = next; 
        }
    } 
}