#include<iostream>
using namespace std;

int x = 10;

void my_function()
{
    cout << "The value of x is: " << x;
    int x = 20;
}

int main()
{
    my_function();
    int x = 30;
    cout << "The value of x: " << x;
    my_function();
}