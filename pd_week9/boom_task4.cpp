#include<iostream>
using namespace std;

bool check_for_7(int numbers[], int size);
int main()
{
    bool result;
    int size;
    cout << "How many numbers do you want to check: ";
    cin >> size;
    int numbers[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    result = check_for_7(numbers, size);
    if(result == true)
        cout << "Boom!";
    else
        cout << "There is no 7 in the array.";
    return 0;
}

bool check_for_7(int numbers[], int size)
{
    bool result = false;
    for(int i = 0; i < size; i++)
    {
        if(numbers[i] == 7)
        {
            result = true;
            break;
        }
    }
    return result;
}