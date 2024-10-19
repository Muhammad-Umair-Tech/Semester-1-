#include<iostream>
using namespace std;

void amplify(int num);
int main()
{
    int num;
    cout << "Enter a number (higher bound): ";
    cin >> num;
    amplify(num);    
}

void amplify(int num)
{
    for(int i = 1; i <= num; i++)
    {
        if(i % 4 == 0)
        {
            i *= 10;
            cout << i << ", ";
            i /= 10;
            continue;
        }
        cout << i << ", ";
    }
}