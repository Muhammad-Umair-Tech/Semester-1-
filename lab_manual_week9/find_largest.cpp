#include<iostream>  // task 6
using namespace std;

int largest(int numbers[], int size);
int main()
{
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    int numbers[size];
    for(int i = 0; i < size; i++)
    {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    cout << "Largest element: " << largest(numbers, size);
    return 0;
}


int largest(int numbers[], int size)
{
    int largest = numbers[0];
    for(int i = 1; i < size; i++)
    {
        if(numbers[i] > largest)
            largest = numbers[i];
    }
    return largest;
}