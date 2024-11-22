#include<iostream>
using namespace std;

bool check_for_duplicates(int numbers[], int size);
void arrange_in_ascending(int numbers[], int size);
void print_array(int numbers[], int size);
int main()
{
    int size;
    bool no_duplicates = true;
    cout << "Enter array size: ";
    cin >> size;
    int numbers[size];
    for(int i = 0; i < size; i++) // taking in elements into the array
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    no_duplicates = check_for_duplicates(numbers, size); // checking if the array has all elements unique
    if(no_duplicates) // rearranging into ascending order if no duplicates
    {
        cout << "True" << endl;
        arrange_in_ascending(numbers, size);
        print_array(numbers, size);
    }
    else
        cout << "False" << endl;
    return 0;
}


bool check_for_duplicates(int numbers[], int size)
{
    int no_duplicates = true;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(numbers[j] == numbers[i])
            {
                no_duplicates = false;
                break;
            }
        }
    }
    return no_duplicates;
}

void print_array(int numbers[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
}

void arrange_in_ascending(int numbers[], int size)
{
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}