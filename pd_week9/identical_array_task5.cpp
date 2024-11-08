#include<iostream>
using namespace std;

bool only_identical_elements(string items[], int size);
int main()
{
    string items[4];
    for(int i = 0; i < 4; i++)
    {
        cout << "Enter character " << i + 1 << ": ";
        cin >> items[i];
    }
    cout << only_identical_elements(items, 4);
    return 0;
}

bool only_identical_elements(string items[], int size)
{
    string item = items[0];
    bool all_same = true;
    for(int i = 0; i < size; i++)
    {
        if(items[i] != item)
        {
            all_same = false;
            break;
        }
    }
    return all_same;
}