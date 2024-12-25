#include<iostream>  // task 5
using namespace std;

bool is_not_unique(int numbers[], int size, int input);
int main()
{
    int size, input, uniques = 0;
    cout << "Enter the number of elements: ";
    cin >> size;
    int numbers[size];
    for(int i = 0; i < size; i++)
    {
        numbers[i] = 0;
    }
    if(size < 1)
    {
        cout << "Invalid input";
        return 0;
    }
    for(int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> input;
        if(is_not_unique(numbers, size, input))
            cout << endl << "Already taken " << input << endl;    
        else
        {
            numbers[i] = input;
            uniques++;
        } 
    }      
    cout << "Unique numbers: ";
    for(int i = 0; i < uniques; i++)
    {
        cout << numbers[i] << endl;
    }
    return 0;
}

bool is_not_unique(int numbers[], int size, int input)
{
    for(int i = 0; i < size; i++)
    {
        if(input == numbers[i])
            return true;
    }
}