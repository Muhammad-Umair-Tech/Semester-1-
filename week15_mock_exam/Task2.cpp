#include<iostream>
using namespace std;

void print_string_array(string array[], int size);
int main()
{
    int size, actual_size, count = 1;
    cout << "Enter array size: ";
    cin >> size;
    actual_size = size + size - 1;
    string nums[actual_size];
    for(int i = 0; i < actual_size; i += 2)
    {
        cout << "Enter number " << count << ": ";
        cin >> nums[i];
        nums[i + 1] = ",";
        count++;
    }
    print_string_array(nums, actual_size);
    return 0;
}


void print_string_array(string array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i];
    }
}