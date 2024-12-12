#include<iostream>
using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 6, 4};
    int x = 6, location = 0;
    for(int i = 0; i < 5; i++)
    {
        if(a[i] == x)
            location = i;
    }
    cout << location;
    return 0;
}