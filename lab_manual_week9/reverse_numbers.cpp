#include<iostream>
using namespace std;

void show_numbers_reverse(int numbers[], int total_numbers);
int main()
{
    int total_numbers;
    cout << "Enter the number of elements: ";
    cin >> total_numbers;
    if(total_numbers < 1)
    {
        cout << "Invalid input";
        return 0;
    }
    int numbers[total_numbers];
    for(int i = 0; i < total_numbers; i ++)
    {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    show_numbers_reverse(numbers, total_numbers);
    return 0;
}

void show_numbers_reverse(int numbers[], int total_numbers)
{
    for(int i = total_numbers - 1; i >= 0; i--)
    {
        cout << numbers[i] << endl;
    }
}