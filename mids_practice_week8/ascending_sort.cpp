#include<iostream>
using namespace std;

int main()
{
    int size = 5;
    int numbers[size] = {5, 4, 3, 2, 1};
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
    for(int k = 0; k < size; k++)
    {
        cout << numbers[k] << endl;
    }
    return 0;
}