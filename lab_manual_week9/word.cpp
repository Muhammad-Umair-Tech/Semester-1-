#include<iostream>
using namespace std;

int main()
{
    char word[5] = {'h', 'e', 'l', 'l', 'o'};
    for(int i = 0; word[i] != '\0'; i++)
    {
        if(word[i] == 'k')
        {
            cout << "Exists";
            break;
        }
    }
    cout << "Doesn't exist";
    return 0;
}