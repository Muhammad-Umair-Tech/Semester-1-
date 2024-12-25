#include<iostream>
using namespace std;

bool is_special(int numbers[], int size);
int main()
{
    int size;
    cout << "Enter the number of digits you want to enter: ";
    cin >> size;
    int numbers[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[size];
    }
    cout << is_special(numbers, size);
    return 0;
}

bool is_special(int numbers[], int size)
{
    bool special = false;
    for(int i = 0; i < size; i++)
    {
        if((i % 2 == 0) && (numbers[i] % 2 == 0))
            special = true;
        else if((i % 2 != 0) && (numbers[i] % 2 != 0))
            special == true;
        else
        {
            special = false;
            break;
        }
    }
    return special;
}