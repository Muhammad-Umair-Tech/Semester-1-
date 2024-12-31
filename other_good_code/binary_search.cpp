#include<iostream>
using namespace std;

int main()
{
    int array_size = 6;
    int a[array_size] = {1, 2, 3, 4, 5, 6};
    int target = 5;
    int location = 0;
    int left = 0, right = array_size - 1;
    while(left < right)
    {
        int mid = left + (right - left) / 2;
        if(a[mid] == target)
        {
            location = mid;
            break;
        }
        else if(a[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    cout << location;
}