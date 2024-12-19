#include<iostream>
using namespace std;

int calc_factorial(int num);
int main()
{
    int num;
    while(num != -1)
    {
        cout << "Enter a number(or -1 to exit): ";
        cin >> num;
        cout << "Factorial of " << num << ": " << calc_factorial(num) << endl;
    }
    return 0;
}


int calc_factorial(int num)
{
    if(num == 0)
        return 1;
    else
        return num * calc_factorial(num - 1);
}