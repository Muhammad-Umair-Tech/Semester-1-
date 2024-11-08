#include<iostream>
using namespace std;

void transform(int numbers[], int size, int times);
int main()
{
    int size, times;
    cout << "Enter the number of elements: ";
    cin >> size;
    int numbers[size];
    cout << "How many times do you want to transform: ";
    cin >> times;
    for(int i = 0; i < size; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    transform(numbers, size, times);
    return 0;
}

void transform(int numbers[], int size, int times)
{
    for(int i = 0; i < times; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(numbers[j] % 2 == 0)
                numbers[j] -= 2;
            else
                numbers[j] += 2;
        }
    }
    for(int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }
}