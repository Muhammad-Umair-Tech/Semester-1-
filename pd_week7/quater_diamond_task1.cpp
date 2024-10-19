#include<iostream>
using namespace std;

void print_diamond();
int main()
{
    print_diamond();
    return 0;
}



void print_diamond()
{
    for(int i = 0; i < 14; i++)
    {
        for(int j = 14; j > i; j--)
        {
            cout << ".";
        }
        cout << endl;
    }
}
