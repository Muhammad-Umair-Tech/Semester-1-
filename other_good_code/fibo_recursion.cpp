#include<iostream>
using namespace std;

int fibonacci(int num);
int main()
{
    int lim;
    cout << "Enter limit: ";
    cin >> lim;
    for(int i = 0; i < lim; i++)
    {
        cout << fibonacci(i) << endl;
    }
    return 0;
}

int fibonacci(int num)
{
    int f_num;
    if(num == 0)
        f_num = 0;
    else if(num == 1)
        f_num = 1;
    else
        f_num = fibonacci(num - 1) + fibonacci(num - 2);
    return f_num;
}