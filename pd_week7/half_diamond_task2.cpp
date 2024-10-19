#include<iostream>
using namespace std;

void print_upper_half_diamond();
void print_lower_half_diamond();
int main()
{
    print_upper_half_diamond();
    print_lower_half_diamond();
    return 0;
}


void print_upper_half_diamond()
{
    for(int i = 1; i <= 14; i++)
    {
        for(int k = 14; k >= i; k--)
        {
            cout << " ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout << ".";
        }
        cout << endl;
    }
}


void print_lower_half_diamond()
{
    for(int i = 1; i <= 14; i++)
    {
        for(int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        for(int j = 14; j >= i; j--)
        {
            cout << ".";
        }
        cout << endl;
    }
}